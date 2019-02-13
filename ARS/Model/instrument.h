#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <QObject>

class MainView;

class Instrument : public QObject
{
    Q_OBJECT
public:
    Instrument(QObject* parent);
    virtual ~Instrument();
    bool IsConnected() const {return m_isConnected;}
    void EnableTestMode();

signals:

public slots:
    void onDistanceChanged(double value);
    void onVelocityChanged(double value);
    void onPowerChanged(bool value);

private:
    bool m_isConnected;

    void WriteRfPower(bool value);
    void WriteSpeed(double speedKph);
    void WriteDistance(double distanceMeters);

    explicit Instrument(const Instrument& rhs) = delete;
    Instrument& operator= (const Instrument& rhs) = delete;
};

#endif // INSTRUMENT_H
