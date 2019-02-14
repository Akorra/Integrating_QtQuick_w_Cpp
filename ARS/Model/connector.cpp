#include <QThread>

#include "connector.h"
#include "Model/settings.h"


Connector::Connector(QObject *parent, Settings& config) : QObject(parent), m_settings(config)
{

}

void Connector::DoWork()
{
    emit notifyMessage("Connecting...");
    auto host_name = m_settings.getHostName().toLocal8Bit();
    char* char_str = host_name.data();
    // bool result = Connect(char_str);
    QThread::msleep(m_settings.getBootDelay());
    emit notifyMessage("Connected.");
    emit notifyDone(true);

}

void Connector::onStart()
{
    DoWork();
}
