########################################################################
##
## BY M ASHFAQULLA SHARIF
## PROJECT NAME : JUJUBEE
## VERSION 1.0.0
##
########################################################################

import sys
from PySide6.QtCore import QTimer, Qt
from PySide6.QtGui import QColor
from PySide6.QtWidgets import QMainWindow, QApplication, QGraphicsDropShadowEffect,QSplashScreen
from ui_JUJUBEE import Ui_SplashScreen 
from ui_main import Ui_JuJuBee

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.ui = Ui_JuJuBee()
        self.ui.setupUi(self)
        self.setWindowTitle("Main Window")
        self.setStyleSheet("background-color: #222; color: #FFF")

        QTimer.singleShot(3000, lambda: self.ui.label.setText("<strong>THANK</strong> YOU"))

class SplashScreen(QMainWindow):
    def __init__(self):
        super().__init__()
        self.ui = Ui_SplashScreen()
        self.ui.setupUi(self)
        self.setWindowTitle("Splash Screen")

        # Remove Title Bar
        self.setWindowFlags(Qt.FramelessWindowHint)
        self.setAttribute(Qt.WA_TranslucentBackground)

        # Drop Shadow Effect
        shadow = QGraphicsDropShadowEffect(self)
        shadow.setBlurRadius(20)
        shadow.setXOffset(0)
        shadow.setYOffset(0)
        shadow.setColor(QColor(0, 0, 0, 60))
        self.ui.DropShadowFrame.setGraphicsEffect(shadow)

        # QTimer
        self.timer = QTimer()
        self.timer.timeout.connect(self.progress)
        self.timer.start(35)
        self.show()
        # Change Description
        QTimer.singleShot(1500, lambda: self.ui.Description.setText("<strong>LOADING</strong> DATABASE"))
        QTimer.singleShot(3000, lambda: self.ui.Description.setText("<strong>LOADING</strong> USER INTERFACE"))
        QTimer.singleShot(4000, lambda: self.ui.Description.setText("<strong>OPENING</strong> APPLICTION"))
        self.counter = 0  # Initialize counter
    def progress(self):
        
        self.counter += 1  # Increment counter
        self.ui.progressBar.setValue(self.counter)
        if self.counter > 100:
            self.timer.stop()
            self.main = MainWindow()
            self.main.show()
            self.close()
        

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = SplashScreen()
    window.show()
    sys.exit(app.exec_())













