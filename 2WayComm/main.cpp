#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>

#include "message.h"
#include "datatypes.h"

void TestInvoke(QObject* rootObject){
    QVariant return_value;
    QVariant msg = "This is a C++ parameter";
    QMetaObject::invokeMethod(rootObject, "javaScriptFunction", Q_RETURN_ARG(QVariant, return_value), Q_ARG(QVariant, msg));
    qDebug() << "QML returned " << return_value;
}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Message my_msg;
    auto root_context = engine.rootContext();
    root_context->setContextProperty("messageClass",QVariant::fromValue(&my_msg));

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    auto root_object = engine.rootObjects().first();

    DataTypes my_dts;
    my_dts.logVariantList(root_object);
    my_dts.logVariantMap(root_object);

    // TestInvoke(root_object);

    return app.exec();
}

