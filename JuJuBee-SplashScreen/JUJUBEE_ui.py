# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'JUJUBEE.ui'
##
## Created by: Qt User Interface Compiler version 6.7.0
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QFrame, QLabel, QMainWindow,
    QProgressBar, QSizePolicy, QVBoxLayout, QWidget)

class Ui_SplashScreen(object):
    def setupUi(self, SplashScreen):
        if not SplashScreen.objectName():
            SplashScreen.setObjectName(u"SplashScreen")
        SplashScreen.resize(680, 400)
        self.centralwidget = QWidget(SplashScreen)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayout = QVBoxLayout(self.centralwidget)
        self.verticalLayout.setSpacing(0)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.verticalLayout.setContentsMargins(10, 10, 10, 10)
        self.DropShadowFrame = QFrame(self.centralwidget)
        self.DropShadowFrame.setObjectName(u"DropShadowFrame")
        self.DropShadowFrame.setStyleSheet(u"QFrame{\n"
"background-color: rgb(49, 49, 148);\n"
"	border-radius:10px;\n"
"}")
        self.DropShadowFrame.setFrameShape(QFrame.Shape.StyledPanel)
        self.DropShadowFrame.setFrameShadow(QFrame.Shadow.Raised)
        self.Title = QLabel(self.DropShadowFrame)
        self.Title.setObjectName(u"Title")
        self.Title.setGeometry(QRect(0, 30, 661, 161))
        font = QFont()
        font.setFamilies([u"Rage Italic"])
        font.setPointSize(100)
        self.Title.setFont(font)
        self.Title.setStyleSheet(u"color: rgb(255, 255, 0);")
        self.Title.setTextFormat(Qt.TextFormat.AutoText)
        self.Title.setAlignment(Qt.AlignmentFlag.AlignCenter)
        self.Title.setMargin(4)
        self.Description = QLabel(self.DropShadowFrame)
        self.Description.setObjectName(u"Description")
        self.Description.setGeometry(QRect(0, 190, 661, 31))
        font1 = QFont()
        font1.setFamilies([u"Segoe UI"])
        font1.setPointSize(12)
        font1.setBold(False)
        font1.setItalic(True)
        self.Description.setFont(font1)
        self.Description.setStyleSheet(u"color: rgb(169, 195, 221);")
        self.Description.setTextFormat(Qt.TextFormat.AutoText)
        self.Description.setAlignment(Qt.AlignmentFlag.AlignCenter)
        self.Description.setMargin(4)
        self.progressBar = QProgressBar(self.DropShadowFrame)
        self.progressBar.setObjectName(u"progressBar")
        self.progressBar.setGeometry(QRect(40, 290, 581, 23))
        font2 = QFont()
        font2.setBold(True)
        font2.setUnderline(False)
        self.progressBar.setFont(font2)
        self.progressBar.setStyleSheet(u"QProgressBar{\n"
"	background-color: rgb(70, 90, 142);\n"
"	color: rgb(255, 255, 255);\n"
"	border-style:none;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}\n"
"QProgressBar::chunk{\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.0454545, y1:1, x2:0.983, y2:0.977636, stop:0.107955 rgba(254, 121, 199, 255), stop:1 rgba(255, 255, 0, 255));\n"
"}")
        self.progressBar.setValue(24)
        self.loading = QLabel(self.DropShadowFrame)
        self.loading.setObjectName(u"loading")
        self.loading.setGeometry(QRect(0, 320, 661, 31))
        font3 = QFont()
        font3.setFamilies([u"Rockwell Extra Bold"])
        font3.setPointSize(8)
        self.loading.setFont(font3)
        self.loading.setStyleSheet(u"color: rgb(255, 255, 255);\n"
"color: rgb(206, 236, 255);")
        self.loading.setTextFormat(Qt.TextFormat.AutoText)
        self.loading.setAlignment(Qt.AlignmentFlag.AlignCenter)
        self.loading.setMargin(4)
        self.credits = QLabel(self.DropShadowFrame)
        self.credits.setObjectName(u"credits")
        self.credits.setGeometry(QRect(0, 350, 661, 31))
        font4 = QFont()
        font4.setFamilies([u"Forte"])
        font4.setPointSize(8)
        font4.setBold(False)
        font4.setItalic(False)
        self.credits.setFont(font4)
        self.credits.setStyleSheet(u"color: rgb(254, 121, 199);\n"
"")
        self.credits.setTextFormat(Qt.TextFormat.AutoText)
        self.credits.setScaledContents(False)
        self.credits.setAlignment(Qt.AlignmentFlag.AlignBottom|Qt.AlignmentFlag.AlignRight|Qt.AlignmentFlag.AlignTrailing)
        self.credits.setMargin(4)

        self.verticalLayout.addWidget(self.DropShadowFrame)

        SplashScreen.setCentralWidget(self.centralwidget)

        self.retranslateUi(SplashScreen)

        QMetaObject.connectSlotsByName(SplashScreen)
    # setupUi

    def retranslateUi(self, SplashScreen):
        SplashScreen.setWindowTitle(QCoreApplication.translate("SplashScreen", u"MainWindow", None))
        self.Title.setText(QCoreApplication.translate("SplashScreen", u"<b><strong>JuJu</strong></b>Bee", None))
        self.Description.setText(QCoreApplication.translate("SplashScreen", u"<b><strong>DIGITIZE  SOCIALIZE</strong></b>	LEAP", None))
        self.loading.setText(QCoreApplication.translate("SplashScreen", u"<b>Loading...</b>", None))
        self.credits.setText(QCoreApplication.translate("SplashScreen", u"<b>Created : </b> M Ashfaqulla Sharif", None))
    # retranslateUi

