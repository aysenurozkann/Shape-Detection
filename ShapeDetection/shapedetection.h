#ifndef SHAPEDETECTION_H
#define SHAPEDETECTION_H

#include <QMainWindow>

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
