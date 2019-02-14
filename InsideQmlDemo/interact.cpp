#include "interact.h"
#include <QQmlApplicationEngine>
#include <QQuickItem>
#include <QDebug>


Interact::Interact(QObject *parent, QQmlApplicationEngine &engine) : QObject (parent), m_engine(engine)
{
}

void Interact::findRectangles()
{
    auto rect_area = m_rootObject->findChild<QQuickItem*>("RectArea");
    if(rect_area != nullptr){
        qDebug() << "RectArea found: "
                 << rect_area->property("color").toString();
        QVariant var_color = rect_area->property("color");
        QColor the_color = var_color.value<QColor>();
        qDebug() << the_color.red()<<the_color.green()<<the_color.blue();
        qDebug() << "Rect width is: " << rect_area->width();
    }

    auto rect_list = m_rootObject->findChildren<QQuickItem*>("RectArea");
    foreach(QQuickItem* rect, rect_list){
        qDebug() << "Rect color is: " << rect->property("color").toString();
    }
}

void Interact::traverseDocument()
{
    auto list_items = m_rootObject->findChildren<QObject*>();
    int item_count = list_items.count();
    qDebug() << "Found " << item_count << " items.";
    foreach(QObject*item, list_items){
        qDebug() << "Object name: " << item->property("objectName");
        auto var_color = item->property("color");
        QColor color = var_color.value<QColor>();
        if(color.green() > 0) item-> setProperty("width", 100);
        if(color.red() > 0) item-> setProperty("width", 150);
    }
}

void Interact::onGuiSignal(QString msg, const QVariant &qmlObject)
{
    qDebug() << "C++ received QML signal" << msg;
    auto obj = qmlObject.value<QObject*>();
    qDebug() << "with secret message" << obj->property("msg").toString();
}

void Interact::onButtonCLicked()
{
    qDebug() << "C++ has detected the button click.";
    auto the_button = m_rootObject->findChild<QObject*>("buttonArea");
    if(the_button == nullptr){
        qDebug() << "Didn't find the button with findChild";
    }else{
        the_button->setProperty("text", "C++ Got It!");
    }

}

void Interact::handleButton()
{
    auto qml_button = m_rootObject->findChild<QObject*>("buttonArea");
    if(qml_button!= nullptr){
        connect(qml_button, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    }
}

void Interact::testInvoke()
{
    QVariant return_value;
    QVariant msg = "This is the C++ parameter";
    QMetaObject::invokeMethod(m_rootObject,"callMeFromCpp",
                              Q_RETURN_ARG(QVariant, return_value),
                              Q_ARG(QVariant, msg));
    qDebug() << "QML Returned"<< return_value.toString();
}

void Interact::Run()
{
    auto root_objects = m_engine.rootObjects();
    if(root_objects.count() < 1) return;
    m_rootObject = root_objects[0];

    connect(m_rootObject, SIGNAL(guiSignal(QString, QVariant)), this, SLOT(onGuiSignal(QString, QVariant)));

    auto text_area = m_rootObject->findChild<QQuickItem*>("textArea");
    if(text_area!= nullptr){
        text_area->setProperty("text", "C++ did this to me!");
    }else{
        qDebug() << "objectName of textArea was not found.";
    }

    handleButton();

    findRectangles();
    traverseDocument();
    emit cppSignal(121314);
    testInvoke();
}
