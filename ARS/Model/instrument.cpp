#include "instrument.h"
#include "utils.h"
#include <QDebug>

Instrument::Instrument(QObject *parent) : QObject(parent), m_isConnected(false){}

Instrument::~Instrument()
{
    Utils::DestructorMsg(this);
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




