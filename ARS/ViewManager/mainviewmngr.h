#ifndef MAINVIEWMNGR_H
#define MAINVIEWMNGR_H

#include <QObject>
#include <QString>

#include "propetyhelper.h"

class Settings;

class MainViewMngr : public QObject
{
    Q_OBJECT
    READONLY_PROPERTY(QString, appName)
    //Q_PROPERTY(QString appName READ appName CONSTANT)
    Q_PROPERTY(QString appNameVer READ appNameVer CONSTANT)
    AUTO_PROPERTY(bool, powerOn)
    //Q_PROPERTY(double someValue READ someValue WRITE setSomeValue NOTIFY someValueChanged)
    //Refactoring on a Q_PROPERTY allows to generate the code necessary for itself (better to use AUTO PROPERTY)
    AUTO_PROPERTY(double, distance)
    AUTO_PROPERTY(double, velocity)
    READONLY_PROPERTY(double, distancePreset1)
    READONLY_PROPERTY(double, distancePreset2)
    READONLY_PROPERTY(double, distancePreset3)
    READONLY_PROPERTY(double, distancePreset4)
    READONLY_PROPERTY(double, velocityPreset1)
    READONLY_PROPERTY(double, velocityPreset2)
    READONLY_PROPERTY(double, velocityPreset3)
    READONLY_PROPERTY(double, velocityPreset4)

public:
    explicit MainViewMngr(QObject *parent=nullptr);
    //QString appName() const {return m_appName;}
    QString appNameVer() const {return appName() + " " + APP_VER;}
//    double someValue() const { return m_someValue; }

//public slots:
//    void setsomeValue(double someValue)
//    {
//        qWarning("Floating point comparison needs context sanity check");
//        if (qFuzzyCompare(m_someValue, someValue))
//            return;

//        m_someValue = someValue;
//        emit someValueChanged(m_someValue);
//    }

//signals:
//    void someValueChanged(double someValue);
    void Initialize(const Settings& config);


private:
    //QString m_appName;
    explicit MainViewMngr(const MainViewMngr& rhs) = delete;
    MainViewMngr& operator= (const MainViewMngr& rhs) = delete;

    //double m_someValue;

private slots:
    //void debugPowerOn(bool value);
};

#endif // MAINVIEWMNGR_H
