#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "tile.h"
#include "mysingleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterType<Tile>("com.swatteam.tiling", 1, 0, "Tile");
    qmlRegisterSingletonType<MySingleton>("com.swatteam.singleton", 1, 0, "MySingleton", MySingleton::mySingletonProvider);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
