#ifndef STARTUP_H
#define STARTUP_H

#pragma once
#include <QObject>

class QQmlApplicationEngine;
class MainViewMngr;

class Startup : public QObject
{
    Q_OBJECT
public:
    explicit Startup(QObject *parent=nullptr);
private:
    QQmlApplicationEngine& m_engine;
    MainViewMngr& m_mainViewMngr;

    explicit Startup(const Startup& rhs) = delete;
    Startup& operator= (const Startup& rhs) = delete;
};

#endif // STARTUP_H
