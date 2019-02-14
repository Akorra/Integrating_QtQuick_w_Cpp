#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "interact.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Interact my_interact(0, engine);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("InteractClass", &my_interact);
    if (engine.rootObjects().isEmpty())
        return -1;

    my_interact.Run();
    return app.exec();
}
