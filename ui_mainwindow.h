/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *title;
    QLabel *name;
    QTextEdit *textEdit;
    QGroupBox *sex;
    QRadioButton *boy;
    QRadioButton *girl;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *home;
    QRadioButton *dormitory;
    QRadioButton *outside;
    QLabel *address;
    QTextBrowser *answer;
    QCheckBox *checkBox;
    QListWidget *joblist;
    QLabel *job;
    QGroupBox *groupBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QPushButton *send;
    QTextBrowser *answer2;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *answer3;
    QLabel *label_3;
    QTextBrowser *answer4;
    QLabel *label_4;
    QTextBrowser *answer5;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(704, 465);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(20, 0, 111, 51));
        QFont font;
        font.setPointSize(12);
        title->setFont(font);
        name = new QLabel(centralWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(20, 50, 41, 41));
        name->setFont(font);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 50, 101, 31));
        sex = new QGroupBox(centralWidget);
        sex->setObjectName(QStringLiteral("sex"));
        sex->setGeometry(QRect(10, 100, 141, 61));
        sex->setFont(font);
        boy = new QRadioButton(sex);
        boy->setObjectName(QStringLiteral("boy"));
        boy->setGeometry(QRect(60, 0, 51, 31));
        girl = new QRadioButton(sex);
        girl->setObjectName(QStringLiteral("girl"));
        girl->setGeometry(QRect(60, 30, 51, 21));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 200, 141, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        home = new QRadioButton(verticalLayoutWidget);
        home->setObjectName(QStringLiteral("home"));

        verticalLayout->addWidget(home);

        dormitory = new QRadioButton(verticalLayoutWidget);
        dormitory->setObjectName(QStringLiteral("dormitory"));

        verticalLayout->addWidget(dormitory);

        outside = new QRadioButton(verticalLayoutWidget);
        outside->setObjectName(QStringLiteral("outside"));

        verticalLayout->addWidget(outside);

        address = new QLabel(centralWidget);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(10, 170, 71, 31));
        answer = new QTextBrowser(centralWidget);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(190, 220, 91, 191));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 320, 121, 21));
        QFont font1;
        font1.setPointSize(10);
        checkBox->setFont(font1);
        joblist = new QListWidget(centralWidget);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        new QListWidgetItem(joblist);
        joblist->setObjectName(QStringLiteral("joblist"));
        joblist->setGeometry(QRect(190, 40, 111, 151));
        job = new QLabel(centralWidget);
        job->setObjectName(QStringLiteral("job"));
        job->setGeometry(QRect(190, 10, 71, 21));
        job->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(320, 10, 371, 181));
        groupBox->setFont(font1);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 20, 111, 21));
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 50, 111, 16));
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 80, 121, 16));
        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(10, 110, 131, 16));
        checkBox_7 = new QCheckBox(groupBox);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(10, 140, 131, 16));
        checkBox_8 = new QCheckBox(groupBox);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(150, 20, 131, 16));
        checkBox_9 = new QCheckBox(groupBox);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(150, 50, 161, 16));
        checkBox_10 = new QCheckBox(groupBox);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setGeometry(QRect(150, 80, 131, 16));
        checkBox_11 = new QCheckBox(groupBox);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));
        checkBox_11->setGeometry(QRect(150, 110, 101, 16));
        checkBox_12 = new QCheckBox(groupBox);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        checkBox_12->setGeometry(QRect(150, 140, 121, 16));
        send = new QPushButton(centralWidget);
        send->setObjectName(QStringLiteral("send"));
        send->setEnabled(false);
        send->setGeometry(QRect(40, 350, 111, 23));
        answer2 = new QTextBrowser(centralWidget);
        answer2->setObjectName(QStringLiteral("answer2"));
        answer2->setGeometry(QRect(280, 220, 31, 191));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 195, 81, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 200, 47, 12));
        answer3 = new QTextBrowser(centralWidget);
        answer3->setObjectName(QStringLiteral("answer3"));
        answer3->setGeometry(QRect(310, 220, 111, 192));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 200, 47, 12));
        answer4 = new QTextBrowser(centralWidget);
        answer4->setObjectName(QStringLiteral("answer4"));
        answer4->setGeometry(QRect(420, 220, 71, 192));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 200, 47, 12));
        answer5 = new QTextBrowser(centralWidget);
        answer5->setObjectName(QStringLiteral("answer5"));
        answer5->setGeometry(QRect(490, 220, 201, 192));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(490, 200, 91, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 704, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        title->setText(QApplication::translate("MainWindow", "\345\252\275\345\257\266\346\270\254\351\251\227\345\244\247\350\252\277\346\237\245", 0));
        name->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215:", 0));
        sex->setTitle(QApplication::translate("MainWindow", "\346\200\247\345\210\245:", 0));
        boy->setText(QApplication::translate("MainWindow", "\347\224\267", 0));
        girl->setText(QApplication::translate("MainWindow", "\345\245\263", 0));
        home->setText(QApplication::translate("MainWindow", "\344\275\217\345\256\266\350\243\241", 0));
        dormitory->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215", 0));
        outside->setText(QApplication::translate("MainWindow", "\345\244\226\351\235\242\347\247\237", 0));
        address->setText(QApplication::translate("MainWindow", "\345\261\205\344\275\217\345\234\260:", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\345\220\214\346\204\217\346\255\244\345\225\217\345\215\267", 0));

        const bool __sortingEnabled = joblist->isSortingEnabled();
        joblist->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = joblist->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\345\255\270\347\224\237\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem1 = joblist->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\351\255\224\346\263\225\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem2 = joblist->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\345\245\266\346\262\271\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem3 = joblist->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\350\200\201\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem4 = joblist->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\345\245\275\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem5 = joblist->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\346\257\224\344\275\240\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem6 = joblist->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\346\261\275\350\273\212\347\266\255\344\277\256\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem7 = joblist->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "\344\270\212\347\217\255\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem8 = joblist->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "\346\234\215\345\213\231\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem9 = joblist->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "\347\215\205\347\215\205", 0));
        QListWidgetItem *___qlistwidgetitem10 = joblist->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "\345\260\217\347\215\205\347\215\205", 0));
        joblist->setSortingEnabled(__sortingEnabled);

        job->setText(QApplication::translate("MainWindow", "\350\201\267\346\245\255:", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\224\237\346\264\273\345\260\217\346\227\245\345\270\270:", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\347\205\256\351\243\257\347\265\246\346\210\221\345\220\203", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\345\217\253\346\210\221\350\265\267\345\272\212", 0));
        checkBox_5->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\350\274\211\346\210\221\345\216\273\344\270\212\345\255\270", 0));
        checkBox_6->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\346\234\203\351\200\201\346\235\261\350\245\277\347\265\246\346\210\221", 0));
        checkBox_7->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\345\271\253\346\210\221\346\264\227\350\241\243\346\234\215", 0));
        checkBox_8->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\345\271\253\346\210\221\346\214\221\350\241\243\346\234\215", 0));
        checkBox_9->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\351\231\252\346\210\221\345\216\273\350\243\234\347\277\222", 0));
        checkBox_10->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\347\265\246\346\210\221\351\214\242\351\214\242", 0));
        checkBox_11->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\351\231\252\346\210\221\347\235\241\350\246\272", 0));
        checkBox_12->setText(QApplication::translate("MainWindow", "\345\252\275\345\252\275\347\255\211\346\210\221\345\233\236\345\256\266", 0));
        send->setText(QApplication::translate("MainWindow", "\351\200\201\345\207\272", 0));
        label->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\245", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\261\205\344\275\217", 0));
        label_4->setText(QApplication::translate("MainWindow", "\350\201\267\346\245\255", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\270\254\346\245\255\347\265\220\346\236\234", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
