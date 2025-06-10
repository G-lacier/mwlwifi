/*
 * Basic mesh enable/disable functions.
 */

#include "core.h"
#include "mesh.h"
#include "hif/fwcmd.h"

void mwl_mesh_enable(struct ieee80211_hw *hw)
{
    struct mwl_priv *priv = hw->priv;

    if (priv->mesh_enabled)
        return;

    mwl_fwcmd_set_mesh_mode(hw, true);
    priv->mesh_enabled = true;
    wiphy_info(hw->wiphy, "802.11s mesh enabled\n");
}
EXPORT_SYMBOL_GPL(mwl_mesh_enable);

void mwl_mesh_disable(struct ieee80211_hw *hw)
{
    struct mwl_priv *priv = hw->priv;

    if (!priv->mesh_enabled)
        return;

    mwl_fwcmd_set_mesh_mode(hw, false);
    priv->mesh_enabled = false;
    wiphy_info(hw->wiphy, "802.11s mesh disabled\n");
}
EXPORT_SYMBOL_GPL(mwl_mesh_disable);

bool mwl_mesh_is_enabled(struct ieee80211_hw *hw)
{
    struct mwl_priv *priv = hw->priv;
    return priv->mesh_enabled;
}
EXPORT_SYMBOL_GPL(mwl_mesh_is_enabled);

MODULE_LICENSE("GPL");
