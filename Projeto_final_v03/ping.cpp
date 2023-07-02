#include <QString>
#include <QDebug>
#include "ping.h"
#include "widget.h"

Ping::Ping(QObject *parent) :
    QObject(parent)
{
    ping = new QProcess(this);
    connect(ping, SIGNAL(readyRead()), this, SLOT(readResult()));
    connect(this, SIGNAL(statusChanged(QString)), this, SLOT(updateStatus(QString)));
}

Ping::~Ping(){
}




void Ping::readResult()
{
    while (ping->canReadLine())
    {
        QString status_ip = ping->readLine().trimmed();
        qDebug() << "LENDO: " << status_ip;
        if(status_ip.contains(": bytes=32"))
        {
            emit statusChanged("Online");
        }

         else
        {
            emit statusChanged("Offline");
        }
    }
}


void Ping::start_command(QString addr){
    if(ping)
    {
        QString command = "ping";
        QStringList args;
        args << "-t" <<  addr;
        ping->start(command, args);
        ping->waitForFinished(1000);

    }
}


int Ping::exitCode(){ 
    return ping->exitCode();
}

void Ping::updateStatus(const QString status)
{
    qDebug() <<"Status Atualizado: "<<status;
    emit statusUpdated(status);
}

void Ping::finished(void)
{
    ping->close();
    emit statusChanged("Processo encerrado");
}







