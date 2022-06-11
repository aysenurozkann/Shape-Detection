#ifndef SHAPEDETECTION_H
#define SHAPEDETECTION_H

#include <QMainWindow>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace Ui {
class ShapeDetection;
}

class ShapeDetection : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShapeDetection(QWidget *parent = 0);
    ~ShapeDetection();

private:
    Ui::ShapeDetection *ui;
};

#endif // SHAPEDETECTION_H

