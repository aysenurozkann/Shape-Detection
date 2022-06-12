#-------------------------------------------------
#
# Project created by QtCreator 2022-06-07T16:29:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShapeDetection
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        shapedetection.cpp

HEADERS  += shapedetection.h

FORMS    += shapedetection.ui


INCLUDEPATH += C:\opencv320\opencv\release\install\include

LIBS += C:\opencv320\opencv\release\bin\libopencv_calib3d320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_core320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_features2d320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_flann320.dll

LIBS += C:\opencv320\opencv\release\bin\libopencv_highgui320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_imgcodecs320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_imgproc320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_ml320.dll

LIBS += C:\opencv320\opencv\release\bin\libopencv_objdetect320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_photo320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_shape320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_stitching320.dll

LIBS += C:\opencv320\opencv\release\bin\libopencv_superres320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_video320.dll
LIBS += C:\opencv320\opencv\release\bin\libopencv_videoio320.dll

LIBS += C:\opencv320\opencv\release\bin\libopencv_videostab320.dll
LIBS += C:\opencv320\opencv\release\bin\opencv_ffmpeg320.dll


