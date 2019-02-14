#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <QObject>
#include "propertyhelper.h"

class QQmlEngine;
class QJSEngine;

class MySingleton : public QObject
{
    Q_OBJECT
    AUTO_PROPERTY(QString, appTitle)

public:
    explicit MySingleton(QObject *parent=nullptr);
    ~MySingleton();
    Q_INVOKABLE QString changeTitle() {
        appTitle("Changed Title");
        return appTitle();
    }
    static QObject* mySingletonProvider(QQmlEngine *engine, QJSEngine *scriptEngine);

private:
    explicit MySingleton(const MySingleton& rhs) = delete;
    MySingleton& operator=(const MySingleton& rhs) = delete;
};

#endif // MYSINGLETON_H
