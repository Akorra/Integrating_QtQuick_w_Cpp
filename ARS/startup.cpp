#include "startup.h"
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QObject>
#include <QThread>
#include <QTimer>
#include "ViewManager/mainviewmngr.h"
#include "Model/provider.h"
#include "Model/settings.h"
#include "Model/instrument.h"

const int TIMER_INTERVAL = 250;

Startup::Startup(QObject *parent) : QObject(parent),
                                    m_engine(*new QQmlApplicationEngine),
                                    m_mainViewMngr(*new MainViewMngr()),
                                    m_settings(Provider::GetSettingsAsSingleton()),
                                    m_instrument(* new Instrument(this, m_settings, Provider::GetConnectorForSingleUse(), * new QThread())),
                                    m_bootDelay(0),
                                    m_timer(* new QTimer(this))
{
    m_settings.ParseJsonData();
    m_mainViewMngr.Initialize(m_settings);
    auto root_context = m_engine.rootContext();
    root_context->setContextProperty("MainViewMgr", &m_mainViewMngr);
    m_engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    WireMainViewMgrToInstrument();
    WireInstrumentToMainViewMgr();
    setupBootDelayTimer();
}

void Startup::onTimerFired()
{
       static int counter;
       ++counter;
       float elapsed_time = TIMER_INTERVAL*counter;
       float progress = (elapsed_time/m_bootDelay)*100.0;
       m_mainViewMngr.feedbackProgress(progress);
       if(progress > 100){
           m_instrument.Initialize();
           m_timer.stop();
       }
}

void Startup::WireMainViewMgrToInstrument()
{
    connect(&m_mainViewMngr, &MainViewMngr::powerOnChanged, &m_instrument, &Instrument::onPowerChanged);
    connect(&m_mainViewMngr, &MainViewMngr::velocityChanged, &m_instrument, &Instrument::onVelocityChanged);
    connect(&m_mainViewMngr, &MainViewMngr::distanceChanged, &m_instrument, &Instrument::onDistanceChanged);
}

void Startup::WireInstrumentToMainViewMgr()
{
    connect(&m_instrument, &Instrument::NotifyStatusUpdate, &m_mainViewMngr, &MainViewMngr::onStatusMessageChanged);
    connect(&m_instrument, &Instrument::NotifyInitializationDone, &m_mainViewMngr ,&MainViewMngr::onInstrumentInitializationDone);
}

void Startup::setupBootDelayTimer()
{
    m_bootDelay = m_settings.getBootDelay();
    bool in_test_mode = m_settings.getTestMode();
    if(in_test_mode) m_bootDelay = 5000;
    m_timer.setInterval(TIMER_INTERVAL);
    connect(&m_timer, SIGNAL(timeout()), SLOT(onTimerFired()));
    m_timer.start();
}
