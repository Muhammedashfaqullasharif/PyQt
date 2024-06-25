/********************************************************************************
** Form generated from reading UI file 'JuJuBee-HomeHsFJYX.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef JUJUBEE_2D_HOMEHSFJYX_H
#define JUJUBEE_2D_HOMEHSFJYX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *LoginBtn_1;
    QPushButton *AccountBtn_1;
    QPushButton *DashboardBtn_1;
    QPushButton *SettingsBtn_1;
    QPushButton *AboutBtn_1;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *ExpandBtn;
    QLabel *HomeLabl;
    QSpacerItem *horizontalSpacer;
    QLineEdit *Search;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ExitBtn;
    QStackedWidget *stackedWidget;
    QWidget *Welcome;
    QVBoxLayout *verticalLayout_4;
    QLabel *WelcomeLabl;
    QWidget *Account;
    QLabel *AccountLabl;
    QWidget *Dashboard;
    QLabel *DashboardLabl;
    QWidget *Settings;
    QLabel *SettingsLabl;
    QWidget *About;
    QLabel *AboutLabl;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *LoginBtn;
    QPushButton *AccountBtn;
    QPushButton *DashboardBtn;
    QPushButton *SettingsBtn;
    QPushButton *AboutBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(759, 418);
        MainWindow->setBaseSize(QSize(10, 10));
        MainWindow->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.114, y1:0.772727, x2:0.619, y2:0.966, stop:0.147727 rgba(0, 0, 0, 240), stop:1 rgba(179, 0, 0, 255));"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 400));
        frame_2->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"border-right-color: rgb(214, 214, 214);\n"
"border-radius: 12px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.989, y2:1, stop:0.119318 rgba(0, 0, 0, 255), stop:0.215909 rgba(170, 0, 0, 107));"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_2->setLineWidth(1);
        frame_2->setMidLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        LoginBtn_1 = new QPushButton(frame_2);
        LoginBtn_1->setObjectName("LoginBtn_1");
        LoginBtn_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon-images/icons8-login-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginBtn_1->setIcon(icon);
        LoginBtn_1->setCheckable(true);
        LoginBtn_1->setChecked(true);
        LoginBtn_1->setAutoExclusive(true);

        verticalLayout_2->addWidget(LoginBtn_1);

        AccountBtn_1 = new QPushButton(frame_2);
        AccountBtn_1->setObjectName("AccountBtn_1");
        AccountBtn_1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        AccountBtn_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icon-images/icons8-account-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        AccountBtn_1->setIcon(icon1);
        AccountBtn_1->setCheckable(true);
        AccountBtn_1->setAutoExclusive(true);

        verticalLayout_2->addWidget(AccountBtn_1);

        DashboardBtn_1 = new QPushButton(frame_2);
        DashboardBtn_1->setObjectName("DashboardBtn_1");
        DashboardBtn_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icon-images/icons8-dashboard-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        DashboardBtn_1->setIcon(icon2);
        DashboardBtn_1->setCheckable(true);
        DashboardBtn_1->setChecked(false);
        DashboardBtn_1->setAutoExclusive(true);

        verticalLayout_2->addWidget(DashboardBtn_1);

        SettingsBtn_1 = new QPushButton(frame_2);
        SettingsBtn_1->setObjectName("SettingsBtn_1");
        SettingsBtn_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icon-images/icons8-settings-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsBtn_1->setIcon(icon3);
        SettingsBtn_1->setCheckable(true);
        SettingsBtn_1->setChecked(false);
        SettingsBtn_1->setAutoExclusive(true);

        verticalLayout_2->addWidget(SettingsBtn_1);

        AboutBtn_1 = new QPushButton(frame_2);
        AboutBtn_1->setObjectName("AboutBtn_1");
        AboutBtn_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icon-images/icons8-about-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutBtn_1->setIcon(icon4);
        AboutBtn_1->setCheckable(true);
        AboutBtn_1->setChecked(false);
        AboutBtn_1->setAutoExclusive(true);

        verticalLayout_2->addWidget(AboutBtn_1);

        verticalSpacer_2 = new QSpacerItem(20, 147, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addWidget(frame_2, 0, 1, 1, 1, Qt::AlignmentFlag::AlignLeft);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        menu = new QFrame(centralwidget);
        menu->setObjectName("menu");
        menu->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.273091, y1:0.801, x2:0.955, y2:1, stop:0.261364 rgba(0, 0, 0, 204), stop:0.840909 rgba(208, 0, 0, 155));"));
        menu->setFrameShape(QFrame::Shape::StyledPanel);
        menu->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(menu);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ExpandBtn = new QPushButton(menu);
        ExpandBtn->setObjectName("ExpandBtn");
        ExpandBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icon-images/icons8-greater-than-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExpandBtn->setIcon(icon5);
        ExpandBtn->setCheckable(true);
        ExpandBtn->setChecked(false);
        ExpandBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(ExpandBtn);

        HomeLabl = new QLabel(menu);
        HomeLabl->setObjectName("HomeLabl");
        HomeLabl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(240, 240, 240);"));

        horizontalLayout->addWidget(HomeLabl);

        horizontalSpacer = new QSpacerItem(9, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Search = new QLineEdit(menu);
        Search->setObjectName("Search");
        Search->setEnabled(true);
        Search->setMinimumSize(QSize(429, 0));
        Search->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.9545, y1:0.955, x2:1, y2:1, stop:0 rgba(24, 24, 24, 206), stop:1 rgba(131, 16, 16, 255));\n"
"border-radius:5px;\n"
""));
        Search->setFrame(true);

        horizontalLayout->addWidget(Search);

        horizontalSpacer_2 = new QSpacerItem(9, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ExitBtn = new QPushButton(menu);
        ExitBtn->setObjectName("ExitBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ExitBtn->sizePolicy().hasHeightForWidth());
        ExitBtn->setSizePolicy(sizePolicy1);
        ExitBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icon-images/icons8-shutdown-26.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExitBtn->setIcon(icon6);
        ExitBtn->setCheckable(true);
        ExitBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(ExitBtn);


        verticalLayout_3->addWidget(menu, 0, Qt::AlignmentFlag::AlignTop);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setFrameShadow(QFrame::Shadow::Sunken);
        stackedWidget->setLineWidth(0);
        Welcome = new QWidget();
        Welcome->setObjectName("Welcome");
        verticalLayout_4 = new QVBoxLayout(Welcome);
        verticalLayout_4->setObjectName("verticalLayout_4");
        WelcomeLabl = new QLabel(Welcome);
        WelcomeLabl->setObjectName("WelcomeLabl");
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(28);
        font.setWeight(QFont::ExtraBold);
        font.setItalic(false);
        WelcomeLabl->setFont(font);
        WelcomeLabl->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 113), stop:1 rgba(248, 248, 248, 0));\n"
"color: rgb(229, 229, 229);\n"
"border-color: rgb(255, 255, 255);\n"
"font: 800 28pt \"Rockwell Extra Bold\";\n"
"border-radius:8px;"));

        verticalLayout_4->addWidget(WelcomeLabl, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        stackedWidget->addWidget(Welcome);
        Account = new QWidget();
        Account->setObjectName("Account");
        AccountLabl = new QLabel(Account);
        AccountLabl->setObjectName("AccountLabl");
        AccountLabl->setGeometry(QRect(110, 160, 340, 45));
        AccountLabl->setFont(font);
        AccountLabl->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 113), stop:1 rgba(248, 248, 248, 0));\n"
"color: rgb(229, 229, 229);\n"
"border-color: rgb(255, 255, 255);\n"
"font: 800 28pt \"Rockwell Extra Bold\";\n"
"border-radius:8px;"));
        AccountLabl->setMargin(0);
        stackedWidget->addWidget(Account);
        Dashboard = new QWidget();
        Dashboard->setObjectName("Dashboard");
        DashboardLabl = new QLabel(Dashboard);
        DashboardLabl->setObjectName("DashboardLabl");
        DashboardLabl->setGeometry(QRect(150, 160, 270, 45));
        DashboardLabl->setFont(font);
        DashboardLabl->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 113), stop:1 rgba(248, 248, 248, 0));\n"
"color: rgb(229, 229, 229);\n"
"border-color: rgb(255, 255, 255);\n"
"font: 800 28pt \"Rockwell Extra Bold\";\n"
"border-radius:8px;"));
        DashboardLabl->setMargin(0);
        stackedWidget->addWidget(Dashboard);
        Settings = new QWidget();
        Settings->setObjectName("Settings");
        SettingsLabl = new QLabel(Settings);
        SettingsLabl->setObjectName("SettingsLabl");
        SettingsLabl->setGeometry(QRect(180, 160, 220, 45));
        SettingsLabl->setFont(font);
        SettingsLabl->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 113), stop:1 rgba(248, 248, 248, 0));\n"
"color: rgb(229, 229, 229);\n"
"border-color: rgb(255, 255, 255);\n"
"font: 800 28pt \"Rockwell Extra Bold\";\n"
"border-radius:8px;"));
        SettingsLabl->setMargin(0);
        stackedWidget->addWidget(Settings);
        About = new QWidget();
        About->setObjectName("About");
        AboutLabl = new QLabel(About);
        AboutLabl->setObjectName("AboutLabl");
        AboutLabl->setGeometry(QRect(210, 160, 160, 45));
        AboutLabl->setFont(font);
        AboutLabl->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 113), stop:1 rgba(248, 248, 248, 0));\n"
"color: rgb(229, 229, 229);\n"
"border-color: rgb(255, 255, 255);\n"
"font: 800 28pt \"Rockwell Extra Bold\";\n"
"border-radius:8px;"));
        AboutLabl->setMargin(0);
        stackedWidget->addWidget(About);

        verticalLayout_3->addWidget(stackedWidget);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 400));
        frame->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"border-right-color: rgb(214, 214, 214);\n"
"border-radius: 12px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.989, y2:1, stop:0.119318 rgba(0, 0, 0, 255), stop:0.215909 rgba(170, 0, 0, 107));"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        LoginBtn = new QPushButton(frame);
        LoginBtn->setObjectName("LoginBtn");
        LoginBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"image: url(:/Icon-images/icons8-login-24.png);\n"
"border-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        LoginBtn->setCheckable(true);
        LoginBtn->setChecked(false);
        LoginBtn->setAutoExclusive(true);

        verticalLayout->addWidget(LoginBtn);

        AccountBtn = new QPushButton(frame);
        AccountBtn->setObjectName("AccountBtn");
        AccountBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"image: url(:/Icon-images/icons8-account-24.png);\n"
"border-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        AccountBtn->setCheckable(true);
        AccountBtn->setChecked(false);
        AccountBtn->setAutoExclusive(true);

        verticalLayout->addWidget(AccountBtn);

        DashboardBtn = new QPushButton(frame);
        DashboardBtn->setObjectName("DashboardBtn");
        DashboardBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"image: url(:/Icon-images/icons8-dashboard-24.png);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        DashboardBtn->setCheckable(true);
        DashboardBtn->setChecked(false);
        DashboardBtn->setAutoExclusive(true);

        verticalLayout->addWidget(DashboardBtn);

        SettingsBtn = new QPushButton(frame);
        SettingsBtn->setObjectName("SettingsBtn");
        SettingsBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"image: url(:/Icon-images/icons8-settings-30.png);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        SettingsBtn->setCheckable(true);
        SettingsBtn->setChecked(false);
        SettingsBtn->setAutoExclusive(true);

        verticalLayout->addWidget(SettingsBtn);

        AboutBtn = new QPushButton(frame);
        AboutBtn->setObjectName("AboutBtn");
        AboutBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.875 rgba(0, 0, 0, 186), stop:1 rgba(255, 255, 255, 255));\n"
"image: url(:/Icon-images/icons8-about-64.png);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(216, 216, 216, 49), stop:1 rgba(238, 238, 238, 175));\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        AboutBtn->setCheckable(true);
        AboutBtn->setChecked(true);
        AboutBtn->setAutoExclusive(true);

        verticalLayout->addWidget(AboutBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addWidget(frame, 0, 0, 1, 1, Qt::AlignmentFlag::AlignLeft);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(ExpandBtn, &QPushButton::toggled, frame, &QFrame::setHidden);
        QObject::connect(ExpandBtn, &QPushButton::toggled, frame_2, &QFrame::setVisible);
        QObject::connect(LoginBtn, &QPushButton::toggled, LoginBtn_1, &QPushButton::setChecked);
        QObject::connect(LoginBtn_1, &QPushButton::toggled, LoginBtn, &QPushButton::setChecked);
        QObject::connect(AccountBtn_1, &QPushButton::toggled, AccountBtn, &QPushButton::setChecked);
        QObject::connect(AccountBtn, &QPushButton::toggled, AccountBtn_1, &QPushButton::setChecked);
        QObject::connect(DashboardBtn, &QPushButton::toggled, DashboardBtn_1, &QPushButton::setChecked);
        QObject::connect(DashboardBtn_1, &QPushButton::toggled, DashboardBtn, &QPushButton::setChecked);
        QObject::connect(SettingsBtn, &QPushButton::toggled, SettingsBtn_1, &QPushButton::setChecked);
        QObject::connect(SettingsBtn_1, &QPushButton::toggled, SettingsBtn, &QPushButton::setChecked);
        QObject::connect(AboutBtn_1, &QPushButton::toggled, AboutBtn, &QPushButton::setChecked);
        QObject::connect(AboutBtn, &QPushButton::toggled, AboutBtn_1, &QPushButton::setChecked);
        QObject::connect(ExitBtn, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        //stackedWidget->setCurrentIndex(0);
        QObject::connect(LoginBtn, &QPushButton::clicked,stackedWidget,&QStackedWidget::setCurrentIndex(0));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "JuJuBee", nullptr));
        LoginBtn_1->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        AccountBtn_1->setText(QCoreApplication::translate("MainWindow", "Account", nullptr));
        DashboardBtn_1->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        SettingsBtn_1->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        AboutBtn_1->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
#if QT_CONFIG(tooltip)
        ExpandBtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Expand</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ExpandBtn->setText(QString());
        HomeLabl->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        Search->setText(QString());
        Search->setPlaceholderText(QCoreApplication::translate("MainWindow", "search", nullptr));
        ExitBtn->setText(QString());
        WelcomeLabl->setText(QCoreApplication::translate("MainWindow", " WELCOME HOME", nullptr));
        AccountLabl->setText(QCoreApplication::translate("MainWindow", "YOUR ACCOUNT", nullptr));
        DashboardLabl->setText(QCoreApplication::translate("MainWindow", "DASHBOARD", nullptr));
        SettingsLabl->setText(QCoreApplication::translate("MainWindow", "SETTINGS", nullptr));
        AboutLabl->setText(QCoreApplication::translate("MainWindow", " ABOUT ", nullptr));
        LoginBtn->setText(QString());
        AccountBtn->setText(QString());
        DashboardBtn->setText(QString());
        SettingsBtn->setText(QString());
        AboutBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // JUJUBEE_2D_HOMEHSFJYX_H
