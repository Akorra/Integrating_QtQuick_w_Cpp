import QtQuick 2.9
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Interact Demo")
    objectName: "The Application Window"

    signal guiSignal(string value, variant obj)
    Connections{
        objectName: "ConnectionsArea"
        target: InteractClass
        onCppSignal: print("smt sms")
    }

    QtObject{
        id:secretMessageId
        property string msg: "show me the monkey"
    }

    Column {
        objectName: "columnArea"
        spacing: 10
        Text{
            objectName: "textArea"
            text:qsTr("Hello World")
        }

        Rectangle{
            id: rect1Id
            objectName: "RectArea"
            color: "green"
            width: 50; height:width
            MouseArea{
                objectName: "MouseArea"
                anchors.fill: parent
                onClicked:{
                    print("in the Rectangle on clicked handler")
                    guiSignal("The GUI says hello", secretMessageId)
                }
            }
        }

        Rectangle{
            id: rect2Id
            objectName: "RectArea2"
            color: "red"
            width: 50; height:width
        }

        Button{
            objectName: "buttonArea"
            id:buttonId
            text:"C++ Handles This"
        }
    }
}
