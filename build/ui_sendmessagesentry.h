/********************************************************************************
** Form generated from reading UI file 'sendmessagesentry.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGESENTRY_H
#define UI_SENDMESSAGESENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "qvalidatedlineedit.h"
#include "qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendMessagesEntry
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *sendToLayout;
    QValidatedLineEdit *sendTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *messageLabel;
    QLabel *label_2;
    QValidatedTextEdit *messageText;
    QValidatedLineEdit *addAsLabel;
    QLabel *label_4;
    QLabel *publicKeyLabel;
    QValidatedLineEdit *publicKey;

    void setupUi(QFrame *SendMessagesEntry)
    {
        if (SendMessagesEntry->objectName().isEmpty())
            SendMessagesEntry->setObjectName(QStringLiteral("SendMessagesEntry"));
        SendMessagesEntry->resize(729, 236);
        SendMessagesEntry->setFrameShape(QFrame::StyledPanel);
        SendMessagesEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(SendMessagesEntry);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sendToLayout = new QHBoxLayout();
        sendToLayout->setSpacing(0);
        sendToLayout->setObjectName(QStringLiteral("sendToLayout"));
        sendTo = new QValidatedLineEdit(SendMessagesEntry);
        sendTo->setObjectName(QStringLiteral("sendTo"));
        sendTo->setMaxLength(34);

        sendToLayout->addWidget(sendTo);

        addressBookButton = new QToolButton(SendMessagesEntry);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        sendToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendMessagesEntry);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        sendToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendMessagesEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        sendToLayout->addWidget(deleteButton);


        gridLayout->addLayout(sendToLayout, 3, 2, 1, 1);

        messageLabel = new QLabel(SendMessagesEntry);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(messageLabel, 6, 0, 1, 1);

        label_2 = new QLabel(SendMessagesEntry);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        messageText = new QValidatedTextEdit(SendMessagesEntry);
        messageText->setObjectName(QStringLiteral("messageText"));
        messageText->setMouseTracking(true);
        messageText->setFocusPolicy(Qt::WheelFocus);
        messageText->setTabChangesFocus(false);

        gridLayout->addWidget(messageText, 6, 2, 1, 1);

        addAsLabel = new QValidatedLineEdit(SendMessagesEntry);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));
        addAsLabel->setEnabled(true);

        gridLayout->addWidget(addAsLabel, 4, 2, 1, 1);

        label_4 = new QLabel(SendMessagesEntry);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        publicKeyLabel = new QLabel(SendMessagesEntry);
        publicKeyLabel->setObjectName(QStringLiteral("publicKeyLabel"));

        gridLayout->addWidget(publicKeyLabel, 5, 0, 1, 1);

        publicKey = new QValidatedLineEdit(SendMessagesEntry);
        publicKey->setObjectName(QStringLiteral("publicKey"));

        gridLayout->addWidget(publicKey, 5, 2, 1, 1);

#ifndef QT_NO_SHORTCUT
        messageLabel->setBuddy(messageText);
        label_2->setBuddy(sendTo);
        label_4->setBuddy(addAsLabel);
        publicKeyLabel->setBuddy(publicKey);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendMessagesEntry);

        QMetaObject::connectSlotsByName(SendMessagesEntry);
    } // setupUi

    void retranslateUi(QFrame *SendMessagesEntry)
    {
        SendMessagesEntry->setWindowTitle(QApplication::translate("SendMessagesEntry", "Form", 0));
#ifndef QT_NO_TOOLTIP
        sendTo->setToolTip(QApplication::translate("SendMessagesEntry", "The address to send the payment to  (e.g. 4Zo1ga6xuKuQ7JV7M9rGDoxdbYwV5zgQJ5)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendMessagesEntry", "Choose address from address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendMessagesEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendMessagesEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendMessagesEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendMessagesEntry", "Remove this recipient", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        messageLabel->setText(QApplication::translate("SendMessagesEntry", "&Message:", 0));
        label_2->setText(QApplication::translate("SendMessagesEntry", "Send &To:", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendMessagesEntry", "Enter a label for this address to add it to your address book", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SendMessagesEntry", "&Label:", 0));
        publicKeyLabel->setText(QApplication::translate("SendMessagesEntry", "&Public Key:", 0));
    } // retranslateUi

};

namespace Ui {
    class SendMessagesEntry: public Ui_SendMessagesEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGESENTRY_H
