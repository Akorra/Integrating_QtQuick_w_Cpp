#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QString>

class Message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
public:
    explicit Message(QObject *parent=0);
    QString message() const {return m_message;}
    void setMessage(QString value);
    Q_INVOKABLE int sendMessageFromCpp(const QString value);

public slots:
    void doMessageChange();

signals:
    void messageChanged();

private:
    int m_counter;
    QString m_message;
    explicit Message(const Message& rhs) = delete;
    Message& operator= (const Message& rhs) = delete;
};


#endif // MESSAGE_H
