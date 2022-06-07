#include "shapedetection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ShapeDetection w;
    w.show();

    return a.exec();
}
