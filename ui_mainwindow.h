/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *TrainingTool;
    QFrame *vLine1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *checkboxLayout;
    QCheckBox *onlineTestCBox;
    QFrame *line;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *configTextVLayout;
    QLineEdit *weightText;
    QWidget *gridLayoutWidget;
    QGridLayout *buttonLayout;
    QPushButton *trainButton;
    QPushButton *stopTrainButton;
    QFrame *line_3;
    QLabel *darketGuiLabel;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *parameterLabelVLayout;
    QLabel *batchLabel;
    QLabel *subdLabel;
    QLabel *lrLabel;
    QLabel *momentumLabel;
    QLabel *decayLabel;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *projectNameLayout;
    QLabel *projectNameLabel;
    QFrame *hLine3;
    QFrame *line_2;
    QFrame *hLine2;
    QLabel *trainingToolLabel;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *currentProjectLayout;
    QLabel *currentProjectLabel;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *configLabelVLayout;
    QLabel *weightLabel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *parameterVLayout;
    QLineEdit *batchText;
    QLineEdit *subdText;
    QLineEdit *lrText;
    QLineEdit *momentumText;
    QLineEdit *decayText;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *configBrowseVLayout;
    QToolButton *weightBrowse;
    QWidget *gridLayoutWidget_2;
    QGridLayout *graphLayout;
    QLabel *epochLabel;
    QLabel *epochValue;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *trainingLossLayout;
    QLabel *trainingLossLabel;
    QLabel *trainingLossValue;
    QLabel *toolTipTrainingToolLabel;
    QWidget *DatasetTool;
    QFrame *line_4;
    QLabel *darketGuiLabel_2;
    QLabel *datasetToolLabel;
    QFrame *line_5;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *datasetInfoLabels;
    QLabel *numberOfClassesLabel;
    QLabel *datasetPathLabel;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *datasetInfoTextLayout;
    QLineEdit *numberOfClassesText;
    QLineEdit *datasetPathText;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *datasetInfoBrowseLayout;
    QToolButton *datasetPathBrowse;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *augmentationLayout;
    QCheckBox *augmentationCBox;
    QWidget *verticalLayoutWidget_16;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *brightnessCBox;
    QWidget *verticalLayoutWidget_17;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *colorNoiseCBox;
    QWidget *verticalLayoutWidget_18;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *colorShiftCBox;
    QWidget *verticalLayoutWidget_19;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *horizontalFlipCBox;
    QWidget *verticalLayoutWidget_20;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *gaussianCBox;
    QWidget *verticalLayoutWidget_21;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *rotationCBox;
    QWidget *verticalLayoutWidget_22;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *transformationCBox;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *brightnessLowerText;
    QWidget *verticalLayoutWidget_23;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *colorNoiseLowerText;
    QWidget *verticalLayoutWidget_24;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *colorShiftLowerText;
    QWidget *verticalLayoutWidget_25;
    QVBoxLayout *verticalLayout_12;
    QWidget *verticalLayoutWidget_26;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *gaussianLowerText;
    QWidget *verticalLayoutWidget_27;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *rotationLowerText;
    QWidget *verticalLayoutWidget_28;
    QVBoxLayout *verticalLayout_15;
    QWidget *verticalLayoutWidget_55;
    QVBoxLayout *verticalLayout_30;
    QLineEdit *brightnessUpperText;
    QWidget *verticalLayoutWidget_56;
    QVBoxLayout *verticalLayout_31;
    QWidget *verticalLayoutWidget_57;
    QVBoxLayout *verticalLayout_32;
    QWidget *verticalLayoutWidget_58;
    QVBoxLayout *verticalLayout_33;
    QWidget *verticalLayoutWidget_59;
    QVBoxLayout *verticalLayout_34;
    QLineEdit *gaussianUpperText;
    QWidget *verticalLayoutWidget_60;
    QVBoxLayout *verticalLayout_35;
    QLineEdit *rotationUpperText;
    QWidget *verticalLayoutWidget_61;
    QVBoxLayout *verticalLayout_36;
    QWidget *verticalLayoutWidget_15;
    QVBoxLayout *prepareDatasetLayout;
    QPushButton *prepareDatasetButton;
    QWidget *verticalLayoutWidget_62;
    QVBoxLayout *verticalLayout_37;
    QProgressBar *progressBar;
    QWidget *verticalLayoutWidget_98;
    QVBoxLayout *verticalLayout_60;
    QLabel *label;
    QWidget *verticalLayoutWidget_99;
    QVBoxLayout *verticalLayout_61;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_100;
    QVBoxLayout *verticalLayout_62;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_101;
    QVBoxLayout *verticalLayout_63;
    QWidget *verticalLayoutWidget_102;
    QVBoxLayout *verticalLayout_64;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_103;
    QVBoxLayout *verticalLayout_65;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_104;
    QVBoxLayout *verticalLayout_66;
    QLabel *toolTipDatasetToolLabel;
    QWidget *AnalysisTool;
    QPlainTextEdit *testText;
    QLabel *darketGuiLabel_7;
    QLabel *analysisToolLabel;
    QFrame *line_16;
    QFrame *line_17;
    QWidget *gridLayoutWidget_7;
    QGridLayout *accuracyGraphLayout;
    QWidget *verticalLayoutWidget_105;
    QVBoxLayout *startAnalysisLayout;
    QPushButton *startAnalysisButton;
    QFrame *line_18;
    QWidget *verticalLayoutWidget_106;
    QVBoxLayout *labelsDropdownLayout;
    QComboBox *labelsDropdownList;
    QLabel *toolTipAnalysisToolLabel;
    QWidget *TestTool;
    QLabel *darketGuiLabel_9;
    QLabel *testToolLabel_2;
    QFrame *line_21;
    QFrame *line_22;
    QWidget *verticalLayoutWidget_14;
    QVBoxLayout *configTextVLayout_2;
    QLineEdit *weightText_2;
    QWidget *verticalLayoutWidget_29;
    QVBoxLayout *configBrowseVLayout_2;
    QToolButton *weightBrowse_2;
    QWidget *verticalLayoutWidget_30;
    QVBoxLayout *testToolLabelLayout;
    QLabel *testToolWeightLabel;
    QLabel *testToolTestListLabel;
    QWidget *verticalLayoutWidget_31;
    QVBoxLayout *testToolTextLayout;
    QLineEdit *testToolWeightText;
    QLineEdit *testToolTestListText;
    QWidget *verticalLayoutWidget_32;
    QVBoxLayout *testToolBrowseLayout;
    QToolButton *testToolWeightBrowse;
    QFrame *line_23;
    QWidget *verticalLayoutWidget_108;
    QVBoxLayout *testToolTestButtonLayout;
    QPushButton *testToolTestButton;
    QWidget *verticalLayoutWidget_109;
    QVBoxLayout *singleMultipleWeightLayout;
    QComboBox *singleMultipleLayoutDropdown;
    QWidget *verticalLayoutWidget_81;
    QVBoxLayout *verticalLayout;
    QToolButton *testToolTestListBrowse;
    QWidget *PredictionTool;
    QLabel *darketGuiLabel_8;
    QLabel *predictionToolLabel;
    QFrame *line_19;
    QFrame *line_20;
    QWidget *gridLayoutWidget_8;
    QGridLayout *predictedImageLayout;
    QLabel *predictedImageLabel;
    QWidget *verticalLayoutWidget_107;
    QVBoxLayout *predictImageButtonLayout;
    QPushButton *predictImageButton;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1600, 1012);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1601, 951));
        TrainingTool = new QWidget();
        TrainingTool->setObjectName(QStringLiteral("TrainingTool"));
        vLine1 = new QFrame(TrainingTool);
        vLine1->setObjectName(QStringLiteral("vLine1"));
        vLine1->setGeometry(QRect(1270, 10, 20, 901));
        vLine1->setFrameShape(QFrame::VLine);
        vLine1->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(TrainingTool);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(1290, 340, 311, 41));
        checkboxLayout = new QVBoxLayout(verticalLayoutWidget_2);
        checkboxLayout->setSpacing(6);
        checkboxLayout->setContentsMargins(11, 11, 11, 11);
        checkboxLayout->setObjectName(QStringLiteral("checkboxLayout"));
        checkboxLayout->setContentsMargins(0, 0, 180, 0);
        onlineTestCBox = new QCheckBox(verticalLayoutWidget_2);
        onlineTestCBox->setObjectName(QStringLiteral("onlineTestCBox"));
        onlineTestCBox->setLayoutDirection(Qt::RightToLeft);

        checkboxLayout->addWidget(onlineTestCBox);

        line = new QFrame(TrainingTool);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(1296, 130, 291, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_6 = new QWidget(TrainingTool);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(1396, 400, 161, 41));
        configTextVLayout = new QVBoxLayout(verticalLayoutWidget_6);
        configTextVLayout->setSpacing(6);
        configTextVLayout->setContentsMargins(11, 11, 11, 11);
        configTextVLayout->setObjectName(QStringLiteral("configTextVLayout"));
        configTextVLayout->setContentsMargins(10, 5, 10, 5);
        weightText = new QLineEdit(verticalLayoutWidget_6);
        weightText->setObjectName(QStringLiteral("weightText"));

        configTextVLayout->addWidget(weightText);

        gridLayoutWidget = new QWidget(TrainingTool);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(1296, 460, 301, 81));
        buttonLayout = new QGridLayout(gridLayoutWidget);
        buttonLayout->setSpacing(6);
        buttonLayout->setContentsMargins(11, 11, 11, 11);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        buttonLayout->setHorizontalSpacing(10);
        buttonLayout->setContentsMargins(0, 0, 10, 0);
        trainButton = new QPushButton(gridLayoutWidget);
        trainButton->setObjectName(QStringLiteral("trainButton"));

        buttonLayout->addWidget(trainButton, 0, 0, 1, 1);

        stopTrainButton = new QPushButton(gridLayoutWidget);
        stopTrainButton->setObjectName(QStringLiteral("stopTrainButton"));

        buttonLayout->addWidget(stopTrainButton, 1, 0, 1, 1);

        line_3 = new QFrame(TrainingTool);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(1296, 380, 291, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        darketGuiLabel = new QLabel(TrainingTool);
        darketGuiLabel->setObjectName(QStringLiteral("darketGuiLabel"));
        darketGuiLabel->setGeometry(QRect(1366, 17, 141, 21));
        QFont font;
        font.setFamily(QStringLiteral("TakaoPGothic"));
        font.setPointSize(18);
        darketGuiLabel->setFont(font);
        darketGuiLabel->setMouseTracking(true);
        darketGuiLabel->setTextFormat(Qt::AutoText);
        verticalLayoutWidget_5 = new QWidget(TrainingTool);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(1296, 151, 104, 171));
        parameterLabelVLayout = new QVBoxLayout(verticalLayoutWidget_5);
        parameterLabelVLayout->setSpacing(6);
        parameterLabelVLayout->setContentsMargins(11, 11, 11, 11);
        parameterLabelVLayout->setObjectName(QStringLiteral("parameterLabelVLayout"));
        parameterLabelVLayout->setContentsMargins(0, 0, 0, 0);
        batchLabel = new QLabel(verticalLayoutWidget_5);
        batchLabel->setObjectName(QStringLiteral("batchLabel"));

        parameterLabelVLayout->addWidget(batchLabel);

        subdLabel = new QLabel(verticalLayoutWidget_5);
        subdLabel->setObjectName(QStringLiteral("subdLabel"));

        parameterLabelVLayout->addWidget(subdLabel);

        lrLabel = new QLabel(verticalLayoutWidget_5);
        lrLabel->setObjectName(QStringLiteral("lrLabel"));

        parameterLabelVLayout->addWidget(lrLabel);

        momentumLabel = new QLabel(verticalLayoutWidget_5);
        momentumLabel->setObjectName(QStringLiteral("momentumLabel"));

        parameterLabelVLayout->addWidget(momentumLabel);

        decayLabel = new QLabel(verticalLayoutWidget_5);
        decayLabel->setObjectName(QStringLiteral("decayLabel"));

        parameterLabelVLayout->addWidget(decayLabel);

        verticalLayoutWidget_8 = new QWidget(TrainingTool);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(1415, 90, 171, 41));
        projectNameLayout = new QVBoxLayout(verticalLayoutWidget_8);
        projectNameLayout->setSpacing(6);
        projectNameLayout->setContentsMargins(11, 11, 11, 11);
        projectNameLayout->setObjectName(QStringLiteral("projectNameLayout"));
        projectNameLayout->setContentsMargins(5, 0, 0, 0);
        projectNameLabel = new QLabel(verticalLayoutWidget_8);
        projectNameLabel->setObjectName(QStringLiteral("projectNameLabel"));

        projectNameLayout->addWidget(projectNameLabel);

        hLine3 = new QFrame(TrainingTool);
        hLine3->setObjectName(QStringLiteral("hLine3"));
        hLine3->setGeometry(QRect(1296, 440, 291, 20));
        hLine3->setFrameShape(QFrame::HLine);
        hLine3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(TrainingTool);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(1296, 70, 291, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        hLine2 = new QFrame(TrainingTool);
        hLine2->setObjectName(QStringLiteral("hLine2"));
        hLine2->setGeometry(QRect(1296, 320, 291, 20));
        hLine2->setFrameShape(QFrame::HLine);
        hLine2->setFrameShadow(QFrame::Sunken);
        trainingToolLabel = new QLabel(TrainingTool);
        trainingToolLabel->setObjectName(QStringLiteral("trainingToolLabel"));
        trainingToolLabel->setGeometry(QRect(1390, 50, 91, 17));
        trainingToolLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_3 = new QWidget(TrainingTool);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(1296, 90, 121, 41));
        currentProjectLayout = new QVBoxLayout(verticalLayoutWidget_3);
        currentProjectLayout->setSpacing(6);
        currentProjectLayout->setContentsMargins(11, 11, 11, 11);
        currentProjectLayout->setObjectName(QStringLiteral("currentProjectLayout"));
        currentProjectLayout->setContentsMargins(0, 0, 0, 0);
        currentProjectLabel = new QLabel(verticalLayoutWidget_3);
        currentProjectLabel->setObjectName(QStringLiteral("currentProjectLabel"));

        currentProjectLayout->addWidget(currentProjectLabel);

        verticalLayoutWidget_7 = new QWidget(TrainingTool);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(1296, 400, 101, 41));
        configLabelVLayout = new QVBoxLayout(verticalLayoutWidget_7);
        configLabelVLayout->setSpacing(6);
        configLabelVLayout->setContentsMargins(11, 11, 11, 11);
        configLabelVLayout->setObjectName(QStringLiteral("configLabelVLayout"));
        configLabelVLayout->setContentsMargins(0, 0, 0, 0);
        weightLabel = new QLabel(verticalLayoutWidget_7);
        weightLabel->setObjectName(QStringLiteral("weightLabel"));

        configLabelVLayout->addWidget(weightLabel);

        verticalLayoutWidget_4 = new QWidget(TrainingTool);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(1396, 150, 201, 171));
        parameterVLayout = new QVBoxLayout(verticalLayoutWidget_4);
        parameterVLayout->setSpacing(6);
        parameterVLayout->setContentsMargins(11, 11, 11, 11);
        parameterVLayout->setObjectName(QStringLiteral("parameterVLayout"));
        parameterVLayout->setContentsMargins(10, 0, 50, 0);
        batchText = new QLineEdit(verticalLayoutWidget_4);
        batchText->setObjectName(QStringLiteral("batchText"));

        parameterVLayout->addWidget(batchText);

        subdText = new QLineEdit(verticalLayoutWidget_4);
        subdText->setObjectName(QStringLiteral("subdText"));

        parameterVLayout->addWidget(subdText);

        lrText = new QLineEdit(verticalLayoutWidget_4);
        lrText->setObjectName(QStringLiteral("lrText"));

        parameterVLayout->addWidget(lrText);

        momentumText = new QLineEdit(verticalLayoutWidget_4);
        momentumText->setObjectName(QStringLiteral("momentumText"));

        parameterVLayout->addWidget(momentumText);

        decayText = new QLineEdit(verticalLayoutWidget_4);
        decayText->setObjectName(QStringLiteral("decayText"));

        parameterVLayout->addWidget(decayText);

        subdText->raise();
        momentumText->raise();
        batchText->raise();
        lrText->raise();
        decayText->raise();
        verticalLayoutWidget = new QWidget(TrainingTool);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1556, 400, 41, 41));
        configBrowseVLayout = new QVBoxLayout(verticalLayoutWidget);
        configBrowseVLayout->setSpacing(6);
        configBrowseVLayout->setContentsMargins(11, 11, 11, 11);
        configBrowseVLayout->setObjectName(QStringLiteral("configBrowseVLayout"));
        configBrowseVLayout->setContentsMargins(0, 0, 0, 0);
        weightBrowse = new QToolButton(verticalLayoutWidget);
        weightBrowse->setObjectName(QStringLiteral("weightBrowse"));

        configBrowseVLayout->addWidget(weightBrowse);

        gridLayoutWidget_2 = new QWidget(TrainingTool);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 1271, 881));
        graphLayout = new QGridLayout(gridLayoutWidget_2);
        graphLayout->setSpacing(6);
        graphLayout->setContentsMargins(11, 11, 11, 11);
        graphLayout->setObjectName(QStringLiteral("graphLayout"));
        graphLayout->setContentsMargins(0, 0, 0, 0);
        epochLabel = new QLabel(TrainingTool);
        epochLabel->setObjectName(QStringLiteral("epochLabel"));
        epochLabel->setGeometry(QRect(670, 880, 61, 39));
        epochValue = new QLabel(TrainingTool);
        epochValue->setObjectName(QStringLiteral("epochValue"));
        epochValue->setGeometry(QRect(730, 880, 141, 39));
        horizontalLayoutWidget_2 = new QWidget(TrainingTool);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(430, 880, 241, 41));
        trainingLossLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        trainingLossLayout->setSpacing(6);
        trainingLossLayout->setContentsMargins(11, 11, 11, 11);
        trainingLossLayout->setObjectName(QStringLiteral("trainingLossLayout"));
        trainingLossLayout->setContentsMargins(0, 0, 0, 0);
        trainingLossLabel = new QLabel(horizontalLayoutWidget_2);
        trainingLossLabel->setObjectName(QStringLiteral("trainingLossLabel"));

        trainingLossLayout->addWidget(trainingLossLabel);

        trainingLossValue = new QLabel(horizontalLayoutWidget_2);
        trainingLossValue->setObjectName(QStringLiteral("trainingLossValue"));

        trainingLossLayout->addWidget(trainingLossValue);

        toolTipTrainingToolLabel = new QLabel(TrainingTool);
        toolTipTrainingToolLabel->setObjectName(QStringLiteral("toolTipTrainingToolLabel"));
        toolTipTrainingToolLabel->setGeometry(QRect(1485, 50, 17, 17));
        tabWidget->addTab(TrainingTool, QString());
        DatasetTool = new QWidget();
        DatasetTool->setObjectName(QStringLiteral("DatasetTool"));
        line_4 = new QFrame(DatasetTool);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(1270, 10, 20, 901));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        darketGuiLabel_2 = new QLabel(DatasetTool);
        darketGuiLabel_2->setObjectName(QStringLiteral("darketGuiLabel_2"));
        darketGuiLabel_2->setGeometry(QRect(1366, 17, 141, 21));
        darketGuiLabel_2->setFont(font);
        darketGuiLabel_2->setMouseTracking(true);
        darketGuiLabel_2->setTextFormat(Qt::AutoText);
        datasetToolLabel = new QLabel(DatasetTool);
        datasetToolLabel->setObjectName(QStringLiteral("datasetToolLabel"));
        datasetToolLabel->setGeometry(QRect(1370, 50, 131, 17));
        datasetToolLabel->setAlignment(Qt::AlignCenter);
        line_5 = new QFrame(DatasetTool);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(1296, 70, 291, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_9 = new QWidget(DatasetTool);
        verticalLayoutWidget_9->setObjectName(QStringLiteral("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(410, 190, 160, 80));
        datasetInfoLabels = new QVBoxLayout(verticalLayoutWidget_9);
        datasetInfoLabels->setSpacing(6);
        datasetInfoLabels->setContentsMargins(11, 11, 11, 11);
        datasetInfoLabels->setObjectName(QStringLiteral("datasetInfoLabels"));
        datasetInfoLabels->setContentsMargins(0, 0, 0, 0);
        numberOfClassesLabel = new QLabel(verticalLayoutWidget_9);
        numberOfClassesLabel->setObjectName(QStringLiteral("numberOfClassesLabel"));

        datasetInfoLabels->addWidget(numberOfClassesLabel);

        datasetPathLabel = new QLabel(verticalLayoutWidget_9);
        datasetPathLabel->setObjectName(QStringLiteral("datasetPathLabel"));

        datasetInfoLabels->addWidget(datasetPathLabel);

        verticalLayoutWidget_10 = new QWidget(DatasetTool);
        verticalLayoutWidget_10->setObjectName(QStringLiteral("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(570, 190, 251, 80));
        datasetInfoTextLayout = new QVBoxLayout(verticalLayoutWidget_10);
        datasetInfoTextLayout->setSpacing(6);
        datasetInfoTextLayout->setContentsMargins(11, 11, 11, 11);
        datasetInfoTextLayout->setObjectName(QStringLiteral("datasetInfoTextLayout"));
        datasetInfoTextLayout->setContentsMargins(0, 0, 0, 0);
        numberOfClassesText = new QLineEdit(verticalLayoutWidget_10);
        numberOfClassesText->setObjectName(QStringLiteral("numberOfClassesText"));
        numberOfClassesText->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        datasetInfoTextLayout->addWidget(numberOfClassesText);

        datasetPathText = new QLineEdit(verticalLayoutWidget_10);
        datasetPathText->setObjectName(QStringLiteral("datasetPathText"));

        datasetInfoTextLayout->addWidget(datasetPathText);

        verticalLayoutWidget_11 = new QWidget(DatasetTool);
        verticalLayoutWidget_11->setObjectName(QStringLiteral("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(830, 229, 41, 41));
        datasetInfoBrowseLayout = new QVBoxLayout(verticalLayoutWidget_11);
        datasetInfoBrowseLayout->setSpacing(6);
        datasetInfoBrowseLayout->setContentsMargins(11, 11, 11, 11);
        datasetInfoBrowseLayout->setObjectName(QStringLiteral("datasetInfoBrowseLayout"));
        datasetInfoBrowseLayout->setContentsMargins(5, 0, 0, 0);
        datasetPathBrowse = new QToolButton(verticalLayoutWidget_11);
        datasetPathBrowse->setObjectName(QStringLiteral("datasetPathBrowse"));

        datasetInfoBrowseLayout->addWidget(datasetPathBrowse);

        verticalLayoutWidget_12 = new QWidget(DatasetTool);
        verticalLayoutWidget_12->setObjectName(QStringLiteral("verticalLayoutWidget_12"));
        verticalLayoutWidget_12->setGeometry(QRect(410, 290, 411, 41));
        augmentationLayout = new QVBoxLayout(verticalLayoutWidget_12);
        augmentationLayout->setSpacing(6);
        augmentationLayout->setContentsMargins(11, 11, 11, 11);
        augmentationLayout->setObjectName(QStringLiteral("augmentationLayout"));
        augmentationLayout->setContentsMargins(0, 0, 230, 0);
        augmentationCBox = new QCheckBox(verticalLayoutWidget_12);
        augmentationCBox->setObjectName(QStringLiteral("augmentationCBox"));
        augmentationCBox->setLayoutDirection(Qt::RightToLeft);

        augmentationLayout->addWidget(augmentationCBox);

        verticalLayoutWidget_16 = new QWidget(DatasetTool);
        verticalLayoutWidget_16->setObjectName(QStringLiteral("verticalLayoutWidget_16"));
        verticalLayoutWidget_16->setGeometry(QRect(430, 350, 171, 41));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_16);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 10, 0);
        brightnessCBox = new QCheckBox(verticalLayoutWidget_16);
        brightnessCBox->setObjectName(QStringLiteral("brightnessCBox"));
        brightnessCBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(brightnessCBox);

        verticalLayoutWidget_17 = new QWidget(DatasetTool);
        verticalLayoutWidget_17->setObjectName(QStringLiteral("verticalLayoutWidget_17"));
        verticalLayoutWidget_17->setGeometry(QRect(430, 390, 171, 41));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_17);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 10, 0);
        colorNoiseCBox = new QCheckBox(verticalLayoutWidget_17);
        colorNoiseCBox->setObjectName(QStringLiteral("colorNoiseCBox"));
        colorNoiseCBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_3->addWidget(colorNoiseCBox);

        verticalLayoutWidget_18 = new QWidget(DatasetTool);
        verticalLayoutWidget_18->setObjectName(QStringLiteral("verticalLayoutWidget_18"));
        verticalLayoutWidget_18->setGeometry(QRect(430, 430, 171, 41));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_18);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 10, 0);
        colorShiftCBox = new QCheckBox(verticalLayoutWidget_18);
        colorShiftCBox->setObjectName(QStringLiteral("colorShiftCBox"));
        colorShiftCBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(colorShiftCBox);

        verticalLayoutWidget_19 = new QWidget(DatasetTool);
        verticalLayoutWidget_19->setObjectName(QStringLiteral("verticalLayoutWidget_19"));
        verticalLayoutWidget_19->setGeometry(QRect(430, 470, 171, 41));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_19);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 10, 0);
        horizontalFlipCBox = new QCheckBox(verticalLayoutWidget_19);
        horizontalFlipCBox->setObjectName(QStringLiteral("horizontalFlipCBox"));
        horizontalFlipCBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_5->addWidget(horizontalFlipCBox);

        verticalLayoutWidget_20 = new QWidget(DatasetTool);
        verticalLayoutWidget_20->setObjectName(QStringLiteral("verticalLayoutWidget_20"));
        verticalLayoutWidget_20->setGeometry(QRect(430, 510, 171, 41));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_20);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 10, 0);
        gaussianCBox = new QCheckBox(verticalLayoutWidget_20);
        gaussianCBox->setObjectName(QStringLiteral("gaussianCBox"));
        gaussianCBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_6->addWidget(gaussianCBox);

        verticalLayoutWidget_21 = new QWidget(DatasetTool);
        verticalLayoutWidget_21->setObjectName(QStringLiteral("verticalLayoutWidget_21"));
        verticalLayoutWidget_21->setGeometry(QRect(430, 550, 171, 41));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_21);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 10, 0);
        rotationCBox = new QCheckBox(verticalLayoutWidget_21);
        rotationCBox->setObjectName(QStringLiteral("rotationCBox"));
        rotationCBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_7->addWidget(rotationCBox);

        verticalLayoutWidget_22 = new QWidget(DatasetTool);
        verticalLayoutWidget_22->setObjectName(QStringLiteral("verticalLayoutWidget_22"));
        verticalLayoutWidget_22->setGeometry(QRect(430, 590, 171, 41));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_22);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 10, 0);
        transformationCBox = new QCheckBox(verticalLayoutWidget_22);
        transformationCBox->setObjectName(QStringLiteral("transformationCBox"));
        transformationCBox->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_8->addWidget(transformationCBox);

        verticalLayoutWidget_13 = new QWidget(DatasetTool);
        verticalLayoutWidget_13->setObjectName(QStringLiteral("verticalLayoutWidget_13"));
        verticalLayoutWidget_13->setGeometry(QRect(600, 350, 81, 41));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_13);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(8, 0, 8, 0);
        brightnessLowerText = new QLineEdit(verticalLayoutWidget_13);
        brightnessLowerText->setObjectName(QStringLiteral("brightnessLowerText"));

        verticalLayout_9->addWidget(brightnessLowerText);

        verticalLayoutWidget_23 = new QWidget(DatasetTool);
        verticalLayoutWidget_23->setObjectName(QStringLiteral("verticalLayoutWidget_23"));
        verticalLayoutWidget_23->setGeometry(QRect(600, 390, 81, 41));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_23);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(8, 0, 8, 0);
        colorNoiseLowerText = new QLineEdit(verticalLayoutWidget_23);
        colorNoiseLowerText->setObjectName(QStringLiteral("colorNoiseLowerText"));

        verticalLayout_10->addWidget(colorNoiseLowerText);

        verticalLayoutWidget_24 = new QWidget(DatasetTool);
        verticalLayoutWidget_24->setObjectName(QStringLiteral("verticalLayoutWidget_24"));
        verticalLayoutWidget_24->setGeometry(QRect(600, 430, 81, 41));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_24);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(8, 0, 8, 0);
        colorShiftLowerText = new QLineEdit(verticalLayoutWidget_24);
        colorShiftLowerText->setObjectName(QStringLiteral("colorShiftLowerText"));

        verticalLayout_11->addWidget(colorShiftLowerText);

        verticalLayoutWidget_25 = new QWidget(DatasetTool);
        verticalLayoutWidget_25->setObjectName(QStringLiteral("verticalLayoutWidget_25"));
        verticalLayoutWidget_25->setGeometry(QRect(600, 470, 81, 41));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_25);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_26 = new QWidget(DatasetTool);
        verticalLayoutWidget_26->setObjectName(QStringLiteral("verticalLayoutWidget_26"));
        verticalLayoutWidget_26->setGeometry(QRect(600, 510, 81, 41));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_26);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(8, 0, 8, 0);
        gaussianLowerText = new QLineEdit(verticalLayoutWidget_26);
        gaussianLowerText->setObjectName(QStringLiteral("gaussianLowerText"));

        verticalLayout_13->addWidget(gaussianLowerText);

        verticalLayoutWidget_27 = new QWidget(DatasetTool);
        verticalLayoutWidget_27->setObjectName(QStringLiteral("verticalLayoutWidget_27"));
        verticalLayoutWidget_27->setGeometry(QRect(600, 550, 81, 41));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_27);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(8, 0, 8, 0);
        rotationLowerText = new QLineEdit(verticalLayoutWidget_27);
        rotationLowerText->setObjectName(QStringLiteral("rotationLowerText"));

        verticalLayout_14->addWidget(rotationLowerText);

        verticalLayoutWidget_28 = new QWidget(DatasetTool);
        verticalLayoutWidget_28->setObjectName(QStringLiteral("verticalLayoutWidget_28"));
        verticalLayoutWidget_28->setGeometry(QRect(600, 590, 81, 41));
        verticalLayout_15 = new QVBoxLayout(verticalLayoutWidget_28);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_55 = new QWidget(DatasetTool);
        verticalLayoutWidget_55->setObjectName(QStringLiteral("verticalLayoutWidget_55"));
        verticalLayoutWidget_55->setGeometry(QRect(680, 350, 81, 41));
        verticalLayout_30 = new QVBoxLayout(verticalLayoutWidget_55);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(8, 0, 8, 0);
        brightnessUpperText = new QLineEdit(verticalLayoutWidget_55);
        brightnessUpperText->setObjectName(QStringLiteral("brightnessUpperText"));

        verticalLayout_30->addWidget(brightnessUpperText);

        verticalLayoutWidget_56 = new QWidget(DatasetTool);
        verticalLayoutWidget_56->setObjectName(QStringLiteral("verticalLayoutWidget_56"));
        verticalLayoutWidget_56->setGeometry(QRect(680, 390, 81, 41));
        verticalLayout_31 = new QVBoxLayout(verticalLayoutWidget_56);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(8, 0, 8, 0);
        verticalLayoutWidget_57 = new QWidget(DatasetTool);
        verticalLayoutWidget_57->setObjectName(QStringLiteral("verticalLayoutWidget_57"));
        verticalLayoutWidget_57->setGeometry(QRect(680, 430, 81, 41));
        verticalLayout_32 = new QVBoxLayout(verticalLayoutWidget_57);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(8, 0, 8, 0);
        verticalLayoutWidget_58 = new QWidget(DatasetTool);
        verticalLayoutWidget_58->setObjectName(QStringLiteral("verticalLayoutWidget_58"));
        verticalLayoutWidget_58->setGeometry(QRect(680, 470, 81, 41));
        verticalLayout_33 = new QVBoxLayout(verticalLayoutWidget_58);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_59 = new QWidget(DatasetTool);
        verticalLayoutWidget_59->setObjectName(QStringLiteral("verticalLayoutWidget_59"));
        verticalLayoutWidget_59->setGeometry(QRect(680, 510, 81, 41));
        verticalLayout_34 = new QVBoxLayout(verticalLayoutWidget_59);
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setContentsMargins(11, 11, 11, 11);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        verticalLayout_34->setContentsMargins(8, 0, 8, 0);
        gaussianUpperText = new QLineEdit(verticalLayoutWidget_59);
        gaussianUpperText->setObjectName(QStringLiteral("gaussianUpperText"));

        verticalLayout_34->addWidget(gaussianUpperText);

        verticalLayoutWidget_60 = new QWidget(DatasetTool);
        verticalLayoutWidget_60->setObjectName(QStringLiteral("verticalLayoutWidget_60"));
        verticalLayoutWidget_60->setGeometry(QRect(680, 550, 81, 41));
        verticalLayout_35 = new QVBoxLayout(verticalLayoutWidget_60);
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setContentsMargins(11, 11, 11, 11);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        verticalLayout_35->setContentsMargins(8, 0, 8, 0);
        rotationUpperText = new QLineEdit(verticalLayoutWidget_60);
        rotationUpperText->setObjectName(QStringLiteral("rotationUpperText"));

        verticalLayout_35->addWidget(rotationUpperText);

        verticalLayoutWidget_61 = new QWidget(DatasetTool);
        verticalLayoutWidget_61->setObjectName(QStringLiteral("verticalLayoutWidget_61"));
        verticalLayoutWidget_61->setGeometry(QRect(680, 590, 81, 41));
        verticalLayout_36 = new QVBoxLayout(verticalLayoutWidget_61);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_15 = new QWidget(DatasetTool);
        verticalLayoutWidget_15->setObjectName(QStringLiteral("verticalLayoutWidget_15"));
        verticalLayoutWidget_15->setGeometry(QRect(1290, 90, 311, 31));
        prepareDatasetLayout = new QVBoxLayout(verticalLayoutWidget_15);
        prepareDatasetLayout->setSpacing(6);
        prepareDatasetLayout->setContentsMargins(11, 11, 11, 11);
        prepareDatasetLayout->setObjectName(QStringLiteral("prepareDatasetLayout"));
        prepareDatasetLayout->setContentsMargins(5, 0, 15, 0);
        prepareDatasetButton = new QPushButton(verticalLayoutWidget_15);
        prepareDatasetButton->setObjectName(QStringLiteral("prepareDatasetButton"));

        prepareDatasetLayout->addWidget(prepareDatasetButton);

        verticalLayoutWidget_62 = new QWidget(DatasetTool);
        verticalLayoutWidget_62->setObjectName(QStringLiteral("verticalLayoutWidget_62"));
        verticalLayoutWidget_62->setGeometry(QRect(1290, 120, 311, 41));
        verticalLayout_37 = new QVBoxLayout(verticalLayoutWidget_62);
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setContentsMargins(11, 11, 11, 11);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        verticalLayout_37->setContentsMargins(5, 0, 15, 0);
        progressBar = new QProgressBar(verticalLayoutWidget_62);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_37->addWidget(progressBar);

        verticalLayoutWidget_98 = new QWidget(DatasetTool);
        verticalLayoutWidget_98->setObjectName(QStringLiteral("verticalLayoutWidget_98"));
        verticalLayoutWidget_98->setGeometry(QRect(760, 350, 81, 41));
        verticalLayout_60 = new QVBoxLayout(verticalLayoutWidget_98);
        verticalLayout_60->setSpacing(6);
        verticalLayout_60->setContentsMargins(11, 11, 11, 11);
        verticalLayout_60->setObjectName(QStringLiteral("verticalLayout_60"));
        verticalLayout_60->setContentsMargins(8, 0, 8, 0);
        label = new QLabel(verticalLayoutWidget_98);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(186, 189, 182);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_60->addWidget(label);

        verticalLayoutWidget_99 = new QWidget(DatasetTool);
        verticalLayoutWidget_99->setObjectName(QStringLiteral("verticalLayoutWidget_99"));
        verticalLayoutWidget_99->setGeometry(QRect(760, 390, 81, 41));
        verticalLayout_61 = new QVBoxLayout(verticalLayoutWidget_99);
        verticalLayout_61->setSpacing(6);
        verticalLayout_61->setContentsMargins(11, 11, 11, 11);
        verticalLayout_61->setObjectName(QStringLiteral("verticalLayout_61"));
        verticalLayout_61->setContentsMargins(8, 0, 8, 0);
        label_2 = new QLabel(verticalLayoutWidget_99);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(186, 189, 182);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_61->addWidget(label_2);

        verticalLayoutWidget_100 = new QWidget(DatasetTool);
        verticalLayoutWidget_100->setObjectName(QStringLiteral("verticalLayoutWidget_100"));
        verticalLayoutWidget_100->setGeometry(QRect(760, 430, 81, 41));
        verticalLayout_62 = new QVBoxLayout(verticalLayoutWidget_100);
        verticalLayout_62->setSpacing(6);
        verticalLayout_62->setContentsMargins(11, 11, 11, 11);
        verticalLayout_62->setObjectName(QStringLiteral("verticalLayout_62"));
        verticalLayout_62->setContentsMargins(8, 0, 8, 0);
        label_3 = new QLabel(verticalLayoutWidget_100);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(186, 189, 182);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_62->addWidget(label_3);

        verticalLayoutWidget_101 = new QWidget(DatasetTool);
        verticalLayoutWidget_101->setObjectName(QStringLiteral("verticalLayoutWidget_101"));
        verticalLayoutWidget_101->setGeometry(QRect(760, 470, 81, 41));
        verticalLayout_63 = new QVBoxLayout(verticalLayoutWidget_101);
        verticalLayout_63->setSpacing(6);
        verticalLayout_63->setContentsMargins(11, 11, 11, 11);
        verticalLayout_63->setObjectName(QStringLiteral("verticalLayout_63"));
        verticalLayout_63->setContentsMargins(8, 0, 8, 0);
        verticalLayoutWidget_102 = new QWidget(DatasetTool);
        verticalLayoutWidget_102->setObjectName(QStringLiteral("verticalLayoutWidget_102"));
        verticalLayoutWidget_102->setGeometry(QRect(760, 510, 81, 41));
        verticalLayout_64 = new QVBoxLayout(verticalLayoutWidget_102);
        verticalLayout_64->setSpacing(6);
        verticalLayout_64->setContentsMargins(11, 11, 11, 11);
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        verticalLayout_64->setContentsMargins(8, 0, 8, 0);
        label_4 = new QLabel(verticalLayoutWidget_102);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(186, 189, 182);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_64->addWidget(label_4);

        verticalLayoutWidget_103 = new QWidget(DatasetTool);
        verticalLayoutWidget_103->setObjectName(QStringLiteral("verticalLayoutWidget_103"));
        verticalLayoutWidget_103->setGeometry(QRect(760, 550, 81, 41));
        verticalLayout_65 = new QVBoxLayout(verticalLayoutWidget_103);
        verticalLayout_65->setSpacing(6);
        verticalLayout_65->setContentsMargins(11, 11, 11, 11);
        verticalLayout_65->setObjectName(QStringLiteral("verticalLayout_65"));
        verticalLayout_65->setContentsMargins(8, 0, 8, 0);
        label_5 = new QLabel(verticalLayoutWidget_103);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(186, 189, 182);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_65->addWidget(label_5);

        verticalLayoutWidget_104 = new QWidget(DatasetTool);
        verticalLayoutWidget_104->setObjectName(QStringLiteral("verticalLayoutWidget_104"));
        verticalLayoutWidget_104->setGeometry(QRect(760, 590, 81, 41));
        verticalLayout_66 = new QVBoxLayout(verticalLayoutWidget_104);
        verticalLayout_66->setSpacing(6);
        verticalLayout_66->setContentsMargins(11, 11, 11, 11);
        verticalLayout_66->setObjectName(QStringLiteral("verticalLayout_66"));
        verticalLayout_66->setContentsMargins(8, 0, 8, 0);
        toolTipDatasetToolLabel = new QLabel(DatasetTool);
        toolTipDatasetToolLabel->setObjectName(QStringLiteral("toolTipDatasetToolLabel"));
        toolTipDatasetToolLabel->setGeometry(QRect(1485, 50, 17, 17));
        tabWidget->addTab(DatasetTool, QString());
        AnalysisTool = new QWidget();
        AnalysisTool->setObjectName(QStringLiteral("AnalysisTool"));
        testText = new QPlainTextEdit(AnalysisTool);
        testText->setObjectName(QStringLiteral("testText"));
        testText->setGeometry(QRect(1310, 460, 221, 70));
        darketGuiLabel_7 = new QLabel(AnalysisTool);
        darketGuiLabel_7->setObjectName(QStringLiteral("darketGuiLabel_7"));
        darketGuiLabel_7->setGeometry(QRect(1366, 17, 141, 21));
        darketGuiLabel_7->setFont(font);
        darketGuiLabel_7->setMouseTracking(true);
        darketGuiLabel_7->setTextFormat(Qt::AutoText);
        analysisToolLabel = new QLabel(AnalysisTool);
        analysisToolLabel->setObjectName(QStringLiteral("analysisToolLabel"));
        analysisToolLabel->setGeometry(QRect(1370, 50, 131, 17));
        analysisToolLabel->setAlignment(Qt::AlignCenter);
        line_16 = new QFrame(AnalysisTool);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(1270, 10, 20, 901));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(AnalysisTool);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(1296, 70, 291, 20));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget_7 = new QWidget(AnalysisTool);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(0, 0, 1271, 881));
        accuracyGraphLayout = new QGridLayout(gridLayoutWidget_7);
        accuracyGraphLayout->setSpacing(6);
        accuracyGraphLayout->setContentsMargins(11, 11, 11, 11);
        accuracyGraphLayout->setObjectName(QStringLiteral("accuracyGraphLayout"));
        accuracyGraphLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_105 = new QWidget(AnalysisTool);
        verticalLayoutWidget_105->setObjectName(QStringLiteral("verticalLayoutWidget_105"));
        verticalLayoutWidget_105->setGeometry(QRect(1290, 90, 311, 31));
        startAnalysisLayout = new QVBoxLayout(verticalLayoutWidget_105);
        startAnalysisLayout->setSpacing(6);
        startAnalysisLayout->setContentsMargins(11, 11, 11, 11);
        startAnalysisLayout->setObjectName(QStringLiteral("startAnalysisLayout"));
        startAnalysisLayout->setContentsMargins(5, 0, 15, 0);
        startAnalysisButton = new QPushButton(verticalLayoutWidget_105);
        startAnalysisButton->setObjectName(QStringLiteral("startAnalysisButton"));

        startAnalysisLayout->addWidget(startAnalysisButton);

        line_18 = new QFrame(AnalysisTool);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setGeometry(QRect(1296, 120, 291, 20));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_106 = new QWidget(AnalysisTool);
        verticalLayoutWidget_106->setObjectName(QStringLiteral("verticalLayoutWidget_106"));
        verticalLayoutWidget_106->setGeometry(QRect(1290, 140, 311, 31));
        labelsDropdownLayout = new QVBoxLayout(verticalLayoutWidget_106);
        labelsDropdownLayout->setSpacing(6);
        labelsDropdownLayout->setContentsMargins(11, 11, 11, 11);
        labelsDropdownLayout->setObjectName(QStringLiteral("labelsDropdownLayout"));
        labelsDropdownLayout->setContentsMargins(5, 0, 15, 0);
        labelsDropdownList = new QComboBox(verticalLayoutWidget_106);
        labelsDropdownList->setObjectName(QStringLiteral("labelsDropdownList"));
        labelsDropdownList->setStyleSheet(QStringLiteral("selection-color: rgb(136, 138, 133);"));
        labelsDropdownList->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        labelsDropdownLayout->addWidget(labelsDropdownList);

        toolTipAnalysisToolLabel = new QLabel(AnalysisTool);
        toolTipAnalysisToolLabel->setObjectName(QStringLiteral("toolTipAnalysisToolLabel"));
        toolTipAnalysisToolLabel->setGeometry(QRect(1485, 50, 17, 17));
        tabWidget->addTab(AnalysisTool, QString());
        TestTool = new QWidget();
        TestTool->setObjectName(QStringLiteral("TestTool"));
        darketGuiLabel_9 = new QLabel(TestTool);
        darketGuiLabel_9->setObjectName(QStringLiteral("darketGuiLabel_9"));
        darketGuiLabel_9->setGeometry(QRect(1366, 17, 141, 21));
        darketGuiLabel_9->setFont(font);
        darketGuiLabel_9->setMouseTracking(true);
        darketGuiLabel_9->setTextFormat(Qt::AutoText);
        testToolLabel_2 = new QLabel(TestTool);
        testToolLabel_2->setObjectName(QStringLiteral("testToolLabel_2"));
        testToolLabel_2->setGeometry(QRect(1370, 50, 131, 17));
        testToolLabel_2->setAlignment(Qt::AlignCenter);
        line_21 = new QFrame(TestTool);
        line_21->setObjectName(QStringLiteral("line_21"));
        line_21->setGeometry(QRect(1270, 10, 20, 901));
        line_21->setFrameShape(QFrame::VLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(TestTool);
        line_22->setObjectName(QStringLiteral("line_22"));
        line_22->setGeometry(QRect(1296, 70, 291, 20));
        line_22->setFrameShape(QFrame::HLine);
        line_22->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_14 = new QWidget(TestTool);
        verticalLayoutWidget_14->setObjectName(QStringLiteral("verticalLayoutWidget_14"));
        verticalLayoutWidget_14->setGeometry(QRect(2685, 489, 161, 41));
        configTextVLayout_2 = new QVBoxLayout(verticalLayoutWidget_14);
        configTextVLayout_2->setSpacing(6);
        configTextVLayout_2->setContentsMargins(11, 11, 11, 11);
        configTextVLayout_2->setObjectName(QStringLiteral("configTextVLayout_2"));
        configTextVLayout_2->setContentsMargins(10, 5, 10, 5);
        weightText_2 = new QLineEdit(verticalLayoutWidget_14);
        weightText_2->setObjectName(QStringLiteral("weightText_2"));

        configTextVLayout_2->addWidget(weightText_2);

        verticalLayoutWidget_29 = new QWidget(TestTool);
        verticalLayoutWidget_29->setObjectName(QStringLiteral("verticalLayoutWidget_29"));
        verticalLayoutWidget_29->setGeometry(QRect(2845, 489, 41, 41));
        configBrowseVLayout_2 = new QVBoxLayout(verticalLayoutWidget_29);
        configBrowseVLayout_2->setSpacing(6);
        configBrowseVLayout_2->setContentsMargins(11, 11, 11, 11);
        configBrowseVLayout_2->setObjectName(QStringLiteral("configBrowseVLayout_2"));
        configBrowseVLayout_2->setContentsMargins(0, 0, 0, 0);
        weightBrowse_2 = new QToolButton(verticalLayoutWidget_29);
        weightBrowse_2->setObjectName(QStringLiteral("weightBrowse_2"));

        configBrowseVLayout_2->addWidget(weightBrowse_2);

        verticalLayoutWidget_30 = new QWidget(TestTool);
        verticalLayoutWidget_30->setObjectName(QStringLiteral("verticalLayoutWidget_30"));
        verticalLayoutWidget_30->setGeometry(QRect(1300, 120, 101, 81));
        testToolLabelLayout = new QVBoxLayout(verticalLayoutWidget_30);
        testToolLabelLayout->setSpacing(6);
        testToolLabelLayout->setContentsMargins(11, 11, 11, 11);
        testToolLabelLayout->setObjectName(QStringLiteral("testToolLabelLayout"));
        testToolLabelLayout->setContentsMargins(0, 0, 0, 0);
        testToolWeightLabel = new QLabel(verticalLayoutWidget_30);
        testToolWeightLabel->setObjectName(QStringLiteral("testToolWeightLabel"));

        testToolLabelLayout->addWidget(testToolWeightLabel);

        testToolTestListLabel = new QLabel(verticalLayoutWidget_30);
        testToolTestListLabel->setObjectName(QStringLiteral("testToolTestListLabel"));

        testToolLabelLayout->addWidget(testToolTestListLabel);

        verticalLayoutWidget_31 = new QWidget(TestTool);
        verticalLayoutWidget_31->setObjectName(QStringLiteral("verticalLayoutWidget_31"));
        verticalLayoutWidget_31->setGeometry(QRect(1400, 120, 161, 81));
        testToolTextLayout = new QVBoxLayout(verticalLayoutWidget_31);
        testToolTextLayout->setSpacing(6);
        testToolTextLayout->setContentsMargins(11, 11, 11, 11);
        testToolTextLayout->setObjectName(QStringLiteral("testToolTextLayout"));
        testToolTextLayout->setContentsMargins(10, 5, 10, 5);
        testToolWeightText = new QLineEdit(verticalLayoutWidget_31);
        testToolWeightText->setObjectName(QStringLiteral("testToolWeightText"));

        testToolTextLayout->addWidget(testToolWeightText);

        testToolTestListText = new QLineEdit(verticalLayoutWidget_31);
        testToolTestListText->setObjectName(QStringLiteral("testToolTestListText"));

        testToolTextLayout->addWidget(testToolTestListText);

        verticalLayoutWidget_32 = new QWidget(TestTool);
        verticalLayoutWidget_32->setObjectName(QStringLiteral("verticalLayoutWidget_32"));
        verticalLayoutWidget_32->setGeometry(QRect(1560, 120, 41, 41));
        testToolBrowseLayout = new QVBoxLayout(verticalLayoutWidget_32);
        testToolBrowseLayout->setSpacing(6);
        testToolBrowseLayout->setContentsMargins(11, 11, 11, 11);
        testToolBrowseLayout->setObjectName(QStringLiteral("testToolBrowseLayout"));
        testToolBrowseLayout->setContentsMargins(0, 5, 0, 0);
        testToolWeightBrowse = new QToolButton(verticalLayoutWidget_32);
        testToolWeightBrowse->setObjectName(QStringLiteral("testToolWeightBrowse"));

        testToolBrowseLayout->addWidget(testToolWeightBrowse);

        line_23 = new QFrame(TestTool);
        line_23->setObjectName(QStringLiteral("line_23"));
        line_23->setGeometry(QRect(1296, 200, 291, 20));
        line_23->setFrameShape(QFrame::HLine);
        line_23->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_108 = new QWidget(TestTool);
        verticalLayoutWidget_108->setObjectName(QStringLiteral("verticalLayoutWidget_108"));
        verticalLayoutWidget_108->setGeometry(QRect(1290, 220, 311, 31));
        testToolTestButtonLayout = new QVBoxLayout(verticalLayoutWidget_108);
        testToolTestButtonLayout->setSpacing(6);
        testToolTestButtonLayout->setContentsMargins(11, 11, 11, 11);
        testToolTestButtonLayout->setObjectName(QStringLiteral("testToolTestButtonLayout"));
        testToolTestButtonLayout->setContentsMargins(5, 0, 15, 0);
        testToolTestButton = new QPushButton(verticalLayoutWidget_108);
        testToolTestButton->setObjectName(QStringLiteral("testToolTestButton"));

        testToolTestButtonLayout->addWidget(testToolTestButton);

        verticalLayoutWidget_109 = new QWidget(TestTool);
        verticalLayoutWidget_109->setObjectName(QStringLiteral("verticalLayoutWidget_109"));
        verticalLayoutWidget_109->setGeometry(QRect(1290, 90, 311, 31));
        singleMultipleWeightLayout = new QVBoxLayout(verticalLayoutWidget_109);
        singleMultipleWeightLayout->setSpacing(6);
        singleMultipleWeightLayout->setContentsMargins(11, 11, 11, 11);
        singleMultipleWeightLayout->setObjectName(QStringLiteral("singleMultipleWeightLayout"));
        singleMultipleWeightLayout->setContentsMargins(5, 0, 15, 0);
        singleMultipleLayoutDropdown = new QComboBox(verticalLayoutWidget_109);
        singleMultipleLayoutDropdown->setObjectName(QStringLiteral("singleMultipleLayoutDropdown"));
        singleMultipleLayoutDropdown->setStyleSheet(QStringLiteral("selection-color: rgb(136, 138, 133);"));
        singleMultipleLayoutDropdown->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        singleMultipleWeightLayout->addWidget(singleMultipleLayoutDropdown);

        verticalLayoutWidget_81 = new QWidget(TestTool);
        verticalLayoutWidget_81->setObjectName(QStringLiteral("verticalLayoutWidget_81"));
        verticalLayoutWidget_81->setGeometry(QRect(1560, 160, 41, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_81);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 3);
        testToolTestListBrowse = new QToolButton(verticalLayoutWidget_81);
        testToolTestListBrowse->setObjectName(QStringLiteral("testToolTestListBrowse"));

        verticalLayout->addWidget(testToolTestListBrowse);

        tabWidget->addTab(TestTool, QString());
        PredictionTool = new QWidget();
        PredictionTool->setObjectName(QStringLiteral("PredictionTool"));
        darketGuiLabel_8 = new QLabel(PredictionTool);
        darketGuiLabel_8->setObjectName(QStringLiteral("darketGuiLabel_8"));
        darketGuiLabel_8->setGeometry(QRect(1366, 17, 141, 21));
        darketGuiLabel_8->setFont(font);
        darketGuiLabel_8->setMouseTracking(true);
        darketGuiLabel_8->setTextFormat(Qt::AutoText);
        predictionToolLabel = new QLabel(PredictionTool);
        predictionToolLabel->setObjectName(QStringLiteral("predictionToolLabel"));
        predictionToolLabel->setGeometry(QRect(1370, 50, 131, 17));
        predictionToolLabel->setAlignment(Qt::AlignCenter);
        line_19 = new QFrame(PredictionTool);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setGeometry(QRect(1270, 10, 20, 901));
        line_19->setFrameShape(QFrame::VLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(PredictionTool);
        line_20->setObjectName(QStringLiteral("line_20"));
        line_20->setGeometry(QRect(1296, 70, 291, 20));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget_8 = new QWidget(PredictionTool);
        gridLayoutWidget_8->setObjectName(QStringLiteral("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(0, 0, 1271, 881));
        predictedImageLayout = new QGridLayout(gridLayoutWidget_8);
        predictedImageLayout->setSpacing(6);
        predictedImageLayout->setContentsMargins(11, 11, 11, 11);
        predictedImageLayout->setObjectName(QStringLiteral("predictedImageLayout"));
        predictedImageLayout->setContentsMargins(0, 0, 0, 0);
        predictedImageLabel = new QLabel(gridLayoutWidget_8);
        predictedImageLabel->setObjectName(QStringLiteral("predictedImageLabel"));

        predictedImageLayout->addWidget(predictedImageLabel, 0, 0, 1, 1);

        verticalLayoutWidget_107 = new QWidget(PredictionTool);
        verticalLayoutWidget_107->setObjectName(QStringLiteral("verticalLayoutWidget_107"));
        verticalLayoutWidget_107->setGeometry(QRect(1290, 90, 311, 31));
        predictImageButtonLayout = new QVBoxLayout(verticalLayoutWidget_107);
        predictImageButtonLayout->setSpacing(6);
        predictImageButtonLayout->setContentsMargins(11, 11, 11, 11);
        predictImageButtonLayout->setObjectName(QStringLiteral("predictImageButtonLayout"));
        predictImageButtonLayout->setContentsMargins(5, 0, 15, 0);
        predictImageButton = new QPushButton(verticalLayoutWidget_107);
        predictImageButton->setObjectName(QStringLiteral("predictImageButton"));

        predictImageButtonLayout->addWidget(predictImageButton);

        tabWidget->addTab(PredictionTool, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 1600, 22));
        menuBar->setNativeMenuBar(false);
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(tabWidget, batchText);
        QWidget::setTabOrder(batchText, subdText);
        QWidget::setTabOrder(subdText, lrText);
        QWidget::setTabOrder(lrText, momentumText);
        QWidget::setTabOrder(momentumText, decayText);
        QWidget::setTabOrder(decayText, onlineTestCBox);
        QWidget::setTabOrder(onlineTestCBox, weightText);
        QWidget::setTabOrder(weightText, weightBrowse);
        QWidget::setTabOrder(weightBrowse, trainButton);
        QWidget::setTabOrder(trainButton, stopTrainButton);
        QWidget::setTabOrder(stopTrainButton, numberOfClassesText);
        QWidget::setTabOrder(numberOfClassesText, datasetPathText);
        QWidget::setTabOrder(datasetPathText, datasetPathBrowse);
        QWidget::setTabOrder(datasetPathBrowse, augmentationCBox);
        QWidget::setTabOrder(augmentationCBox, brightnessCBox);
        QWidget::setTabOrder(brightnessCBox, colorNoiseCBox);
        QWidget::setTabOrder(colorNoiseCBox, colorShiftCBox);
        QWidget::setTabOrder(colorShiftCBox, horizontalFlipCBox);
        QWidget::setTabOrder(horizontalFlipCBox, gaussianCBox);
        QWidget::setTabOrder(gaussianCBox, rotationCBox);
        QWidget::setTabOrder(rotationCBox, transformationCBox);
        QWidget::setTabOrder(transformationCBox, brightnessLowerText);
        QWidget::setTabOrder(brightnessLowerText, brightnessUpperText);
        QWidget::setTabOrder(brightnessUpperText, colorNoiseLowerText);
        QWidget::setTabOrder(colorNoiseLowerText, colorShiftLowerText);
        QWidget::setTabOrder(colorShiftLowerText, gaussianLowerText);
        QWidget::setTabOrder(gaussianLowerText, gaussianUpperText);
        QWidget::setTabOrder(gaussianUpperText, rotationLowerText);
        QWidget::setTabOrder(rotationLowerText, rotationUpperText);
        QWidget::setTabOrder(rotationUpperText, prepareDatasetButton);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        onlineTestCBox->setText(QApplication::translate("MainWindow", "Online Test        ", nullptr));
        trainButton->setText(QApplication::translate("MainWindow", "Train Network", nullptr));
        stopTrainButton->setText(QApplication::translate("MainWindow", "Stop Training", nullptr));
        darketGuiLabel->setText(QApplication::translate("MainWindow", "Darknet GUI", nullptr));
        batchLabel->setText(QApplication::translate("MainWindow", "Batch Size :", nullptr));
        subdLabel->setText(QApplication::translate("MainWindow", "Subdivisions :", nullptr));
        lrLabel->setText(QApplication::translate("MainWindow", "Learning Rate :", nullptr));
        momentumLabel->setText(QApplication::translate("MainWindow", "Momentum :", nullptr));
        decayLabel->setText(QApplication::translate("MainWindow", "Decay :", nullptr));
        projectNameLabel->setText(QString());
        trainingToolLabel->setText(QApplication::translate("MainWindow", "Training Tool", nullptr));
        currentProjectLabel->setText(QApplication::translate("MainWindow", "Current Project :", nullptr));
        weightLabel->setText(QApplication::translate("MainWindow", "Weight File :", nullptr));
        weightBrowse->setText(QApplication::translate("MainWindow", "...", nullptr));
        epochLabel->setText(QApplication::translate("MainWindow", "Epoch :", nullptr));
        epochValue->setText(QString());
        trainingLossLabel->setText(QApplication::translate("MainWindow", "Average Training Loss : ", nullptr));
        trainingLossValue->setText(QString());
        toolTipTrainingToolLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(TrainingTool), QApplication::translate("MainWindow", "Training Tool", nullptr));
        darketGuiLabel_2->setText(QApplication::translate("MainWindow", "Darknet GUI", nullptr));
        datasetToolLabel->setText(QApplication::translate("MainWindow", "Dataset Tool", nullptr));
        numberOfClassesLabel->setText(QApplication::translate("MainWindow", "Number of Classes :", nullptr));
        datasetPathLabel->setText(QApplication::translate("MainWindow", "Dataset Directory :", nullptr));
        datasetPathBrowse->setText(QApplication::translate("MainWindow", "...", nullptr));
        augmentationCBox->setText(QApplication::translate("MainWindow", "Apply Augmentation   ", nullptr));
        brightnessCBox->setText(QApplication::translate("MainWindow", "Brightness Shift", nullptr));
        colorNoiseCBox->setText(QApplication::translate("MainWindow", "Color Noise", nullptr));
        colorShiftCBox->setText(QApplication::translate("MainWindow", "Color Shift", nullptr));
        horizontalFlipCBox->setText(QApplication::translate("MainWindow", "Horizontal Flip", nullptr));
        gaussianCBox->setText(QApplication::translate("MainWindow", "Gaussian Blur", nullptr));
        rotationCBox->setText(QApplication::translate("MainWindow", "Rotation", nullptr));
        transformationCBox->setText(QApplication::translate("MainWindow", "Transformation", nullptr));
        prepareDatasetButton->setText(QApplication::translate("MainWindow", "Prepare Dataset", nullptr));
        label->setText(QApplication::translate("MainWindow", "(-5,5)", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "(1)", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "(3)", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "(1,10)", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "(-15,15)", nullptr));
        toolTipDatasetToolLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(DatasetTool), QApplication::translate("MainWindow", "Dataset Tool", nullptr));
        darketGuiLabel_7->setText(QApplication::translate("MainWindow", "Darknet GUI", nullptr));
        analysisToolLabel->setText(QApplication::translate("MainWindow", "Analysis Tool", nullptr));
        startAnalysisButton->setText(QApplication::translate("MainWindow", "Start Analysis", nullptr));
        toolTipAnalysisToolLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(AnalysisTool), QApplication::translate("MainWindow", "Analysis Tool", nullptr));
        darketGuiLabel_9->setText(QApplication::translate("MainWindow", "Darknet GUI", nullptr));
        testToolLabel_2->setText(QApplication::translate("MainWindow", "Test Tool", nullptr));
        weightBrowse_2->setText(QApplication::translate("MainWindow", "...", nullptr));
        testToolWeightLabel->setText(QApplication::translate("MainWindow", "Weight File :", nullptr));
        testToolTestListLabel->setText(QApplication::translate("MainWindow", "Test List :", nullptr));
        testToolWeightBrowse->setText(QApplication::translate("MainWindow", "...", nullptr));
        testToolTestButton->setText(QApplication::translate("MainWindow", "Test Weight", nullptr));
        testToolTestListBrowse->setText(QApplication::translate("MainWindow", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TestTool), QApplication::translate("MainWindow", "Test Tool", nullptr));
        darketGuiLabel_8->setText(QApplication::translate("MainWindow", "Darknet GUI", nullptr));
        predictionToolLabel->setText(QApplication::translate("MainWindow", "Prediction Tool", nullptr));
        predictedImageLabel->setText(QString());
        predictImageButton->setText(QApplication::translate("MainWindow", "Predict Image", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(PredictionTool), QApplication::translate("MainWindow", "Prediction Tool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
