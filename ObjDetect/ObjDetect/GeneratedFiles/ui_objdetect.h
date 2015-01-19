/********************************************************************************
** Form generated from reading UI file 'objdetect.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJDETECT_H
#define UI_OBJDETECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjDetectClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *image;
    QLabel *tip;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_1;
    QLabel *checkStyle;
    QComboBox *comboBox;
    QLabel *checkTime;
    QLabel *times;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *ObjDetectClass)
    {
        if (ObjDetectClass->objectName().isEmpty())
            ObjDetectClass->setObjectName(QString::fromUtf8("ObjDetectClass"));
        ObjDetectClass->resize(890, 573);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ObjDetectClass->sizePolicy().hasHeightForWidth());
        ObjDetectClass->setSizePolicy(sizePolicy);
        ObjDetectClass->setMinimumSize(QSize(750, 550));
        centralWidget = new QWidget(ObjDetectClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        image = new QLabel(centralWidget);
        image->setObjectName(QString::fromUtf8("image"));
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);
        image->setMinimumSize(QSize(571, 0));
        image->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size:20px;\n"
"	border:2px dashed black;\n"
"	border-radius:10px;\n"
"	background:rgba(0,255,0,100);\n"
"}"));
        image->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(image);

        tip = new QLabel(centralWidget);
        tip->setObjectName(QString::fromUtf8("tip"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tip->sizePolicy().hasHeightForWidth());
        tip->setSizePolicy(sizePolicy1);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        tip->setFont(font);

        verticalLayout->addWidget(tip);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(25, -1, 25, -1);
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(9);
        pushButton_1->setFont(font1);
        pushButton_1->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton_1);

        checkStyle = new QLabel(centralWidget);
        checkStyle->setObjectName(QString::fromUtf8("checkStyle"));
        sizePolicy1.setHeightForWidth(checkStyle->sizePolicy().hasHeightForWidth());
        checkStyle->setSizePolicy(sizePolicy1);
        checkStyle->setMinimumSize(QSize(54, 0));
        checkStyle->setLayoutDirection(Qt::LeftToRight);
        checkStyle->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(checkStyle);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBox);

        checkTime = new QLabel(centralWidget);
        checkTime->setObjectName(QString::fromUtf8("checkTime"));
        sizePolicy1.setHeightForWidth(checkTime->sizePolicy().hasHeightForWidth());
        checkTime->setSizePolicy(sizePolicy1);
        checkTime->setMinimumSize(QSize(54, 0));
        checkTime->setLayoutDirection(Qt::LeftToRight);
        checkTime->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(checkTime);

        times = new QLabel(centralWidget);
        times->setObjectName(QString::fromUtf8("times"));
        sizePolicy1.setHeightForWidth(times->sizePolicy().hasHeightForWidth());
        times->setSizePolicy(sizePolicy1);
        times->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(times);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        pushButton_2->setFont(font2);

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 2);

        verticalLayout->addLayout(horizontalLayout);

        ObjDetectClass->setCentralWidget(centralWidget);
        pushButton_1->raise();
        pushButton_2->raise();
        tip->raise();
        comboBox->raise();
        checkStyle->raise();
        checkTime->raise();
        times->raise();
        image->raise();

        retranslateUi(ObjDetectClass);

        QMetaObject::connectSlotsByName(ObjDetectClass);
    } // setupUi

    void retranslateUi(QMainWindow *ObjDetectClass)
    {
        ObjDetectClass->setWindowTitle(QApplication::translate("ObjDetectClass", "\347\233\256\346\240\207\346\243\200\346\265\213Demo", 0, QApplication::UnicodeUTF8));
        image->setText(QApplication::translate("ObjDetectClass", "\346\213\226\346\213\275\345\233\276\347\211\207\345\210\260\350\277\231\351\207\214", 0, QApplication::UnicodeUTF8));
        tip->setText(QApplication::translate("ObjDetectClass", "*Browse a image and click detect", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("ObjDetectClass", "Browse", 0, QApplication::UnicodeUTF8));
        checkStyle->setText(QApplication::translate("ObjDetectClass", "\346\243\200\346\265\213\347\261\273\345\236\213:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ObjDetectClass", "\344\272\272\350\204\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ObjDetectClass", "\350\241\214\344\272\272", 0, QApplication::UnicodeUTF8)
        );
        checkTime->setText(QApplication::translate("ObjDetectClass", "\346\243\200\346\265\213\346\227\266\351\227\264:", 0, QApplication::UnicodeUTF8));
        times->setText(QApplication::translate("ObjDetectClass", "0ms", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ObjDetectClass", "Detect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ObjDetectClass: public Ui_ObjDetectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJDETECT_H
