#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <QMainWindow>
#include <QImage>
#include <QPushButton>

QT_BEGIN_NAMESPACE
class QAction;
class QLabel;
class QMenu;
class QScrollArea;
class QScrollBar;
QT_END_NAMESPACE

class ImageLoader : public QMainWindow{
    Q_OBJECT

public:
    explicit ImageLoader(QWidget *parent = 0);
    ~ImageLoader();
    int LoadFile(const QString &);

private slots:
    void handleButton();
private:
    QLabel *DImageLabel;
    QImage DSplash;
    QPushButton *myButton;
};

#endif // IMAGELOADER_H
