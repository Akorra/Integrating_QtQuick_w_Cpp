import QtQuick 2.9
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello Integration World")

    function logger(element)
    {
        print("Array element:"+element)
    }

    function logArray(anArray) {
        anArray.forEach(logger)
    }

    function logMap(theMap){
      for (var element in theMap)
      {
          print("Object item:",element,"=",theMap[element])
      }
    }

    function javaScriptFunction(value){
        print("C++ called the javaScriptFunction with the parameter:" + value);
        return "This message was returned from a JavaScript function."
    }

    Column {
        Text{
            id: textId
            text:messageClass.message
        }
        Row{
            Button{
                text: "Change Text"
                onClicked: messageClass.doMessageChange() //send msg to c++
            }

            Button{
                text: "Talk to C++"
                onClicked:{
                    var result =  messageClass.sendMessageFromCpp("This is QML saying hi!")
                    print("QML Received "+ result)
                }
            }
        }
    }
}

