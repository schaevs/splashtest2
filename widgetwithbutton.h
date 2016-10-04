#ifndef WIDGETWITHBUTTON_H
#define WIDGETWITHBUTTON_H

#include <QObject>
#include <QWidget>

class WidgetWithButton : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetWithButton(QWidget *parent = 0);

signals:

public slots:
};

#endif // WIDGETWITHBUTTON_H