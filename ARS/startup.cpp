#include "startup.h"
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "ViewManager/mainviewmngr.h"
#include "Model/provider.h"
#include "Model/settings.h"
#include "Model/instrument.h"

Startup::Startup(QObject *parent) : QObject(parent),
                                    m_engine(*new QQmlApplicationEngine),
                                    m_mainViewMngr(*new MainViewMngr()),
                                    m_settings(Provider::GetSettingsAsSingleton()),
                                    m_instrument(* new Instrument(this))
{
    m_settings.ParseJsonData();
    m_mainViewMngr.Initialize(m_settings);
    auto root_context = m_engine.rootContext();
    root_context->setContextProperty("MainViewMgr", &m_mainViewMngr);
    m_engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
}

void Startup::WireMainViewMgrToInstrument()
{
    connect(m_mainViewMngr, &MainViewMngr::powerOnChanged, &m_instrument, &Instrument::onPowerChanged);
}
