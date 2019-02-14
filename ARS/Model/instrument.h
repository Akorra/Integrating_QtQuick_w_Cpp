#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <QObject>

class MainView;
class QThread;
class Settings;
class Connector;

class Instrument : public QObject
{
    Q_OBJECT
public:
    Instrument(QObject* parent, Settings& config, Connector& conn, QThread& thread);
    virtual ~Instrument();
    bool IsConnected() const {return m_isConnected;}
    void EnableTestMode();
    void Initialize();

signals:
    void NotifyInitializationDone(bool value);
    void NotifyStatusUpdate(const QString& msg);

public slots:
    void onDistanceChanged(double value);
    void onVelocityChanged(double value);
    void onPowerChanged(bool value);
    void onConnectionDone(bool value);
    void onConnectorStatusChanged(const QString& msg);

private:
    bool m_isConnected;
    QThread& m_thread;
    Settings& m_settings;
    bool m_testMode;
    Connector& m_connector;

    void WriteRfPower(bool value);
    void WriteSpeed(double speedKph);
    void WriteDistance(double distanceMeters);
    void InitWithConnector();
    void SetDefaultValues();

    explicit Instrument(const Instrument& rhs) = delete;
    Instrument& operator= (const Instrument& rhs) = delete;
};

#endif // INSTRUMENT_H
