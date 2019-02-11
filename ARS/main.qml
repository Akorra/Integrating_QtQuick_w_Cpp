import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

ApplicationWindow {
    id: mainViewWindow
    visible: true
    width: 1024
    height: 600
    title: qsTr(MainViewMgr.appNameVer)

    property string headerFontFamily: "Tahoma"
    property int companyFontSize: 10
    property string companyFontColor: "Tahoma"
    property int headerFontSize: 18
    property string headerBgColor: "white"
    property string gradientStartColor: "skyblue"
    property string gradientEndColor: "blue"

    property int rowLeftMargin: 30
    property string boldLabelFont: "Impact"
    property real hoverOpacity: .85
    property url powerOnSource: "images/power_on.png"
    property url powerOffSource: "images/power_off.png"
    property url powerSource: powerOffSource
    property bool powerOn: MainViewMgr.powerOn

    function togglePower(){
        poweSource = powerOn ? powerOnSource : powerOffSource
        powerOn = !powerOn
        MainViewMgr.powerOn = powerOn
    }

    Gradient{
        id:appGradientId
        GradientStop{position: 0.0; color: gradientStartColor}
        GradientStop{position: 1.0; color: gradientEndColor}
    }

    //====== MAIN VIEW =======
    Rectangle{
        objectName: "mainViewRect"
        id: mainViewRect

        anchors.fill: parent
        gradient:appGradientId

        Header{
            id:headerId
        }

        //----- Controls Area -----
        //Controls Top Row - power button and 2 knobs
        RowLayout{
            id: powerKnobRowId
            anchors{
                top: headerId.bottom
                topMargin: 15
                left:parent.left
                right: parent.right
                leftMargin: rowLeftMargin
            }
            ColumnLayout{
                id:poweAreaId
                Layout.alignment:Qt.AlignTop
                Text{
                    text: "RF Power"
                    Layout.alignment: Qt.AlignCenter
                    color:"white"
                    font.pointSize: 16
                    font.family: boldLabelFont
                }
                Image {
                    id: powerButtonId
                    source: powerSource
                    Layout.preferredWidth: 64
                    Layout.preferredHeight: Layout.preferredWidth
                    MouseArea{
                        onClicked: togglePower()
                        anchors.fill: parent
                        hoverEnabled: true
                        onHoveredChanged: parent.opacity=containsMouse?hoverOpacity : 1.0
                    }
                }
            }
            ColumnLayout{
                id:velocityColumnId
            }
            ColumnLayout{
                id:distanceColumnId
            }
        }

        //Controls bottom Row
        RowLayout{
            id: presetRowId
            anchors{
                bottom: parent.bottom
                bottomMargin: 10
                left:parent.left
                right: parent.right
                leftMargin:rowLeftMargin
            }
            //preset buttons 4
        }
    }
}
