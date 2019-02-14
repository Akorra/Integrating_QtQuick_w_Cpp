import QtQuick 2.9
import QtQuick.Controls 1.2
import com.swatteam.tiling 1.0
import com.swatteam.singleton 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tile Demo")

    property string some_string: MySingleton.appTitle

    Row{
        Tile{
            material:Tile.Wood
            letter: "W"
            pointValue: 10
            color:"white"
        }

        Tile{
            material:Tile.Brick
            letter: "t"
            pointValue: 1;
        }
    }

    Text{
        text: qsTr(some_string)
        anchors.centerIn: parent
        MouseArea{
            anchors.fill:parent
            onClicked: print(MySingleton.changeTitle())
        }
    }
}
