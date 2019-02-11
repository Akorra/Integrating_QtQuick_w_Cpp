#include "startup.h"
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "ViewManager/mainviewmngr.h"

Startup::Startup(QObject *parent) : QObject(parent), m_engine(*new QQmlApplicationEngine), m_mainViewMngr(*new MainViewMngr())
{
    auto root_context = m_engine.rootContext();
    root_context->setContextProperty("MainViewMgr", &m_mainViewMngr);
    m_engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
}
