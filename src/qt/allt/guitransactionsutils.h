// Copyright (c) 2019 The allt developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FURSZY_allt_GUITRANSACTIONSUTILS_H
#define FURSZY_allt_GUITRANSACTIONSUTILS_H

#include "walletmodel.h"
#include "qt/allt/pwidget.h"


namespace GuiTransactionsUtils {

    // Process WalletModel::SendCoinsReturn and generate a pair consisting
    // of a message and message flags for use in emit message().
    // Additional parameter msgArg can be used via .arg(msgArg).
    void ProcessSendCoinsReturn(PWidget* parent, const WalletModel::SendCoinsReturn& sendCoinsReturn, WalletModel* walletModel, const QString& msgArg = QString(), bool fPrepare = false);

}


#endif //FURSZY_allt_GUITRANSACTIONSUTILS_H
