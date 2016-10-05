/********************************************************************************
** Form generated from reading UI file 'imageloader.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGELOADER_H
#define UI_IMAGELOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageLoader
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageLoader)
    {
        if (ImageLoader->objectName().isEmpty())
            ImageLoader->setObjectName(QStringLiteral("ImageLoader"));
        ImageLoader->resize(400, 300);
        centralWidget = new QWidget(ImageLoader);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 170, 59, 16));
        ImageLoader->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageLoader);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        ImageLoader->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageLoader);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageLoader->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageLoader);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageLoader->setStatusBar(statusBar);

        retranslateUi(ImageLoader);

        QMetaObject::connectSlotsByName(ImageLoader);
    } // setupUi

    void retranslateUi(QMainWindow *ImageLoader)
    {
        ImageLoader->setWindowTitle(QApplication::translate("ImageLoader", "ImageLoader", 0));
        label->setText(QApplication::translate("ImageLoader", "test", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageLoader: public Ui_ImageLoader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGELOADER_H
