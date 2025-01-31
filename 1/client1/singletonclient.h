#ifndef SINGLETONCLIENT_H
#define SINGLETONCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QtNetwork>
#include <QByteArray>
#include <QDebug>
#include "VigenereCipher.h"



class SingletonClient;

class SingletonDestroyer
{
private:
    SingletonClient * p_instance;
public:
    ~SingletonDestroyer() { delete p_instance;}
    void initialize(SingletonClient * p){p_instance = p;};
};


class SingletonClient : public QObject
{
    Q_OBJECT
private:
    static SingletonClient * p_instance;
    static SingletonDestroyer destroyer;
    QTcpSocket * mTcpSocket;




protected:
    explicit SingletonClient(QObject * parent = nullptr);
    SingletonClient(const SingletonClient&) = delete;
    SingletonClient& operator = (SingletonClient&) = delete;
    ~SingletonClient() {};
    friend class SingletonDestroyer;
public:
    static SingletonClient* getInstance();

    void send_msg_to_server(QString log, QString pass);
    void send_msg_to_server_reg(QString log, QString pass, QString email);

    void send_msg_to_server_check(QString task_number, QString first, QString second, QString answer);



signals:
    void message_from_server(QString msg);
private slots:
  QString slotServerRead();
};



#endif // SINGLETONCLIENT_H
