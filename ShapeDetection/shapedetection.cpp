#include "shapedetection.h"
#include "ui_shapedetection.h"

ShapeDetection::ShapeDetection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShapeDetection)
{
    ui->setupUi(this);
}

ShapeDetection::~ShapeDetection()
{
    delete ui;
}


