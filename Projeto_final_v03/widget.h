#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>
#include "ping.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    void on_botao_ok_clicked();
    void updateStatusLabel(const QString status);
    void on_close2_clicked();


private:
    Ui::Widget *ui;
    Ping *pingModel;

};
#endif // WIDGET_H
