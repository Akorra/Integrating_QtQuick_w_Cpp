#ifndef STARTUP_H
#define STARTUP_H

#pragma once
#include <QObject>

class QQmlApplicationEngine;
class QTimer;
class MainViewMngr;
class Settings;
class Instrument;

class Startup : public QObject
{
    Q_OBJECT
public:
    explicit Startup(QObject *parent=nullptr);

private slots:
    void onTimerFired();

private:
    QQmlApplicationEngine& m_engine;
    MainViewMngr& m_mainViewMngr;
    Settings& m_settings;
    Instrument& m_instrument;
    int m_bootDelay;
    QTimer& m_timer;

    void WireMainViewMgrToInstrument();
    void WireInstrumentToMainViewMgr();
    void setupBootDelayTimer();

    explicit Startup(const Startup& rhs) = delete;
    Startup& operator= (const Startup& rhs) = delete;
};

#endif // STARTUP_H
