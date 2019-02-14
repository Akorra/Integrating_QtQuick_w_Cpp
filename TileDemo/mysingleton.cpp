#include "mysingleton.h"
#include <QtQml>
#include <QDebug>

MySingleton::MySingleton(QObject *parent) : QObject (parent){
    appTitle("Singleton Title");
    qDebug() << "MySingleton constructor has run.";
}

MySingleton::~MySingleton(){
    qDebug() << "     Destructing MySingleton";
}

QObject *MySingleton::mySingletonProvider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine)
    Q_UNUSED(scriptEngine)
    MySingleton* my_singleton = new MySingleton();
    return my_singleton;
}

