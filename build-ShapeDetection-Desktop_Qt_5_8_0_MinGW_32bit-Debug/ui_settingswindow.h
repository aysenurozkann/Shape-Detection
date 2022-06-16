/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_settingswindow
{
public:

    void setupUi(QDialog *settingswindow)
    {
        if (settingswindow->objectName().isEmpty())
            settingswindow->setObjectName(QStringLiteral("settingswindow"));
        settingswindow->resize(400, 300);

        retranslateUi(settingswindow);

        QMetaObject::connectSlotsByName(settingswindow);
    } // setupUi

    void retranslateUi(QDialog *settingswindow)
    {
        settingswindow->setWindowTitle(QApplication::translate("settingswindow", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingswindow: public Ui_settingswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
