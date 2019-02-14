import QtQuick 2.9
import QtQuick.Controls 1.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tile Demo")

    Text{
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
}
