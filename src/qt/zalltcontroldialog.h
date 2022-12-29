// Copyright (c) 2017-2019 The allt developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef zalltCONTROLDIALOG_H
#define zalltCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zallt/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class zalltControlDialog;
}

class CzalltControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CzalltControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CzalltControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CzalltControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class zalltControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit zalltControlDialog(QWidget *parent);
    ~zalltControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::zalltControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CzalltControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // zalltCONTROLDIALOG_H
