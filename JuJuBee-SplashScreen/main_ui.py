# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'main.ui'
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
from PySide6.QtWidgets import (QApplication, QLabel, QMainWindow, QMenuBar,
    QSizePolicy, QStatusBar, QVBoxLayout, QWidget)

class Ui_JuJuBee(object):
    def setupUi(self, JuJuBee):
        if not JuJuBee.objectName():
            JuJuBee.setObjectName(u"JuJuBee")
        JuJuBee.resize(479, 257)
        self.centralwidget = QWidget(JuJuBee)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayout = QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")
        font = QFont()
        font.setFamilies([u"Rockwell"])
        font.setPointSize(16)
        font.setBold(True)
        self.label.setFont(font)
        self.label.setAlignment(Qt.AlignmentFlag.AlignCenter)

        self.verticalLayout.addWidget(self.label)

        JuJuBee.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(JuJuBee)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 479, 22))
        JuJuBee.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(JuJuBee)
        self.statusbar.setObjectName(u"statusbar")
        JuJuBee.setStatusBar(self.statusbar)

        self.retranslateUi(JuJuBee)

        QMetaObject.connectSlotsByName(JuJuBee)
    # setupUi

    def retranslateUi(self, JuJuBee):
        JuJuBee.setWindowTitle(QCoreApplication.translate("JuJuBee", u"MainWindow", None))
        self.label.setText(QCoreApplication.translate("JuJuBee", u"APP: JuJuBee - ADD YOUR WIDGETS HERE", None))
    # retranslateUi

