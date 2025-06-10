/*
 * Copyright (C) 2006-2018, Marvell International Ltd.
 *
 * This software file (the "File") is distributed by Marvell International
 * Ltd. under the terms of the GNU General Public License Version 2, June 1991
 * (the "License").  You may use, redistribute and/or modify this File in
 * accordance with the terms and conditions of the License, a copy of which
 * is available by writing to the Free Software Foundation, Inc.
 *
 * THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE
 * ARE EXPRESSLY DISCLAIMED.  The License provides additional details about
 * this warranty disclaimer.
 */

/* Description:  This file implements MU-MIMO functions. */

#include "sysadpt.h"
#include "core.h"
#include "mu_mimo.h"

void mwl_mu_mimo_enable(struct ieee80211_hw *hw)
{
    struct mwl_priv *priv = hw->priv;

    priv->mu_mimo_enabled = true;
    wiphy_info(hw->wiphy, "MU-MIMO enabled (stub)\n");
}
EXPORT_SYMBOL_GPL(mwl_mu_mimo_enable);

void mwl_mu_mimo_disable(struct ieee80211_hw *hw)
{
    struct mwl_priv *priv = hw->priv;

    priv->mu_mimo_enabled = false;
    wiphy_info(hw->wiphy, "MU-MIMO disabled (stub)\n");
}
EXPORT_SYMBOL_GPL(mwl_mu_mimo_disable);

bool mwl_mu_mimo_is_enabled(struct ieee80211_hw *hw)
{
    struct mwl_priv *priv = hw->priv;

    return priv->mu_mimo_enabled;
}
EXPORT_SYMBOL_GPL(mwl_mu_mimo_is_enabled);

MODULE_LICENSE("GPL");
