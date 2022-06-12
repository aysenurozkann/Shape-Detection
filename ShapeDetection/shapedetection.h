#ifndef SHAPEDETECTION_H
#define SHAPEDETECTION_H

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

private slots:
    void on_pausebtn_clicked();

private:
    Ui::ShapeDetection *ui;

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

