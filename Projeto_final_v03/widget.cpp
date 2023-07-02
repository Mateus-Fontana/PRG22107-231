#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <ping.h>
int i = 0;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , pingModel(nullptr)
{
    ui->setupUi(this);
}


Widget::~Widget()
{
    delete ui;
}


void Widget::on_botao_ok_clicked()
{
    if( i == 0)
    {
        pingModel = new Ping(this);
        pingModel->start_command(ui->valor_ip->text());
        connect(pingModel, SIGNAL(statusChanged(QString)), this, SLOT(updateStatusLabel(QString)));
        ui->ip_monitorado->setText(ui->valor_ip->text());
        i++;
    }
    else
    {
        QMessageBox::warning(this,tr("Aviso!"),tr("Para adicionar o monitoramento de um novo IP, o monitoramento atual do IP será encerrado."));
        on_close2_clicked();
        i = 0;
    }


}




void Widget::updateStatusLabel(const QString status)
{
        ui->status->setText(status);
}


void Widget::on_close2_clicked()
{
        pingModel->finished();
}





