#ifndef MESSAGE_H
#define MESSAGE_H

#pragma once
#include <QObject>
#include <QString>

class Message : public QObject
{
    Q_OBJECT
public:
    explicit Message(QObject *parent=0);

public slots:
    void doMessageChange();

signals:
    void messageChanged(QString value);

private:
    int m_counter;
    QString m_message;
    explicit Message(const Message& rhs) = delete;
    Message& operator= (const Message& rhs) = delete;
};

#endif // MESSAGE_H
