/********************************************************************************
** Form generated from reading UI file 'shapedetection.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPEDETECTION_H
#define UI_SHAPEDETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShapeDetection
{
public:
    QAction *actionOpen;
    QAction *actionOpen_Camera;
    QAction *actionNew_Window;
    QAction *actionClear_Window;
    QAction *actionExit;
    QAction *actionExit_2;
    QAction *actionTake_a_Screen_Shoot;
    QAction *actionExit_3;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionPencil;
    QAction *actionPencil_2;
    QAction *actionErase;
    QAction *actionColor;
    QAction *actionFont;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuTools_Setting;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ShapeDetection)
    {
        if (ShapeDetection->objectName().isEmpty())
            ShapeDetection->setObjectName(QStringLiteral("ShapeDetection"));
        ShapeDetection->resize(471, 441);
        ShapeDetection->setMinimumSize(QSize(350, 350));
        ShapeDetection->setStyleSheet(QLatin1String("#ShapeDetection{\n"
"	background:#001219;\n"
"}\n"
""));
        actionOpen = new QAction(ShapeDetection);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen_Camera = new QAction(ShapeDetection);
        actionOpen_Camera->setObjectName(QStringLiteral("actionOpen_Camera"));
        actionNew_Window = new QAction(ShapeDetection);
        actionNew_Window->setObjectName(QStringLiteral("actionNew_Window"));
        actionClear_Window = new QAction(ShapeDetection);
        actionClear_Window->setObjectName(QStringLiteral("actionClear_Window"));
        actionExit = new QAction(ShapeDetection);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit_2 = new QAction(ShapeDetection);
        actionExit_2->setObjectName(QStringLiteral("actionExit_2"));
        actionTake_a_Screen_Shoot = new QAction(ShapeDetection);
        actionTake_a_Screen_Shoot->setObjectName(QStringLiteral("actionTake_a_Screen_Shoot"));
        actionExit_3 = new QAction(ShapeDetection);
        actionExit_3->setObjectName(QStringLiteral("actionExit_3"));
        actionZoom_in = new QAction(ShapeDetection);
        actionZoom_in->setObjectName(QStringLiteral("actionZoom_in"));
        actionZoom_out = new QAction(ShapeDetection);
        actionZoom_out->setObjectName(QStringLiteral("actionZoom_out"));
        actionUndo = new QAction(ShapeDetection);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(ShapeDetection);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionPencil = new QAction(ShapeDetection);
        actionPencil->setObjectName(QStringLiteral("actionPencil"));
        actionPencil_2 = new QAction(ShapeDetection);
        actionPencil_2->setObjectName(QStringLiteral("actionPencil_2"));
        actionErase = new QAction(ShapeDetection);
        actionErase->setObjectName(QStringLiteral("actionErase"));
        actionColor = new QAction(ShapeDetection);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        actionFont = new QAction(ShapeDetection);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        centralWidget = new QWidget(ShapeDetection);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ShapeDetection->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ShapeDetection);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 471, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuTools_Setting = new QMenu(menuTools);
        menuTools_Setting->setObjectName(QStringLiteral("menuTools_Setting"));
        ShapeDetection->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ShapeDetection);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ShapeDetection->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ShapeDetection);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ShapeDetection->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Camera);
        menuFile->addAction(actionNew_Window);
        menuFile->addAction(actionClear_Window);
        menuFile->addSeparator();
        menuFile->addAction(actionTake_a_Screen_Shoot);
        menuFile->addSeparator();
        menuFile->addAction(actionExit_3);
        menuEdit->addAction(actionZoom_in);
        menuEdit->addAction(actionZoom_out);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuTools->addAction(actionPencil_2);
        menuTools->addAction(actionErase);
        menuTools->addSeparator();
        menuTools->addAction(menuTools_Setting->menuAction());
        menuTools_Setting->addAction(actionColor);
        menuTools_Setting->addAction(actionFont);

        retranslateUi(ShapeDetection);

        QMetaObject::connectSlotsByName(ShapeDetection);
    } // setupUi

    void retranslateUi(QMainWindow *ShapeDetection)
    {
        ShapeDetection->setWindowTitle(QApplication::translate("ShapeDetection", "ShapeDetection", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("ShapeDetection", "Open", Q_NULLPTR));
        actionOpen_Camera->setText(QApplication::translate("ShapeDetection", "Open Camera", Q_NULLPTR));
        actionNew_Window->setText(QApplication::translate("ShapeDetection", "New Window", Q_NULLPTR));
        actionClear_Window->setText(QApplication::translate("ShapeDetection", "Clear Window", Q_NULLPTR));
        actionExit->setText(QApplication::translate("ShapeDetection", "Exit", Q_NULLPTR));
        actionExit_2->setText(QApplication::translate("ShapeDetection", "Exit", Q_NULLPTR));
        actionTake_a_Screen_Shoot->setText(QApplication::translate("ShapeDetection", "Take a Screen Shoot", Q_NULLPTR));
        actionExit_3->setText(QApplication::translate("ShapeDetection", "Exit", Q_NULLPTR));
        actionZoom_in->setText(QApplication::translate("ShapeDetection", "Zoom in", Q_NULLPTR));
        actionZoom_out->setText(QApplication::translate("ShapeDetection", "Zoom out", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("ShapeDetection", "Undo", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("ShapeDetection", "Redo", Q_NULLPTR));
        actionPencil->setText(QApplication::translate("ShapeDetection", "Pencil", Q_NULLPTR));
        actionPencil_2->setText(QApplication::translate("ShapeDetection", "Pencil", Q_NULLPTR));
        actionErase->setText(QApplication::translate("ShapeDetection", "Erase", Q_NULLPTR));
        actionColor->setText(QApplication::translate("ShapeDetection", "Color", Q_NULLPTR));
        actionFont->setText(QApplication::translate("ShapeDetection", "Font", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("ShapeDetection", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("ShapeDetection", "Edit", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("ShapeDetection", "Tools", Q_NULLPTR));
        menuTools_Setting->setTitle(QApplication::translate("ShapeDetection", "Tools Setting", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShapeDetection: public Ui_ShapeDetection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPEDETECTION_H
