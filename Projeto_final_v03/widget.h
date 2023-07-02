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


   //Setando os parametros do layout
  //  QHBoxLayout _layout; //Coloca os widgets horizontalmente

    // Texto indicando "IP"
   // QLabel _ip;
    // Lugar onde o usuário irá digitar o IP
   // QLineEdit _valorip;

    // Status do IP se está ONLINE ou OFFLINE.
   // QLabel _status;

    //Botão de OK
 //   QPushButton _buttonok;

    //Será onde o Ips será monitorados
 //   QListView _listips;


};
#endif // WIDGET_H
