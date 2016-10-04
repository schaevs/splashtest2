#include "imageloader.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    QString SplashPath("splash.jpg");
    ImageLoader w;
    w.show();
    w.LoadFile(SplashPath);


    return a.exec();
}
