#include <QTWidgets>
#include <QCoreApplication>
#include "imageloader.h"

ImageLoader::ImageLoader(QWidget *parent): QMainWindow(parent){
    DImageLabel = new QLabel; //creates widget that stores image for display
    setCentralWidget(DImageLabel); //makes ImageLabel central widget for main window
    myButton = new QPushButton("top button",this);
    myButton->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    connect(myButton,SIGNAL(released()),this, SLOT (handleButton()));

    resize(640, 480); //resizes window to fit 640x480 image

} //constructor

ImageLoader::~ImageLoader(){
} //destructor

void ImageLoader::handleButton()
{

    QString SplashPath("screenshot.png");
    this->show();
    this->LoadFile(SplashPath);
}
/*
 * LoadFile
 * Takes splash image file path as QString, validates, and displays in window
 * Returns -1 on failure and 0 on success
 */
int ImageLoader::LoadFile(const QString &filename){
    QImageReader Reader(filename); //creates reader for splash image file
    QImage Image = Reader.read(); //reads splash image from file path to QImage

    if(Image.isNull()){ //if image is invalid
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load splash file %1: %2")
                                 .arg(QDir::toNativeSeparators(filename), Reader.errorString())); //display error
        return -1;
    }

    DSplash = Image; //sets DSplash to validated Image
    DImageLabel->setPixmap(QPixmap::fromImage(DSplash)); //displays image in ImageLabel
    DImageLabel->adjustSize(); //resizes ImageLabel to fit image

    return 0;
} //LoadFile
