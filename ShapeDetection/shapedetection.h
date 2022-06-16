#ifndef SHAPEDETECTION_H
#define SHAPEDETECTION_H

#include "settingswindow.h"
#include <QMainWindow>
#include <QTimer>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

#include <iostream>
#include <vector>

using namespace std;
using namespace cv;


namespace Ui {
class ShapeDetection;
}

class ShapeDetection : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShapeDetection(QWidget *parent = 0);
    ~ShapeDetection();


public slots:
    void processFrameAndUpdate();
    void getContours(Mat img_dil, Mat img);

private slots:
    void on_pausebtn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


    void on_settingsbtn_clicked();

private:
    Ui::ShapeDetection *ui;
    settingswindow *windowsetting;

    cv::VideoCapture liveCap;

    cv::Mat matOriginal;
    cv::Mat matProcessed;

    QImage qimageOriginal;
    QImage qimgProcessed;

    std::vector<cv::Vec3f> vecCircles;
    std::vector<cv::Vec3f>::iterator itrCircles;

    QTimer *tmrTimer;
};

#endif // SHAPEDETECTION_H

