// Copyright (c) 2019 The allt developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSBACKUPWALLET_H
#define SETTINGSBACKUPWALLET_H

#include <QWidget>
#include "qt/allt/pwidget.h"

namespace Ui {
class SettingsBackupWallet;
}

class SettingsBackupWallet : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsBackupWallet(alltGUI* _window, QWidget *parent = nullptr);
    ~SettingsBackupWallet();

private slots:
    void backupWallet();
    void selectFileOutput();
    void changePassphrase();

private:
    Ui::SettingsBackupWallet *ui;
    QString filename;
};

#endif // SETTINGSBACKUPWALLET_H
