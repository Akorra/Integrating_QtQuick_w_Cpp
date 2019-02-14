#ifndef CONNECTOR_H
#define CONNECTOR_H

#pragma once
#include <QObject>

class QString;
class Settings;

class Connector : public QObject
{
    Q_OBJECT
public:
    explicit Connector(QObject *parent, Settings& config);
    void DoWork();

signals:
    void notifyDone(bool value);
    void notifyMessage(const QString& msg);

public slots:
    void onStart();

private:
    Settings& m_settings;
    explicit Connector(const Connector& rhs) = delete;
    Connector& operator= (const Connector& rhs) = delete;
};

#endif // CONNECTOR_H
