import QtQuick 2.9
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello Integration World")

    Connections{
        target: messageClass
        onMessageChanged: textId.text = value;
    }

    Column {
        Text{
            id: textId
            text: qsTr("Hello New World")
            font.pixelSize: 24
        }
        Button{
            text: "Change Text"
            onClicked: messageClass.doMessageChange() //send msg to c++
        }
    }
}
