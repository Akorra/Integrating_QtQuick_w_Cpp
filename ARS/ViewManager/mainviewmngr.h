#ifndef MAINVIEWMNGR_H
#define MAINVIEWMNGR_H

#include <QObject>
#include <QString>

class MainViewMngr : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString appName READ appName CONSTANT)
    Q_PROPERTY(QString appNameVer READ appNameVer CONSTANT)
public:
    explicit MainViewMngr(QObject *parent=nullptr);
    QString appName() const {return m_appName;}
    QString appNameVer() const {return m_appName + " " + APP_VER;}
private:
    QString m_appName;
    explicit MainViewMngr(const MainViewMngr& rhs) = delete;
    MainViewMngr& operator= (const MainViewMngr& rhs) = delete;
};

#endif // MAINVIEWMNGR_H
