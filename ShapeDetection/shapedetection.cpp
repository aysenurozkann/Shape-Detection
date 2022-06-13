#include "shapedetection.h"
#include "ui_shapedetection.h"

#include <QtCore>

ShapeDetection::ShapeDetection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShapeDetection)
{
    ui->setupUi(this);

    const std::string videoStreamAddress = "https://192.168.1.3:8080/video";;
    if(liveCap.open(videoStreamAddress)==false)
    {
        ui->outputlabels->appendPlainText("Error: Webcam not accessed successfully!");
        return;
    }
    tmrTimer = new QTimer(this);
    connect(tmrTimer, SIGNAL(timeout()), this, SLOT(processFrameAndUpdate()));
    tmrTimer->start(20);

}

ShapeDetection::~ShapeDetection()
{
    delete ui;
}
using namespace cv;

////////////////////////////////////////////////////////////////////////////7

void getContours(Mat img_dil, Mat img)
{
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;

    findContours(img_dil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
    // drawContours(img, contours, -1, Scalar(100, 0, 255), 2);

    vector<vector<Point>> conPoly(contours.size());
    vector<Rect> boundRect(contours.size());
    string ObjectType;

    // böylece alanı 1000 den küçük olanları gürültü olarak algıladık ve çizdirmedik, contour yapmadık.
    for (int i = 0; i < contours.size(); i++)
    {
        int area = contourArea(contours[i]);

        if (area > 1000)
        {
            float peri = arcLength(contours[i], true);
            approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
            drawContours(img, conPoly, i, Scalar(0, 255, 0), 2);
            //cout << "conyPol elemanları" << conPoly[i] << endl; // bu conPoly dediğimiz contours deki bulunan nokta sayıları
            //cout << conPoly[i].size() << endl;
            boundRect[i] = boundingRect(conPoly[i]);
            // rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(255, 100, 100), 3);

            int objCore = (int)conPoly[i].size();

            if (objCore == 3) { ObjectType = "Triangle"; }
            else if (objCore == 4)
            {
                float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
                if (aspRatio > 0.95 && aspRatio < 1.05) { ObjectType = "Square"; } // genişlik ve yüksekliğin oranı 1 civarında ise bu bir karedir
                else { ObjectType = "Rectangle"; }
            }

            else if (objCore > 4) { ObjectType = "Circle"; }

            drawContours(img, conPoly, i, Scalar(0, 255, 0), 2);
            rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(255, 100, 100), 3);
            putText(img, ObjectType, { boundRect[i].x, boundRect[i].y - 5 }, 1, FONT_HERSHEY_PLAIN, Scalar(0, 0, 0), 1);
        }
    }
}
Mat preProcessImg(Mat image)
{
    Mat img_gray, img_gaus, img_canny, img_dil;

    cvtColor(image, img_gray, COLOR_BGR2GRAY);
    GaussianBlur(img_gray, img_gaus, Size(3, 3), (0, 0),0);
    Canny(img_gaus, img_canny, 60, 100);

    // canny ile aşınan kenarları dilate ile tekrar kalınlaştırıyoruz.
    Mat kernel(getStructuringElement((MORPH_RECT), Size(3, 3)));
    dilate(img_canny, img_dil, kernel);

    getContours(img_dil, image);

    //imshow("dilation Image", img_dil);
    return img_dil;
}

void ShapeDetection::processFrameAndUpdate()
{
    liveCap.read(matOriginal);

    if(matOriginal.empty() == true)
        return;

    matProcessed = preProcessImg(matOriginal);

    cv::cvtColor(matOriginal, matOriginal, CV_BGR2RGB);

    QImage qimageOriginal((uchar*)matOriginal.data, matOriginal.cols, matOriginal.rows, matOriginal.step, QImage::Format_RGB888);
    QImage qimgProcessed((uchar*)matProcessed.data, matProcessed.cols, matProcessed.rows, matProcessed.step, QImage::Format_Indexed8);



    ui->outputframe->setPixmap(QPixmap::fromImage(qimageOriginal)); // Outputi big frame
    ui->inputframe->setPixmap(QPixmap::fromImage(qimgProcessed)); // input small frame

}


void ShapeDetection::on_pausebtn_clicked()
{
    if(tmrTimer->isActive() == true)
    {
        tmrTimer->stop();
        ui->pausebtn->setText("Resume");
    }
    else
    {
        tmrTimer->start(20);
        ui->pausebtn->setText("Pause");
    }
}

void ShapeDetection::on_pushButton_clicked()
{
    QWidget::close();
}

void ShapeDetection::on_pushButton_2_clicked()
{
    QWidget::showMinimized();
}

void ShapeDetection::on_pushButton_3_clicked()
{
    if(QWidget::isMaximized() == true)
        QWidget::showNormal();
    else
        QWidget::showMaximized();

}
