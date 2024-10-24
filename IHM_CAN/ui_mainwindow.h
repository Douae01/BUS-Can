/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *MotorBox;
    QWidget *DistanceBrightnessBox;
    QRadioButton *DistanceRadio;
    QRadioButton *BrightnessRadio;
    QWidget *SensorValues;
    QGroupBox *HumidityValue;
    QLabel *HumidityLabel;
    QGroupBox *TemperatureValue;
    QLabel *temperaturelabel;
    QGroupBox *PressureValue;
    QLabel *PressureLabel;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *DistanceBrightnessValue;
    QLabel *uniteLabel;
    QWidget *threeDbox;
    QPushButton *OnOffButton;
    QPushButton *autoToggleButton;
    QLineEdit *MotorSpeed;
    QPushButton *setSpeed;
    QGroupBox *windSpeedvalue;
    QLabel *windSpeedLabel;
    QPushButton *MotorSpeed_2;
    QLabel *label_2;
    QLabel *label_16;
    QLabel *label_17;
    QGroupBox *phiValue;
    QLabel *phiLabel;
    QGroupBox *ThetaValue;
    QLabel *ThetaLabel;
    QGroupBox *PsiValue;
    QLabel *PsiLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *accelerationx_value;
    QLabel *accelerationxLabel;
    QLabel *label_11;
    QLabel *label_12;
    QGroupBox *accelerationy_value;
    QLabel *accelerationyLabel;
    QGroupBox *accelerationz_value;
    QLabel *accelerationzLabel;
    QGroupBox *gyroscopex_value;
    QLabel *gyroscopexLabel;
    QGroupBox *gyroscopey_value;
    QLabel *gyroscopeyLabel;
    QGroupBox *gyroscopez_value;
    QLabel *gyroscopezLabel;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(900, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(900, 700));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 901, 531));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(10, 0, 10, 0);
        widget = new QWidget(gridLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 2, 0, 1, 1);

        MotorBox = new QWidget(gridLayoutWidget);
        MotorBox->setObjectName(QString::fromUtf8("MotorBox"));
        DistanceBrightnessBox = new QWidget(MotorBox);
        DistanceBrightnessBox->setObjectName(QString::fromUtf8("DistanceBrightnessBox"));
        DistanceBrightnessBox->setGeometry(QRect(-10, -10, 441, 591));
        DistanceRadio = new QRadioButton(DistanceBrightnessBox);
        DistanceRadio->setObjectName(QString::fromUtf8("DistanceRadio"));
        DistanceRadio->setGeometry(QRect(20, 280, 112, 31));
        DistanceRadio->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        DistanceRadio->setChecked(true);
        BrightnessRadio = new QRadioButton(DistanceBrightnessBox);
        BrightnessRadio->setObjectName(QString::fromUtf8("BrightnessRadio"));
        BrightnessRadio->setGeometry(QRect(140, 280, 112, 31));
        BrightnessRadio->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        SensorValues = new QWidget(DistanceBrightnessBox);
        SensorValues->setObjectName(QString::fromUtf8("SensorValues"));
        SensorValues->setGeometry(QRect(0, 50, 861, 181));
        HumidityValue = new QGroupBox(SensorValues);
        HumidityValue->setObjectName(QString::fromUtf8("HumidityValue"));
        HumidityValue->setGeometry(QRect(20, 0, 341, 51));
        HumidityLabel = new QLabel(HumidityValue);
        HumidityLabel->setObjectName(QString::fromUtf8("HumidityLabel"));
        HumidityLabel->setGeometry(QRect(10, 20, 63, 31));
        TemperatureValue = new QGroupBox(SensorValues);
        TemperatureValue->setObjectName(QString::fromUtf8("TemperatureValue"));
        TemperatureValue->setGeometry(QRect(20, 60, 341, 51));
        temperaturelabel = new QLabel(TemperatureValue);
        temperaturelabel->setObjectName(QString::fromUtf8("temperaturelabel"));
        temperaturelabel->setGeometry(QRect(10, 20, 63, 31));
        PressureValue = new QGroupBox(SensorValues);
        PressureValue->setObjectName(QString::fromUtf8("PressureValue"));
        PressureValue->setGeometry(QRect(20, 120, 341, 51));
        PressureLabel = new QLabel(PressureValue);
        PressureLabel->setObjectName(QString::fromUtf8("PressureLabel"));
        PressureLabel->setGeometry(QRect(10, 20, 63, 31));
        label = new QLabel(DistanceBrightnessBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 75 italic 16pt \"Noto Sans\"; \n"
"text-decoration: underline;\n"
"color: rgb(128, 128, 168);"));
        groupBox = new QGroupBox(DistanceBrightnessBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 230, 341, 51));
        DistanceBrightnessValue = new QLabel(groupBox);
        DistanceBrightnessValue->setObjectName(QString::fromUtf8("DistanceBrightnessValue"));
        DistanceBrightnessValue->setGeometry(QRect(10, 20, 331, 31));
        DistanceBrightnessValue->setStyleSheet(QString::fromUtf8(""));
        uniteLabel = new QLabel(groupBox);
        uniteLabel->setObjectName(QString::fromUtf8("uniteLabel"));
        uniteLabel->setGeometry(QRect(300, 20, 41, 31));

        gridLayout->addWidget(MotorBox, 0, 0, 1, 1);

        threeDbox = new QWidget(gridLayoutWidget);
        threeDbox->setObjectName(QString::fromUtf8("threeDbox"));
        threeDbox->setMaximumSize(QSize(900, 300));
        threeDbox->setFocusPolicy(Qt::WheelFocus);
        OnOffButton = new QPushButton(threeDbox);
        OnOffButton->setObjectName(QString::fromUtf8("OnOffButton"));
        OnOffButton->setGeometry(QRect(20, 160, 111, 29));
        OnOffButton->setCursor(QCursor(Qt::PointingHandCursor));
        OnOffButton->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 141, 0);\n"
