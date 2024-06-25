import QtQuick 6.0
import QtQuick.Window 2.15
import QtQuick.Controls 6.0
import QtQuick.Controls.Material 2.15


ApplicationWindow {
    id: window
    width: 480
    height: 560
    visible: true
    title: qsTr("LOGIN PAGE")

    // set Flags
    flags: Qt.WindowCloseButtonHint | Qt.WindowMinimizeButtonHint | Qt.CustomizeWindowHint | Qt.Dialog | Qt.WindowTitleHint
    Material.theme: Material.Dark
    Material.accent: Material.LightBlue

    // QtObject{
    //     id: internal
    //     property string user: "Ashfaqulla Sharif"
    //     property string pass: "123456789"

    //     function checkingin(username,password){
    //         if(username == user && password == pass){
    //             var component = Qt.createComponent("app.qml")
    //             var win = component.createObject()
    //             win.show()
    //             visible = false
    //         }
        
    // Create Top Bar
    Rectangle{
        id: topbar
        height: 70
        color: Material.color(Material.Blue)
        anchors{
            left: parent.left
            right: parent.right
            top: parent.top
            topMargin: 1
        }
        radius: 2

        Text{
            text: qsTr("<h1><b>LOGIN </b></h1><b>here</b>")
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter 
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            color: "#ffffff"
            font.pointSize: 14
        }
        Image{
            id: crystal
            width: 120
            height: 150
            source: "../images/crystal.png"
            anchors.left: parent.left
            anchors.leftMargin: 20
            anchors.top: topbar.bottom
            anchors.topMargin: 75

        }

        Text{
            id: name
            text: qsTr("<font face=\"Rage Italic\" color=\"#fff400\"><h1>JuJuBee</h1></font>")

            anchors.top: topbar.bottom
            anchors.left: crystal.right
            anchors.right: parent.right
            anchors.bottom: email.top
            anchors.topMargin: 50
            anchors.leftMargin: 10
            anchors.rightMargin: 30
            verticalAlignment: Text.AlignVCenter
            font.pointSize: 30
            
        }
        TextField{
            id: email
            width:400
            text: qsTr("")
            selectByMouse: true
            placeholderText: qsTr("<b>Enter username or Email</b>")
            verticalAlignment: Text.AlignVCenter
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: crystal.bottom
            anchors.topMargin: 20
            font.pointSize: 12

        }
        TextField{
            id: password
            width:400
            text: qsTr("")
            selectByMouse: true
            placeholderText: qsTr("<b>Password</b>")
            verticalAlignment: Text.AlignVCenter
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: email.bottom
            anchors.topMargin: 10
            font.pointSize: 12
            echoMode: TextInput.Password
        
        }
        
        CheckBox{
            id: checkbox
            text: qsTr("<b>SAVE PASSWORD</b>")
            anchors.top: password.bottom
            anchors.topMargin: 10
            anchors.left: parent.left
            anchors.leftMargin: 35
        
        }

        Button{
            id: login
            width: 400
            text: qsTr("LOGIN")
            anchors.top: checkbox.bottom
            anchors.topMargin: 10
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: backend.checkLogin(email.text,password.text)

        }

        Connections{
            target: backend

            property string username: ""
            property string password: ""
            function onSignalUser(myUser){ username = myUser
            }
            function onSignalPass(myPass){ password = myPass
            }

            function onSignalLogin(BoolValue){
                if(BoolValue){
    
                var component = Qt.createComponent("app.qml")
                var win = component.createObject()
                win.textUsername = username
                win.textPassword = password
                win.show()
                visible = false
            }else{
                email.Material.foreground = Material.pink
                email.Material.accent = Material.pink
                password.Material.foreground = Material.pink
                password.Material.accent = Material.pink                
                }


            }




            
                }


            }



        }
    

