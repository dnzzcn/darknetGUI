/********************************************************************************
** Form generated from reading UI file 'newproject.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECT_H
#define UI_NEWPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProject
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *navigationLayout;
    QPushButton *createProjectButton;
    QPushButton *cancelButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *propertyLabelsLayout;
    QLabel *projectNameLabel;
    QLabel *cfgFileLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *propertyTextLayout;
    QLineEdit *projectNameText;
    QLineEdit *cfgFileText;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *propertyBrowseLayout;
    QToolButton *cfgFileBrowse;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *databaseLabelsLayout;
    QLabel *labelsFileLabel;
    QLabel *trainDataLabel;
    QLabel *testDataLabel;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *databaseTextLayout;
    QLineEdit *labelsFileText;
    QLineEdit *trainDataText;
    QLineEdit *testDataText;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_3;
    QToolButton *labelsFileBrowse;
    QToolButton *trainDataBrowse;
    QToolButton *testDataBrowse;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *existingDatabaseLayout;
    QCheckBox *existingDatabaseCBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *NewProject)
    {
        if (NewProject->objectName().isEmpty())
            NewProject->setObjectName(QStringLiteral("NewProject"));
        NewProject->resize(680, 318);
        horizontalLayoutWidget = new QWidget(NewProject);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(390, 250, 291, 51));
        navigationLayout = new QHBoxLayout(horizontalLayoutWidget);
        navigationLayout->setSpacing(10);
        navigationLayout->setObjectName(QStringLiteral("navigationLayout"));
        navigationLayout->setContentsMargins(30, 0, 30, 0);
        createProjectButton = new QPushButton(horizontalLayoutWidget);
        createProjectButton->setObjectName(QStringLiteral("createProjectButton"));

        navigationLayout->addWidget(createProjectButton);

        cancelButton = new QPushButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        navigationLayout->addWidget(cancelButton);

        verticalLayoutWidget = new QWidget(NewProject);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 40, 161, 61));
        propertyLabelsLayout = new QVBoxLayout(verticalLayoutWidget);
        propertyLabelsLayout->setObjectName(QStringLiteral("propertyLabelsLayout"));
        propertyLabelsLayout->setContentsMargins(40, 0, 0, 0);
        projectNameLabel = new QLabel(verticalLayoutWidget);
        projectNameLabel->setObjectName(QStringLiteral("projectNameLabel"));

        propertyLabelsLayout->addWidget(projectNameLabel);

        cfgFileLabel = new QLabel(verticalLayoutWidget);
        cfgFileLabel->setObjectName(QStringLiteral("cfgFileLabel"));

        propertyLabelsLayout->addWidget(cfgFileLabel);

        verticalLayoutWidget_2 = new QWidget(NewProject);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(160, 40, 441, 61));
        propertyTextLayout = new QVBoxLayout(verticalLayoutWidget_2);
        propertyTextLayout->setSpacing(10);
        propertyTextLayout->setObjectName(QStringLiteral("propertyTextLayout"));
        propertyTextLayout->setContentsMargins(0, 0, 0, 0);
        projectNameText = new QLineEdit(verticalLayoutWidget_2);
        projectNameText->setObjectName(QStringLiteral("projectNameText"));

        propertyTextLayout->addWidget(projectNameText);

        cfgFileText = new QLineEdit(verticalLayoutWidget_2);
        cfgFileText->setObjectName(QStringLiteral("cfgFileText"));

        propertyTextLayout->addWidget(cfgFileText);

        verticalLayoutWidget_3 = new QWidget(NewProject);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(600, 40, 81, 61));
        propertyBrowseLayout = new QVBoxLayout(verticalLayoutWidget_3);
        propertyBrowseLayout->setSpacing(13);
        propertyBrowseLayout->setObjectName(QStringLiteral("propertyBrowseLayout"));
        propertyBrowseLayout->setContentsMargins(10, 35, 0, 0);
        cfgFileBrowse = new QToolButton(verticalLayoutWidget_3);
        cfgFileBrowse->setObjectName(QStringLiteral("cfgFileBrowse"));

        propertyBrowseLayout->addWidget(cfgFileBrowse);

        verticalLayoutWidget_4 = new QWidget(NewProject);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 150, 161, 91));
        databaseLabelsLayout = new QVBoxLayout(verticalLayoutWidget_4);
        databaseLabelsLayout->setObjectName(QStringLiteral("databaseLabelsLayout"));
        databaseLabelsLayout->setContentsMargins(40, 0, 0, 0);
        labelsFileLabel = new QLabel(verticalLayoutWidget_4);
        labelsFileLabel->setObjectName(QStringLiteral("labelsFileLabel"));

        databaseLabelsLayout->addWidget(labelsFileLabel);

        trainDataLabel = new QLabel(verticalLayoutWidget_4);
        trainDataLabel->setObjectName(QStringLiteral("trainDataLabel"));

        databaseLabelsLayout->addWidget(trainDataLabel);

        testDataLabel = new QLabel(verticalLayoutWidget_4);
        testDataLabel->setObjectName(QStringLiteral("testDataLabel"));

        databaseLabelsLayout->addWidget(testDataLabel);

        verticalLayoutWidget_5 = new QWidget(NewProject);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(160, 150, 441, 91));
        databaseTextLayout = new QVBoxLayout(verticalLayoutWidget_5);
        databaseTextLayout->setObjectName(QStringLiteral("databaseTextLayout"));
        databaseTextLayout->setContentsMargins(0, 0, 0, 0);
        labelsFileText = new QLineEdit(verticalLayoutWidget_5);
        labelsFileText->setObjectName(QStringLiteral("labelsFileText"));

        databaseTextLayout->addWidget(labelsFileText);

        trainDataText = new QLineEdit(verticalLayoutWidget_5);
        trainDataText->setObjectName(QStringLiteral("trainDataText"));

        databaseTextLayout->addWidget(trainDataText);

        testDataText = new QLineEdit(verticalLayoutWidget_5);
        testDataText->setObjectName(QStringLiteral("testDataText"));

        databaseTextLayout->addWidget(testDataText);

        verticalLayoutWidget_6 = new QWidget(NewProject);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(600, 150, 81, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 0, 0, 0);
        labelsFileBrowse = new QToolButton(verticalLayoutWidget_6);
        labelsFileBrowse->setObjectName(QStringLiteral("labelsFileBrowse"));

        verticalLayout_3->addWidget(labelsFileBrowse);

        trainDataBrowse = new QToolButton(verticalLayoutWidget_6);
        trainDataBrowse->setObjectName(QStringLiteral("trainDataBrowse"));

        verticalLayout_3->addWidget(trainDataBrowse);

        testDataBrowse = new QToolButton(verticalLayoutWidget_6);
        testDataBrowse->setObjectName(QStringLiteral("testDataBrowse"));

        verticalLayout_3->addWidget(testDataBrowse);

        horizontalLayoutWidget_2 = new QWidget(NewProject);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 100, 734, 51));
        existingDatabaseLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        existingDatabaseLayout->setObjectName(QStringLiteral("existingDatabaseLayout"));
        existingDatabaseLayout->setContentsMargins(0, 0, 0, 0);
        existingDatabaseCBox = new QCheckBox(horizontalLayoutWidget_2);
        existingDatabaseCBox->setObjectName(QStringLiteral("existingDatabaseCBox"));
        existingDatabaseCBox->setLayoutDirection(Qt::RightToLeft);

        existingDatabaseLayout->addWidget(existingDatabaseCBox);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        existingDatabaseLayout->addItem(horizontalSpacer);


        retranslateUi(NewProject);

        QMetaObject::connectSlotsByName(NewProject);
    } // setupUi

    void retranslateUi(QDialog *NewProject)
    {
        NewProject->setWindowTitle(QApplication::translate("NewProject", "Dialog", nullptr));
        createProjectButton->setText(QApplication::translate("NewProject", "Create", nullptr));
        cancelButton->setText(QApplication::translate("NewProject", "Cancel", nullptr));
        projectNameLabel->setText(QApplication::translate("NewProject", "Project Name :", nullptr));
        cfgFileLabel->setText(QApplication::translate("NewProject", "Cfg File :", nullptr));
        cfgFileBrowse->setText(QApplication::translate("NewProject", "...", nullptr));
        labelsFileLabel->setText(QApplication::translate("NewProject", "Labels File :", nullptr));
        trainDataLabel->setText(QApplication::translate("NewProject", "Train Data List :", nullptr));
        testDataLabel->setText(QApplication::translate("NewProject", "Test Data List :", nullptr));
        labelsFileBrowse->setText(QApplication::translate("NewProject", "...", nullptr));
        trainDataBrowse->setText(QApplication::translate("NewProject", "...", nullptr));
        testDataBrowse->setText(QApplication::translate("NewProject", "...", nullptr));
        existingDatabaseCBox->setText(QApplication::translate("NewProject", "Use Existing Database :      ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProject: public Ui_NewProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECT_H