"color: rgb(255, 255, 255);"));
        autoToggleButton = new QPushButton(threeDbox);
        autoToggleButton->setObjectName(QString::fromUtf8("autoToggleButton"));
        autoToggleButton->setGeometry(QRect(140, 160, 111, 29));
        autoToggleButton->setCursor(QCursor(Qt::PointingHandCursor));
        autoToggleButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 110, 255);\n"
"color: rgb(255, 255, 255);"));
        MotorSpeed = new QLineEdit(threeDbox);
        MotorSpeed->setObjectName(QString::fromUtf8("MotorSpeed"));
        MotorSpeed->setGeometry(QRect(140, 120, 111, 31));
        setSpeed = new QPushButton(threeDbox);
        setSpeed->setObjectName(QString::fromUtf8("setSpeed"));
        setSpeed->setGeometry(QRect(260, 120, 101, 31));
        setSpeed->setCursor(QCursor(Qt::PointingHandCursor));
        setSpeed->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 118, 123);\n"
"color: rgb(255, 255, 255);"));
        windSpeedvalue = new QGroupBox(threeDbox);
        windSpeedvalue->setObjectName(QString::fromUtf8("windSpeedvalue"));
        windSpeedvalue->setGeometry(QRect(20, 40, 341, 51));
        windSpeedvalue->setStyleSheet(QString::fromUtf8(""));
        windSpeedvalue->setFlat(false);
        windSpeedLabel = new QLabel(windSpeedvalue);
        windSpeedLabel->setObjectName(QString::fromUtf8("windSpeedLabel"));
        windSpeedLabel->setGeometry(QRect(10, 20, 63, 31));
        MotorSpeed_2 = new QPushButton(threeDbox);
        MotorSpeed_2->setObjectName(QString::fromUtf8("MotorSpeed_2"));
        MotorSpeed_2->setGeometry(QRect(20, 120, 111, 31));
        label_2 = new QLabel(threeDbox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 401, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 75 italic 16pt \"Noto Sans\"; \n"
"text-decoration: underline;\n"
"color: rgb(128, 128, 168);"));
        label_16 = new QLabel(threeDbox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 100, 151, 18));
        label_17 = new QLabel(threeDbox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(220, 270, 221, 31));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("font: 75 italic 16pt \"Noto Sans\"; \n"
"text-decoration: underline;\n"
"color: rgb(128, 128, 168);"));

        gridLayout->addWidget(threeDbox, 0, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        phiValue = new QGroupBox(centralwidget);
        phiValue->setObjectName(QString::fromUtf8("phiValue"));
        phiValue->setGeometry(QRect(80, 560, 71, 21));
        phiLabel = new QLabel(phiValue);
        phiLabel->setObjectName(QString::fromUtf8("phiLabel"));
        phiLabel->setGeometry(QRect(10, 0, 71, 21));
        ThetaValue = new QGroupBox(centralwidget);
        ThetaValue->setObjectName(QString::fromUtf8("ThetaValue"));
        ThetaValue->setGeometry(QRect(80, 590, 71, 21));
        ThetaLabel = new QLabel(ThetaValue);
        ThetaLabel->setObjectName(QString::fromUtf8("ThetaLabel"));
        ThetaLabel->setGeometry(QRect(10, 0, 61, 20));
        PsiValue = new QGroupBox(centralwidget);
        PsiValue->setObjectName(QString::fromUtf8("PsiValue"));
        PsiValue->setGeometry(QRect(80, 620, 71, 21));
        PsiLabel = new QLabel(PsiValue);
        PsiLabel->setObjectName(QString::fromUtf8("PsiLabel"));
        PsiLabel->setGeometry(QRect(10, 0, 71, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 560, 21, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 580, 20, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 620, 21, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 540, 61, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 italic 12pt \"Noto Sans Display\";\n"
"color: rgb(53, 132, 228);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(380, 540, 101, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 italic 12pt \"Noto Sans Display\";\n"
"color: rgb(53, 132, 228);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(750, 540, 101, 21));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 italic 12pt \"Noto Sans Display\";\n"
"color: rgb(53, 132, 228);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(380, 560, 41, 21));
        accelerationx_value = new QGroupBox(centralwidget);
        accelerationx_value->setObjectName(QString::fromUtf8("accelerationx_value"));
        accelerationx_value->setGeometry(QRect(420, 560, 71, 21));
        accelerationxLabel = new QLabel(accelerationx_value);
        accelerationxLabel->setObjectName(QString::fromUtf8("accelerationxLabel"));
        accelerationxLabel->setGeometry(QRect(10, 0, 71, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(379, 590, 41, 21));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(380, 620, 41, 21));
        accelerationy_value = new QGroupBox(centralwidget);
        accelerationy_value->setObjectName(QString::fromUtf8("accelerationy_value"));
        accelerationy_value->setGeometry(QRect(420, 590, 71, 21));
        accelerationyLabel = new QLabel(accelerationy_value);
        accelerationyLabel->setObjectName(QString::fromUtf8("accelerationyLabel"));
        accelerationyLabel->setGeometry(QRect(10, 0, 71, 21));
        accelerationz_value = new QGroupBox(centralwidget);
        accelerationz_value->setObjectName(QString::fromUtf8("accelerationz_value"));
        accelerationz_value->setGeometry(QRect(420, 620, 71, 21));
        accelerationzLabel = new QLabel(accelerationz_value);
        accelerationzLabel->setObjectName(QString::fromUtf8("accelerationzLabel"));
        accelerationzLabel->setGeometry(QRect(10, 0, 71, 21));
        gyroscopex_value = new QGroupBox(centralwidget);
        gyroscopex_value->setObjectName(QString::fromUtf8("gyroscopex_value"));
        gyroscopex_value->setGeometry(QRect(790, 560, 71, 21));
        gyroscopexLabel = new QLabel(gyroscopex_value);
        gyroscopexLabel->setObjectName(QString::fromUtf8("gyroscopexLabel"));
        gyroscopexLabel->setGeometry(QRect(10, 0, 71, 21));
        gyroscopey_value = new QGroupBox(centralwidget);
        gyroscopey_value->setObjectName(QString::fromUtf8("gyroscopey_value"));
        gyroscopey_value->setGeometry(QRect(790, 590, 71, 21));
        gyroscopeyLabel = new QLabel(gyroscopey_value);
        gyroscopeyLabel->setObjectName(QString::fromUtf8("gyroscopeyLabel"));
        gyroscopeyLabel->setGeometry(QRect(10, 0, 71, 21));
        gyroscopez_value = new QGroupBox(centralwidget);
        gyroscopez_value->setObjectName(QString::fromUtf8("gyroscopez_value"));
        gyroscopez_value->setGeometry(QRect(790, 620, 71, 21));
        gyroscopezLabel = new QLabel(gyroscopez_value);
        gyroscopezLabel->setObjectName(QString::fromUtf8("gyroscopezLabel"));
        gyroscopezLabel->setGeometry(QRect(10, 0, 71, 21));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(750, 560, 41, 21));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(749, 590, 41, 21));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(750, 620, 41, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 23));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "IHM Bus CAN", nullptr));
        DistanceRadio->setText(QCoreApplication::translate("MainWindow", "Distance", nullptr));
        BrightnessRadio->setText(QCoreApplication::translate("MainWindow", "Luminosit\303\251", nullptr));
        HumidityValue->setTitle(QCoreApplication::translate("MainWindow", "Humidit\303\251 (%)", nullptr));
        HumidityLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        TemperatureValue->setTitle(QCoreApplication::translate("MainWindow", "Temp\303\251rature (\302\260C)", nullptr));
        temperaturelabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        PressureValue->setTitle(QCoreApplication::translate("MainWindow", "Pression (hPa)", nullptr));
        PressureLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "VL6180X : Carte ID 1", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Mode Capteur", nullptr));
        DistanceBrightnessValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        DistanceBrightnessValue->setProperty("title", QVariant(QCoreApplication::translate("MainWindow", "Mode Capteur", nullptr)));
        uniteLabel->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        OnOffButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        autoToggleButton->setText(QCoreApplication::translate("MainWindow", "Auto", nullptr));
        MotorSpeed->setPlaceholderText(QCoreApplication::translate("MainWindow", "Vitesse perso", nullptr));
        setSpeed->setText(QCoreApplication::translate("MainWindow", "Envoyer", nullptr));
        windSpeedvalue->setTitle(QCoreApplication::translate("MainWindow", "Vitesse du Vent (Km/h)", nullptr));
        windSpeedLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        MotorSpeed_2->setText(QCoreApplication::translate("MainWindow", "Vitesse al\303\251atoire", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Robotis dynamixel et SOMFY : Carte ID 3", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Contr\303\264le du Moteur", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", " MPU9250 : Carte ID 2", nullptr));
        phiValue->setTitle(QString());
        phiLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ThetaValue->setTitle(QString());
        ThetaLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        PsiValue->setTitle(QString());
        PsiLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\317\206", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\316\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\316\250", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Angles", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Acc\303\251l\303\251ration", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Gyroscope", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "acc_x", nullptr));
        accelerationx_value->setTitle(QString());
        accelerationxLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "acc_y", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "acc_z", nullptr));
        accelerationy_value->setTitle(QString());
        accelerationyLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        accelerationz_value->setTitle(QString());
        accelerationzLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        gyroscopex_value->setTitle(QString());
        gyroscopexLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        gyroscopey_value->setTitle(QString());
        gyroscopeyLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        gyroscopez_value->setTitle(QString());
        gyroscopezLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "gyr_x", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "gyr_y", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "gyr_z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
