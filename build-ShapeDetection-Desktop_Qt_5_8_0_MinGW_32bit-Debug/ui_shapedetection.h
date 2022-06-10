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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShapeDetection
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *LeftMenuContainer;
    QVBoxLayout *verticalLayout;
    QWidget *LeftMenuSubContainer;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *menubtn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *zoominbtn;
    QPushButton *zoomoutbtn;
    QPushButton *pencilbtn;
    QPushButton *erasebtn;
    QPushButton *takephotobtn;
    QPushButton *switchbtn;
    QSpacerItem *verticalSpacer;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_5;
    QPushButton *settingsbtn;
    QPushButton *helpbtn;
    QWidget *MainBodyContainer;
    QVBoxLayout *verticalLayout_5;
    QWidget *headercontainer;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *bodycontainer;

    void setupUi(QMainWindow *ShapeDetection)
    {
        if (ShapeDetection->objectName().isEmpty())
            ShapeDetection->setObjectName(QStringLiteral("ShapeDetection"));
        ShapeDetection->resize(518, 510);
        ShapeDetection->setMinimumSize(QSize(350, 350));
        ShapeDetection->setStyleSheet(QLatin1String("#ShapeDetection{\n"
"	background:#001219;\n"
"}\n"
""));
        centralWidget = new QWidget(ShapeDetection);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("*{\n"
"	border: none;\n"
"	background-color: transparent;\n"
"	background : none;\n"
"	padding: 0;\n"
"	margin: 0;\n"
"	color:#fff;\n"
"}\n"
"\n"
"#centralWidget{\n"
"	background-color:#1f232a;\n"
"}\n"
"\n"
"#LeftMenuSubContainer{\n"
"	background-color:#16191d;\n"
"}\n"
"\n"
"#LeftMenuSubContainer QPushButton{\n"
"	text-align:left;\n"
"	padding:10px 10px;\n"
"	border-top-left-radius:10px;\n"
"	border-bottom-left-radius:10px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LeftMenuContainer = new QWidget(centralWidget);
        LeftMenuContainer->setObjectName(QStringLiteral("LeftMenuContainer"));
        verticalLayout = new QVBoxLayout(LeftMenuContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LeftMenuSubContainer = new QWidget(LeftMenuContainer);
        LeftMenuSubContainer->setObjectName(QStringLiteral("LeftMenuSubContainer"));
        verticalLayout_2 = new QVBoxLayout(LeftMenuSubContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 0, 0, 0);
        frame = new QFrame(LeftMenuSubContainer);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        menubtn = new QPushButton(frame);
        menubtn->setObjectName(QStringLiteral("menubtn"));
        menubtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(menubtn);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignTop);

        frame_2 = new QFrame(LeftMenuSubContainer);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 10, 0, 10);
        zoominbtn = new QPushButton(frame_2);
        zoominbtn->setObjectName(QStringLiteral("zoominbtn"));

        verticalLayout_3->addWidget(zoominbtn);

        zoomoutbtn = new QPushButton(frame_2);
        zoomoutbtn->setObjectName(QStringLiteral("zoomoutbtn"));

        verticalLayout_3->addWidget(zoomoutbtn);

        pencilbtn = new QPushButton(frame_2);
        pencilbtn->setObjectName(QStringLiteral("pencilbtn"));

        verticalLayout_3->addWidget(pencilbtn);

        erasebtn = new QPushButton(frame_2);
        erasebtn->setObjectName(QStringLiteral("erasebtn"));

        verticalLayout_3->addWidget(erasebtn);

        takephotobtn = new QPushButton(frame_2);
        takephotobtn->setObjectName(QStringLiteral("takephotobtn"));

        verticalLayout_3->addWidget(takephotobtn);

        switchbtn = new QPushButton(frame_2);
        switchbtn->setObjectName(QStringLiteral("switchbtn"));

        verticalLayout_3->addWidget(switchbtn);


        verticalLayout_2->addWidget(frame_2, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        frame_3 = new QFrame(LeftMenuSubContainer);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 10, 0, 10);
        pushButton_5 = new QPushButton(frame_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_4->addWidget(pushButton_5);

        settingsbtn = new QPushButton(frame_3);
        settingsbtn->setObjectName(QStringLiteral("settingsbtn"));
        settingsbtn->setStyleSheet(QStringLiteral("background-color:#1f232a;"));

        verticalLayout_4->addWidget(settingsbtn);

        helpbtn = new QPushButton(frame_3);
        helpbtn->setObjectName(QStringLiteral("helpbtn"));
        helpbtn->setStyleSheet(QStringLiteral("background-color:#16191d;"));

        verticalLayout_4->addWidget(helpbtn);


        verticalLayout_2->addWidget(frame_3, 0, Qt::AlignBottom);


        verticalLayout->addWidget(LeftMenuSubContainer, 0, Qt::AlignLeft);


        horizontalLayout->addWidget(LeftMenuContainer, 0, Qt::AlignLeft);

        MainBodyContainer = new QWidget(centralWidget);
        MainBodyContainer->setObjectName(QStringLiteral("MainBodyContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MainBodyContainer->sizePolicy().hasHeightForWidth());
        MainBodyContainer->setSizePolicy(sizePolicy1);
        MainBodyContainer->setStyleSheet(QStringLiteral("background-color:rgb(52, 151, 181);"));
        verticalLayout_5 = new QVBoxLayout(MainBodyContainer);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        headercontainer = new QWidget(MainBodyContainer);
        headercontainer->setObjectName(QStringLiteral("headercontainer"));
        horizontalLayout_3 = new QHBoxLayout(headercontainer);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        frame_5 = new QFrame(headercontainer);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        label = new QLabel(frame_5);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);


        horizontalLayout_3->addWidget(frame_5, 0, Qt::AlignLeft);

        frame_4 = new QFrame(headercontainer);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        horizontalLayout_3->addWidget(frame_4, 0, Qt::AlignRight);


        verticalLayout_5->addWidget(headercontainer, 0, Qt::AlignTop);

        bodycontainer = new QWidget(MainBodyContainer);
        bodycontainer->setObjectName(QStringLiteral("bodycontainer"));

        verticalLayout_5->addWidget(bodycontainer);


        horizontalLayout->addWidget(MainBodyContainer);

        ShapeDetection->setCentralWidget(centralWidget);

        retranslateUi(ShapeDetection);

        QMetaObject::connectSlotsByName(ShapeDetection);
    } // setupUi

    void retranslateUi(QMainWindow *ShapeDetection)
    {
        ShapeDetection->setWindowTitle(QApplication::translate("ShapeDetection", "ShapeDetection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        menubtn->setToolTip(QApplication::translate("ShapeDetection", "menu", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menubtn->setText(QApplication::translate("ShapeDetection", "Menu", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zoominbtn->setToolTip(QApplication::translate("ShapeDetection", "zoomin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        zoominbtn->setText(QApplication::translate("ShapeDetection", "Zoom in", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zoomoutbtn->setToolTip(QApplication::translate("ShapeDetection", "zoomout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        zoomoutbtn->setText(QApplication::translate("ShapeDetection", "Zoom out", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pencilbtn->setToolTip(QApplication::translate("ShapeDetection", "pencil", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pencilbtn->setText(QApplication::translate("ShapeDetection", "Pencil", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        erasebtn->setToolTip(QApplication::translate("ShapeDetection", "erase", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        erasebtn->setText(QApplication::translate("ShapeDetection", "Erase", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        takephotobtn->setToolTip(QApplication::translate("ShapeDetection", "takephoto", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        takephotobtn->setText(QApplication::translate("ShapeDetection", "Take a Photo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        switchbtn->setToolTip(QApplication::translate("ShapeDetection", "switch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        switchbtn->setText(QApplication::translate("ShapeDetection", "Switch", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ShapeDetection", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        settingsbtn->setToolTip(QApplication::translate("ShapeDetection", "Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        settingsbtn->setText(QApplication::translate("ShapeDetection", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        helpbtn->setToolTip(QApplication::translate("ShapeDetection", "Help", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        helpbtn->setText(QApplication::translate("ShapeDetection", "Help", Q_NULLPTR));
        label_2->setText(QApplication::translate("ShapeDetection", "uygulama iconu", Q_NULLPTR));
        label->setText(QApplication::translate("ShapeDetection", "Shape Detection", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ShapeDetection", "Kucult", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ShapeDetection", "Buyut", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ShapeDetection", "Carpi", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShapeDetection: public Ui_ShapeDetection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPEDETECTION_H
