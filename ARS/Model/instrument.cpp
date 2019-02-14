#include "instrument.h"
#include "utils.h"
#include "Model/connector.h"
#include "Model/settings.h"
#include <QDebug>
#include <QThread>
#include <memory>

Instrument::Instrument(QObject *parent,
                       Settings& config,
                       Connector& conn,
                       QThread& thread) :
    QObject(parent),
    m_isConnected(false),
    m_thread(thread),
    m_settings(config),
    m_connector(conn){}

Instrument::~Instrument()
{
    Utils::DestructorMsg(this);
}

void Instrument::Initialize(){
    //Fake making a TCP connection
    InitWithConnector();
}

void Instrument::EnableTestMode(){
    m_isConnected = false;
    qDebug() << "Running in test mode. Instrument is not being controlled.";
}

void Instrument::onDistanceChanged(double value){
    WriteDistance(value);
}

void Instrument::onVelocityChanged(double value){
    WriteSpeed(value);
}

void Instrument::onPowerChanged(bool value)
{
    WriteRfPower(value);
}

void Instrument::onConnectionDone(bool value)
{
    m_isConnected = value;
    if(m_isConnected) SetDefaultValues();
    emit NotifyInitializationDone(value);
    m_thread.quit();
    m_thread.wait();
    qDebug() << "Connection has completed.";
}

void Instrument::onConnectorStatusChanged(const QString &msg)
{
    emit NotifyStatusUpdate(msg);
}

void Instrument::WriteRfPower(bool value)
{
    if(m_isConnected){
        //setSynthRfOutput(static_cast<int>(value));
    }else{
        qDebug() << (value? "Torning on Power" : "Turning off Power");
    }
}

void Instrument::WriteSpeed(double speedKph)
{
    if(m_isConnected){
        //SetDoppler(speed_nco);
    }else{
        qDebug() << "Velocity: " << speedKph;
    }
}

void Instrument::WriteDistance(double distanceMeters)
{
    if(m_isConnected){
        //SetDelay(distance_in_ticks);
    }else{
        qDebug() << "Distance: " << distanceMeters;
    }
}

void Instrument::InitWithConnector()
{
   m_connector.moveToThread(&m_thread);
   connect(&m_thread, &QThread::started, &m_connector, &Connector::onStart);
   connect(&m_connector, &Connector::notifyDone, this, &Instrument::onConnectionDone);
   connect(&m_connector, &Connector::notifyMessage, this, &Instrument::onConnectorStatusChanged);
   m_thread.start();
}

void Instrument::SetDefaultValues()
{
    WriteRfPower(m_settings.getInitialPowerState());
    WriteDistance(m_settings.getInitialDistanceM());
    WriteSpeed(m_settings.getInitialSpeedKph());
}




