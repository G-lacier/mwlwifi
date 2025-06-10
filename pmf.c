/*
 * Stub functions for 802.11w Protected Management Frames.
 */

#include "core.h"
#include "hif/fwcmd.h"
#include "pmf.h"

void mwl_pmf_enable(struct ieee80211_hw *hw, bool enable)
{
    struct mwl_priv *priv = hw->priv;

    if (mwl_fwcmd_set_pmf(hw, enable))
        wiphy_err(hw->wiphy, "failed to set PMF state\n");
    else
        priv->pmf_enabled = enable;
    wiphy_info(hw->wiphy, "802.11w PMF %sabled\n", enable ? "en" : "dis");
}
EXPORT_SYMBOL_GPL(mwl_pmf_enable);

bool mwl_pmf_is_enabled(struct ieee80211_hw *hw)
{
    struct mwl_priv *priv = hw->priv;

    return priv->pmf_enabled;
}
EXPORT_SYMBOL_GPL(mwl_pmf_is_enabled);

MODULE_LICENSE("GPL");
