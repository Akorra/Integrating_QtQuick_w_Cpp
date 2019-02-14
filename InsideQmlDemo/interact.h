#ifndef INTERACT_H
#define INTERACT_H

#include <QObject>

class QQmlApplicationEngine;

class Interact : public QObject
{
    Q_OBJECT
public:
    Interact(QObject *parent, QQmlApplicationEngine &engine);
    void Run();
    void findRectangles();
    void traverseDocument();
    void handleButton();
    void testInvoke();

signals:
    void cppSignal(int value);

public slots:
    void onGuiSignal(QString msg, const QVariant& qmlObject);
    void onButtonCLicked();

private:
    QQmlApplicationEngine& m_engine;
    QObject* m_rootObject;

    explicit Interact(const Interact& rhs) = delete;
    Interact& operator= (const Interact& rhs) = delete;
};


#endif // INTERACT_H
