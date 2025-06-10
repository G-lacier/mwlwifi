/*
 * 802.11w Protected Management Frames stub support.
 */

#ifndef _PMF_H_
#define _PMF_H_

#include <net/mac80211.h>

#ifndef WLAN_CIPHER_SUITE_AES_CMAC
#define WLAN_CIPHER_SUITE_AES_CMAC 0x000FAC06
#endif

void mwl_pmf_enable(struct ieee80211_hw *hw, bool enable);
bool mwl_pmf_is_enabled(struct ieee80211_hw *hw);

#endif /* _PMF_H_ */
