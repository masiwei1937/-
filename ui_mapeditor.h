/********************************************************************************
** Form generated from reading UI file 'mapeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPEDITOR_H
#define UI_MAPEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapEditor
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QLabel *label;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MapEditor)
    {
        if (MapEditor->objectName().isEmpty())
            MapEditor->setObjectName(QString::fromUtf8("MapEditor"));
        MapEditor->resize(1519, 859);
        MapEditor->setIconSize(QSize(100, 100));
        centralwidget = new QWidget(MapEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(1240, 70, 221, 481));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 10, 111, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 40, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 760, 161, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 780, 161, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 780, 58, 16));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 100, 171, 501));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 0, 311, 64));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(50, 10, 91, 91));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon);
        pushButton_14->setIconSize(QSize(100, 100));
        pushButton_14->setFlat(true);
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(1280, 580, 151, 161));
        pushButton_15->setIcon(icon);
        pushButton_15->setIconSize(QSize(150, 150));
        pushButton_15->setFlat(true);
        MapEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MapEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1519, 22));
        MapEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(MapEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MapEditor->setStatusBar(statusbar);

        retranslateUi(MapEditor);

        QMetaObject::connectSlotsByName(MapEditor);
    } // setupUi

    void retranslateUi(QMainWindow *MapEditor)
    {
        MapEditor->setWindowTitle(QCoreApplication::translate("MapEditor", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MapEditor", "\347\202\271\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("MapEditor", "\350\267\257\345\276\204\346\225\260", nullptr));
        label_4->setText(QCoreApplication::translate("MapEditor", "\350\265\267\347\202\271\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MapEditor", "\347\273\210\347\202\271\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MapEditor", "\345\234\260\345\233\276\345\220\215\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MapEditor", "\346\267\273\345\212\240\347\202\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MapEditor", "\346\267\273\345\212\240\350\267\257\345\276\204", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MapEditor", "\347\202\271\345\221\275\345\220\215", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MapEditor", "\347\274\226\350\276\221\350\267\257\345\276\204\351\225\277\345\272\246", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MapEditor", "\345\210\240\351\231\244\347\202\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MapEditor", "\345\210\240\351\231\244\350\267\257\345\276\204", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MapEditor", "\346\230\276\347\244\272/\351\232\220\350\227\217\350\267\257\345\276\204\351\225\277", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MapEditor", "\351\201\215\345\216\206\350\267\257\345\276\204 \346\230\276\347\244\272\346\234\200\345\260\217\350\267\257\345\276\204", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MapEditor", "\350\275\275\345\205\245\345\234\260\345\233\276", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MapEditor", "\346\233\264\346\224\271\350\203\214\346\231\257", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MapEditor", "\345\234\260\345\233\276\345\221\275\345\220\215", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MapEditor", "\344\277\235\345\255\230\345\234\260\345\233\276", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MapEditor", "\346\270\205\351\231\244\345\234\260\345\233\276", nullptr));
        label->setText(QCoreApplication::translate("MapEditor", "\346\217\220\347\244\272\346\241\206", nullptr));
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MapEditor: public Ui_MapEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPEDITOR_H
