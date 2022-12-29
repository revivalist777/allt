// Copyright (c) 2019 The allt developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLalltWIDGET_H
#define COINCONTROLalltWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlalltWidget;
}

class CoinControlalltWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlalltWidget(QWidget *parent = nullptr);
    ~CoinControlalltWidget();

private:
    Ui::CoinControlalltWidget *ui;
};

#endif // COINCONTROLalltWIDGET_H
