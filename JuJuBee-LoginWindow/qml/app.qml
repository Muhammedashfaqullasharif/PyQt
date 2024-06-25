import QtQuick 6.0
import QtQuick.Window 2.15
import QtQuick.Controls 6.0
import QtQuick.Controls.Material 2.15


ApplicationWindow {
    id: window
    width: 480
    height: 560
    visible: true
    title: qsTr("APPLICATION")

        Material.theme: Material.Dark
    Material.accent: Material.LightBlue

    property string textUsername: "User"
    property string textPassword: "Pass"

    Text{
        id: textUser
        text: textUsername
        anchors.verticalCenter: parent.verticalCenter
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        color: "lignt blue"
        anchors.horizontalCenter: parent.horizontalCenter
        font.pointSize:10

    }


    Text{
        id: textPass
        text: textPassword
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.pointSize: 10
    }

}

