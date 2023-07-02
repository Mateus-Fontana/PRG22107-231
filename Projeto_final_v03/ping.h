#ifndef PING_H
#define PING_H

#include <QObject>
#include <QProcess>
#include <QString>
// a classe QObject é pai da classe ping
class Ping : public QObject
{
    Q_OBJECT
public:
    explicit Ping(QObject *parent = nullptr);
    ~Ping();

    void start_command(QString addr);
    void finished();
    int  exitCode();





signals:
    void statusChanged(const QString status);
    void statusUpdated(const QString status);


public slots:
    void readResult();
    void updateStatus(const QString status);



private:
    // A variável ping é do tipo QProcess e herda todos os parametros da classe QObject
    QProcess *ping;

};

#endif // PING_H
