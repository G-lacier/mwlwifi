#ifndef _MESH_H_
#define _MESH_H_

#include <net/mac80211.h>

void mwl_mesh_enable(struct ieee80211_hw *hw);
void mwl_mesh_disable(struct ieee80211_hw *hw);
bool mwl_mesh_is_enabled(struct ieee80211_hw *hw);

#endif /* _MESH_H_ */
