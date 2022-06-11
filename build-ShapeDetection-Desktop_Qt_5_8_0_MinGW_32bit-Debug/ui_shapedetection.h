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
#include <QtWidgets/QStackedWidget>
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
    QPushButton *livevideobtn;
    QPushButton *openvideobtn;
    QPushButton *openphotobtn;
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
    QWidget *centerMainContainer;
    QVBoxLayout *verticalLayout_6;
    QWidget *centerMainSubContainer;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
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
    QWidget *mainBodyContent;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QFrame *smallimg;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;

    void setupUi(QMainWindow *ShapeDetection)
    {
        if (ShapeDetection->objectName().isEmpty())
            ShapeDetection->setObjectName(QStringLiteral("ShapeDetection"));
        ShapeDetection->resize(800, 550);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShapeDetection->sizePolicy().hasHeightForWidth());
        ShapeDetection->setSizePolicy(sizePolicy);
        ShapeDetection->setMinimumSize(QSize(800, 500));
        ShapeDetection->setStyleSheet(QLatin1String("#ShapeDetection{\n"
"	background:#001219;\n"
"}\n"
"*{\n"
"	border: none;\n"
"	background-color: transparent;\n"
"	background : transparent;\n"
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
"	background-color:#16191dz;\n"
"}\n"
"\n"
"#LeftMenuSubContainer QPushButton{\n"
"	text-align:left;\n"
"	padding:10px 10px;\n"
"	border-top-left-radius:10px;\n"
"	border-bottom-left-radius:10px;\n"
"}\n"
"\n"
"#frame_4{\n"
"	background-color:#16191d;\n"
"	border-radius: 10px;\n"
"\n"
"}\n"
"\n"
"#headercontainer{\n"
"	background-color:#2c313c;\n"
"}\n"
"\n"
"#centerMainSubContainer{\n"
"background-color:#2c313c;\n"
"}\n"
"\n"
"#frame_7{\n"
"	background-color:#16191d;\n"
"	border-radius: 10px;\n"
"}"));
        centralWidget = new QWidget(ShapeDetection);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setStyleSheet(QStringLiteral(""));
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
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 10, 0, 10);
        livevideobtn = new QPushButton(frame_2);
        livevideobtn->setObjectName(QStringLiteral("livevideobtn"));

        verticalLayout_3->addWidget(livevideobtn);

        openvideobtn = new QPushButton(frame_2);
        openvideobtn->setObjectName(QStringLiteral("openvideobtn"));

        verticalLayout_3->addWidget(openvideobtn);

        openphotobtn = new QPushButton(frame_2);
        openphotobtn->setObjectName(QStringLiteral("openphotobtn"));

        verticalLayout_3->addWidget(openphotobtn);

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
        switchbtn->setStyleSheet(QLatin1String("background-color:rgb(0, 170, 255);\n"
""));

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

        centerMainContainer = new QWidget(centralWidget);
        centerMainContainer->setObjectName(QStringLiteral("centerMainContainer"));
        centerMainContainer->setMinimumSize(QSize(200, 0));
        verticalLayout_6 = new QVBoxLayout(centerMainContainer);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        centerMainSubContainer = new QWidget(centerMainContainer);
        centerMainSubContainer->setObjectName(QStringLiteral("centerMainSubContainer"));
        centerMainSubContainer->setMinimumSize(QSize(200, 0));
        verticalLayout_7 = new QVBoxLayout(centerMainSubContainer);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, 5, 5, 5);
        frame_7 = new QFrame(centerMainSubContainer);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(9, 9, 9, 9);
        pushButton_4 = new QPushButton(frame_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_6->addWidget(pushButton_4, 0, Qt::AlignLeft);

        label_3 = new QLabel(frame_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3, 0, Qt::AlignRight);


        verticalLayout_7->addWidget(frame_7, 0, Qt::AlignTop);

        stackedWidget = new QStackedWidget(centerMainSubContainer);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_7 = new QHBoxLayout(page);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_4);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_5);

        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_9 = new QVBoxLayout(page_5);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_6 = new QLabel(page_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_6);

        stackedWidget->addWidget(page_5);

        verticalLayout_7->addWidget(stackedWidget);


        verticalLayout_6->addWidget(centerMainSubContainer);


        horizontalLayout->addWidget(centerMainContainer, 0, Qt::AlignLeft);

        MainBodyContainer = new QWidget(centralWidget);
        MainBodyContainer->setObjectName(QStringLiteral("MainBodyContainer"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MainBodyContainer->sizePolicy().hasHeightForWidth());
        MainBodyContainer->setSizePolicy(sizePolicy2);
        MainBodyContainer->setStyleSheet(QStringLiteral(""));
        verticalLayout_5 = new QVBoxLayout(MainBodyContainer);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        headercontainer = new QWidget(MainBodyContainer);
        headercontainer->setObjectName(QStringLiteral("headercontainer"));
        headercontainer->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(headercontainer);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
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
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_5->addWidget(label, 0, Qt::AlignLeft);


        horizontalLayout_3->addWidget(frame_5, 0, Qt::AlignLeft);

        frame_4 = new QFrame(headercontainer);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QStringLiteral(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(4, 4, 4, 4);
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

        mainBodyContent = new QWidget(MainBodyContainer);
        mainBodyContent->setObjectName(QStringLiteral("mainBodyContent"));
        sizePolicy.setHeightForWidth(mainBodyContent->sizePolicy().hasHeightForWidth());
        mainBodyContent->setSizePolicy(sizePolicy);
        horizontalLayout_8 = new QHBoxLayout(mainBodyContent);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(mainBodyContent);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_9 = new QHBoxLayout(widget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(widget);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_6);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(5, 5, 5, 5);
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral(""));

        verticalLayout_10->addWidget(label_7);

        widget_2 = new QWidget(frame_6);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setSpacing(4);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 5, 0, 0);
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(label_8);

        smallimg = new QFrame(widget_2);
        smallimg->setObjectName(QStringLiteral("smallimg"));
        smallimg->setFrameShape(QFrame::StyledPanel);
        smallimg->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(smallimg);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(smallimg);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral(""));

        horizontalLayout_11->addWidget(label_9);


        horizontalLayout_10->addWidget(smallimg);


        verticalLayout_10->addWidget(widget_2);


        horizontalLayout_9->addWidget(frame_6);


        horizontalLayout_8->addWidget(widget);


        verticalLayout_5->addWidget(mainBodyContent);


        horizontalLayout->addWidget(MainBodyContainer);

        ShapeDetection->setCentralWidget(centralWidget);

        retranslateUi(ShapeDetection);

        stackedWidget->setCurrentIndex(2);


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
        livevideobtn->setToolTip(QApplication::translate("ShapeDetection", "Live Video", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        livevideobtn->setText(QApplication::translate("ShapeDetection", "Live video", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        openvideobtn->setToolTip(QApplication::translate("ShapeDetection", "Open Video", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openvideobtn->setText(QApplication::translate("ShapeDetection", "Open Video", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        openphotobtn->setToolTip(QApplication::translate("ShapeDetection", "Open Photo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openphotobtn->setText(QApplication::translate("ShapeDetection", "Open Photo", Q_NULLPTR));
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
        pushButton_4->setText(QApplication::translate("ShapeDetection", "Search", Q_NULLPTR));
        label_3->setText(QApplication::translate("ShapeDetection", "Carpi", Q_NULLPTR));
        label_4->setText(QApplication::translate("ShapeDetection", "Setting", Q_NULLPTR));
        label_5->setText(QApplication::translate("ShapeDetection", "Information", Q_NULLPTR));
        label_6->setText(QApplication::translate("ShapeDetection", "Help", Q_NULLPTR));
        label_2->setText(QApplication::translate("ShapeDetection", "uygulama iconu", Q_NULLPTR));
        label->setText(QApplication::translate("ShapeDetection", "Shape Detection", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ShapeDetection", "Kucult", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ShapeDetection", "Buyut", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ShapeDetection", "Carpi", Q_NULLPTR));
        label_7->setText(QApplication::translate("ShapeDetection", "Buyuk oynat\304\261lan goruntu", Q_NULLPTR));
        label_8->setText(QApplication::translate("ShapeDetection", "Tespit \303\247\304\261kt\304\261lar\304\261", Q_NULLPTR));
        label_9->setText(QApplication::translate("ShapeDetection", "kucuk oynat\304\261lan goruntu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShapeDetection: public Ui_ShapeDetection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPEDETECTION_H
