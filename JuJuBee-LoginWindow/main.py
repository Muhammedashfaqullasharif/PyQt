##################################################################
##
## created By M Ashfaqulla Sharif
## version v.1.0.0
## Date: 14-05-2024
##################################################################


import sys 
import os
#Import Modeules
from PySide6.QtGui import QGuiApplication
from PySide6.QtQml import QQmlApplicationEngine
from PySide6.QtCore import QObject, Slot, Signal

class MainWindow(QObject):
    def __init__(self):
        QObject.__init__(self)

        StaticUser = "Sharif"
        StaticPass = "12345"

        SignalUser = Signal(str)
        SignalPass = Signal(str)
        SignalLogin = Signal(bool)

        @Slot(str,str)
        def checkLogin(self, getUser, getPass):
            if(self.StaticUser.lower() == getUser.lower() and self.StaticPass.lower == getPass.lower()):
                
                self.SignalUser.emit("username ", getUser)
                self.SignalPass.emit("password ", getPass)


                self.SignalLogin.emit(True)
                print("Login Successful!")
            else:
                self.SignalLogin.emit(False)
                print("Login Error!")



#Instance Class
if __name__ == "__main__":
    app = QGuiApplication(sys.argv)
    engine = QQmlApplicationEngine()

    main = MainWindow()
    engine.rootContext().setContextProperty("backend",main)

    engine.load(os.path.join(os.path.dirname(__file__),"qml/main.qml"))

    #check exit app
    if not engine.rootObjects():
        sys.exit(-1)
    sys.exit(app.exec())

