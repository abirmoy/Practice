/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_search;
    QPushButton *pushButton_search;
    QListWidget *listWidget_movie_list;
    QGroupBox *groupBox_movie_type;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_19;
    QCheckBox *checkBox_20;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_22;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_25;
    QCheckBox *checkBox_23;
    QCheckBox *checkBox_28;
    QCheckBox *checkBox_29;
    QCheckBox *checkBox_27;
    QCheckBox *checkBox_31;
    QCheckBox *checkBox_26;
    QCheckBox *checkBox_30;
    QCheckBox *checkBox_24;
    QCheckBox *checkBox_32;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBox_37;
    QCheckBox *checkBox_34;
    QCheckBox *checkBox_36;
    QCheckBox *checkBox_35;
    QCheckBox *checkBox_46;
    QCheckBox *checkBox_48;
    QCheckBox *checkBox_45;
    QCheckBox *checkBox_33;
    QCheckBox *checkBox_47;
    QCheckBox *checkBox_38;
    QCheckBox *checkBox_39;
    QCheckBox *checkBox_40;
    QCheckBox *checkBox_41;
    QCheckBox *checkBox_42;
    QCheckBox *checkBox_44;
    QCheckBox *checkBox_43;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_chick;
    QPushButton *pushButton_date;
    QFrame *frame;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_commond_list;
    QTextEdit *textEdit_movie_info;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_apend_commond;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(974, 719);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_search = new QLineEdit(centralWidget);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));

        horizontalLayout_2->addWidget(lineEdit_search);

        pushButton_search = new QPushButton(centralWidget);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));

        horizontalLayout_2->addWidget(pushButton_search);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget_movie_list = new QListWidget(centralWidget);
        listWidget_movie_list->setObjectName(QStringLiteral("listWidget_movie_list"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget_movie_list->sizePolicy().hasHeightForWidth());
        listWidget_movie_list->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(listWidget_movie_list);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 3, 1);

        groupBox_movie_type = new QGroupBox(centralWidget);
        groupBox_movie_type->setObjectName(QStringLiteral("groupBox_movie_type"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(7);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(groupBox_movie_type->sizePolicy().hasHeightForWidth());
        groupBox_movie_type->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox_movie_type);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget = new QTabWidget(groupBox_movie_type);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        checkBox_7 = new QCheckBox(tab);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        gridLayout_4->addWidget(checkBox_7, 3, 4, 1, 1);

        checkBox_6 = new QCheckBox(tab);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        gridLayout_4->addWidget(checkBox_6, 3, 3, 1, 1);

        checkBox_16 = new QCheckBox(tab);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));

        gridLayout_4->addWidget(checkBox_16, 0, 4, 1, 1);

        checkBox_ = new QCheckBox(tab);
        checkBox_->setObjectName(QStringLiteral("checkBox_"));

        gridLayout_4->addWidget(checkBox_, 0, 1, 1, 1);

        checkBox_4 = new QCheckBox(tab);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_4->addWidget(checkBox_4, 3, 2, 1, 1);

        checkBox_18 = new QCheckBox(tab);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));

        gridLayout_4->addWidget(checkBox_18, 3, 5, 1, 1);

        checkBox_2 = new QCheckBox(tab);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_4->addWidget(checkBox_2, 3, 1, 1, 1);

        checkBox_5 = new QCheckBox(tab);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        gridLayout_4->addWidget(checkBox_5, 0, 3, 1, 1);

        checkBox_3 = new QCheckBox(tab);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_4->addWidget(checkBox_3, 0, 2, 1, 1);

        checkBox_17 = new QCheckBox(tab);
        checkBox_17->setObjectName(QStringLiteral("checkBox_17"));

        gridLayout_4->addWidget(checkBox_17, 0, 5, 1, 1);

        checkBox_15 = new QCheckBox(tab);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));

        gridLayout_4->addWidget(checkBox_15, 3, 6, 1, 1);

        checkBox_19 = new QCheckBox(tab);
        checkBox_19->setObjectName(QStringLiteral("checkBox_19"));

        gridLayout_4->addWidget(checkBox_19, 0, 6, 1, 1);

        checkBox_20 = new QCheckBox(tab);
        checkBox_20->setObjectName(QStringLiteral("checkBox_20"));

        gridLayout_4->addWidget(checkBox_20, 3, 7, 1, 1);

        checkBox_21 = new QCheckBox(tab);
        checkBox_21->setObjectName(QStringLiteral("checkBox_21"));

        gridLayout_4->addWidget(checkBox_21, 0, 7, 1, 1);

        checkBox_22 = new QCheckBox(tab);
        checkBox_22->setObjectName(QStringLiteral("checkBox_22"));

        gridLayout_4->addWidget(checkBox_22, 0, 8, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        checkBox_25 = new QCheckBox(tab_2);
        checkBox_25->setObjectName(QStringLiteral("checkBox_25"));

        gridLayout_5->addWidget(checkBox_25, 0, 2, 1, 1);

        checkBox_23 = new QCheckBox(tab_2);
        checkBox_23->setObjectName(QStringLiteral("checkBox_23"));

        gridLayout_5->addWidget(checkBox_23, 0, 1, 1, 1);

        checkBox_28 = new QCheckBox(tab_2);
        checkBox_28->setObjectName(QStringLiteral("checkBox_28"));

        gridLayout_5->addWidget(checkBox_28, 0, 3, 1, 1);

        checkBox_29 = new QCheckBox(tab_2);
        checkBox_29->setObjectName(QStringLiteral("checkBox_29"));

        gridLayout_5->addWidget(checkBox_29, 0, 4, 1, 1);

        checkBox_27 = new QCheckBox(tab_2);
        checkBox_27->setObjectName(QStringLiteral("checkBox_27"));

        gridLayout_5->addWidget(checkBox_27, 5, 3, 1, 1);

        checkBox_31 = new QCheckBox(tab_2);
        checkBox_31->setObjectName(QStringLiteral("checkBox_31"));

        gridLayout_5->addWidget(checkBox_31, 5, 5, 1, 1);

        checkBox_26 = new QCheckBox(tab_2);
        checkBox_26->setObjectName(QStringLiteral("checkBox_26"));

        gridLayout_5->addWidget(checkBox_26, 5, 2, 1, 1);

        checkBox_30 = new QCheckBox(tab_2);
        checkBox_30->setObjectName(QStringLiteral("checkBox_30"));

        gridLayout_5->addWidget(checkBox_30, 5, 4, 1, 1);

        checkBox_24 = new QCheckBox(tab_2);
        checkBox_24->setObjectName(QStringLiteral("checkBox_24"));

        gridLayout_5->addWidget(checkBox_24, 5, 1, 1, 1);

        checkBox_32 = new QCheckBox(tab_2);
        checkBox_32->setObjectName(QStringLiteral("checkBox_32"));

        gridLayout_5->addWidget(checkBox_32, 0, 5, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        checkBox_37 = new QCheckBox(tab_3);
        checkBox_37->setObjectName(QStringLiteral("checkBox_37"));

        gridLayout_6->addWidget(checkBox_37, 0, 2, 1, 1);

        checkBox_34 = new QCheckBox(tab_3);
        checkBox_34->setObjectName(QStringLiteral("checkBox_34"));

        gridLayout_6->addWidget(checkBox_34, 2, 0, 1, 1);

        checkBox_36 = new QCheckBox(tab_3);
        checkBox_36->setObjectName(QStringLiteral("checkBox_36"));

        gridLayout_6->addWidget(checkBox_36, 2, 1, 1, 1);

        checkBox_35 = new QCheckBox(tab_3);
        checkBox_35->setObjectName(QStringLiteral("checkBox_35"));

        gridLayout_6->addWidget(checkBox_35, 0, 1, 1, 1);

        checkBox_46 = new QCheckBox(tab_3);
        checkBox_46->setObjectName(QStringLiteral("checkBox_46"));

        gridLayout_6->addWidget(checkBox_46, 2, 9, 1, 1);

        checkBox_48 = new QCheckBox(tab_3);
        checkBox_48->setObjectName(QStringLiteral("checkBox_48"));

        gridLayout_6->addWidget(checkBox_48, 2, 10, 1, 1);

        checkBox_45 = new QCheckBox(tab_3);
        checkBox_45->setObjectName(QStringLiteral("checkBox_45"));

        gridLayout_6->addWidget(checkBox_45, 0, 9, 1, 1);

        checkBox_33 = new QCheckBox(tab_3);
        checkBox_33->setObjectName(QStringLiteral("checkBox_33"));

        gridLayout_6->addWidget(checkBox_33, 0, 0, 1, 1);

        checkBox_47 = new QCheckBox(tab_3);
        checkBox_47->setObjectName(QStringLiteral("checkBox_47"));

        gridLayout_6->addWidget(checkBox_47, 0, 10, 1, 1);

        checkBox_38 = new QCheckBox(tab_3);
        checkBox_38->setObjectName(QStringLiteral("checkBox_38"));

        gridLayout_6->addWidget(checkBox_38, 2, 2, 1, 1);

        checkBox_39 = new QCheckBox(tab_3);
        checkBox_39->setObjectName(QStringLiteral("checkBox_39"));

        gridLayout_6->addWidget(checkBox_39, 0, 3, 1, 1);

        checkBox_40 = new QCheckBox(tab_3);
        checkBox_40->setObjectName(QStringLiteral("checkBox_40"));

        gridLayout_6->addWidget(checkBox_40, 2, 3, 1, 1);

        checkBox_41 = new QCheckBox(tab_3);
        checkBox_41->setObjectName(QStringLiteral("checkBox_41"));

        gridLayout_6->addWidget(checkBox_41, 0, 5, 1, 1);

        checkBox_42 = new QCheckBox(tab_3);
        checkBox_42->setObjectName(QStringLiteral("checkBox_42"));

        gridLayout_6->addWidget(checkBox_42, 2, 5, 1, 1);

        checkBox_44 = new QCheckBox(tab_3);
        checkBox_44->setObjectName(QStringLiteral("checkBox_44"));

        gridLayout_6->addWidget(checkBox_44, 2, 6, 1, 1);

        checkBox_43 = new QCheckBox(tab_3);
        checkBox_43->setObjectName(QStringLiteral("checkBox_43"));

        gridLayout_6->addWidget(checkBox_43, 0, 6, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_ok = new QPushButton(groupBox_movie_type);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        gridLayout_3->addWidget(pushButton_ok, 1, 3, 1, 1);

        pushButton_chick = new QPushButton(groupBox_movie_type);
        pushButton_chick->setObjectName(QStringLiteral("pushButton_chick"));

        gridLayout_3->addWidget(pushButton_chick, 1, 2, 1, 1);

        pushButton_date = new QPushButton(groupBox_movie_type);
        pushButton_date->setObjectName(QStringLiteral("pushButton_date"));

        gridLayout_3->addWidget(pushButton_date, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_movie_type, 0, 1, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(8);
        sizePolicy2.setVerticalStretch(8);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_commond_list = new QTextEdit(frame);
        textEdit_commond_list->setObjectName(QStringLiteral("textEdit_commond_list"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEdit_commond_list->sizePolicy().hasHeightForWidth());
        textEdit_commond_list->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(textEdit_commond_list, 0, 1, 1, 1);

        textEdit_movie_info = new QTextEdit(frame);
        textEdit_movie_info->setObjectName(QStringLiteral("textEdit_movie_info"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(4);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textEdit_movie_info->sizePolicy().hasHeightForWidth());
        textEdit_movie_info->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(textEdit_movie_info, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_apend_commond = new QPushButton(centralWidget);
        pushButton_apend_commond->setObjectName(QStringLiteral("pushButton_apend_commond"));

        horizontalLayout->addWidget(pushButton_apend_commond);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 974, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_search->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        groupBox_movie_type->setTitle(QApplication::translate("MainWindow", "\347\255\233\351\200\211", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "\346\214\252\345\250\201\350\257\255", nullptr));
        checkBox_6->setText(QApplication::translate("MainWindow", "\346\227\245\350\257\255", nullptr));
        checkBox_16->setText(QApplication::translate("MainWindow", "\347\247\221\350\220\250\350\257\255", nullptr));
        checkBox_->setText(QApplication::translate("MainWindow", "\346\231\256\351\200\232\350\257\235", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "\344\277\204\350\257\255", nullptr));
        checkBox_18->setText(QApplication::translate("MainWindow", "\347\245\226\351\262\201\350\257\255", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "\346\226\271\350\250\200", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "\345\276\267\350\257\255", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "\350\213\261\350\257\255", nullptr));
        checkBox_17->setText(QApplication::translate("MainWindow", "\346\263\260\350\257\255", nullptr));
        checkBox_15->setText(QApplication::translate("MainWindow", "\346\226\257\347\223\246\345\270\214\351\207\214\350\257\255", nullptr));
        checkBox_19->setText(QApplication::translate("MainWindow", "\347\262\244\350\257\255", nullptr));
        checkBox_20->setText(QApplication::translate("MainWindow", "\346\204\217\345\244\247\345\210\251\350\257\255", nullptr));
        checkBox_21->setText(QApplication::translate("MainWindow", "\345\215\260\345\234\260\350\257\255", nullptr));
        checkBox_22->setText(QApplication::translate("MainWindow", "\346\263\242\345\205\260\350\257\255", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\257\255\350\250\200", nullptr));
        checkBox_25->setText(QApplication::translate("MainWindow", "\344\270\255\345\233\275\345\217\260\346\271\276", nullptr));
        checkBox_23->setText(QApplication::translate("MainWindow", "\344\270\255\345\233\275\345\244\247\351\231\206", nullptr));
        checkBox_28->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\254", nullptr));
        checkBox_29->setText(QApplication::translate("MainWindow", "\346\263\260\345\233\275", nullptr));
        checkBox_27->setText(QApplication::translate("MainWindow", "\350\213\261\345\233\275", nullptr));
        checkBox_31->setText(QApplication::translate("MainWindow", "\346\204\217\345\244\247\345\210\251", nullptr));
        checkBox_26->setText(QApplication::translate("MainWindow", "\347\276\216\345\233\275", nullptr));
        checkBox_30->setText(QApplication::translate("MainWindow", "\345\276\267\345\233\275", nullptr));
        checkBox_24->setText(QApplication::translate("MainWindow", "\344\270\255\345\233\275\351\246\231\346\270\257", nullptr));
        checkBox_32->setText(QApplication::translate("MainWindow", "   \346\214\252\345\250\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\234\260\345\214\272", nullptr));
        checkBox_37->setText(QApplication::translate("MainWindow", "\344\274\240\350\256\260", nullptr));
        checkBox_34->setText(QApplication::translate("MainWindow", "\346\210\230\344\272\211", nullptr));
        checkBox_36->setText(QApplication::translate("MainWindow", "\345\211\247\346\203\205", nullptr));
        checkBox_35->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262", nullptr));
        checkBox_46->setText(QApplication::translate("MainWindow", "\345\212\237\345\244\253", nullptr));
        checkBox_48->setText(QApplication::translate("MainWindow", " \347\201\276\351\232\276", nullptr));
        checkBox_45->setText(QApplication::translate("MainWindow", "\350\211\272\346\234\257", nullptr));
        checkBox_33->setText(QApplication::translate("MainWindow", "\347\210\261\346\203\205", nullptr));
        checkBox_47->setText(QApplication::translate("MainWindow", " \345\217\244\350\243\205", nullptr));
        checkBox_38->setText(QApplication::translate("MainWindow", "\345\212\250\347\224\273", nullptr));
        checkBox_39->setText(QApplication::translate("MainWindow", "\347\247\221\345\271\273", nullptr));
        checkBox_40->setText(QApplication::translate("MainWindow", "\345\206\222\351\231\251", nullptr));
        checkBox_41->setText(QApplication::translate("MainWindow", " \345\245\207\345\271\273", nullptr));
        checkBox_42->setText(QApplication::translate("MainWindow", "\346\202\254\347\226\221", nullptr));
        checkBox_44->setText(QApplication::translate("MainWindow", "\347\212\257\347\275\252", nullptr));
        checkBox_43->setText(QApplication::translate("MainWindow", " \346\201\220\346\200\226", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\347\224\265\345\275\261\347\261\273\345\236\213", nullptr));
        pushButton_ok->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        pushButton_chick->setText(QApplication::translate("MainWindow", "\346\214\211\347\203\255\345\272\246\346\216\222\345\220\215", nullptr));
        pushButton_date->setText(QApplication::translate("MainWindow", "\346\214\211\344\270\212\346\230\240\346\227\245\346\234\237\346\216\222\345\220\215", nullptr));
        pushButton_apend_commond->setText(QApplication::translate("MainWindow", "\350\277\275\345\212\240\350\257\204\350\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
