/* USA 005B23B8 (EU 005B2390): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (97 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B708;
extern uint32_t data_0070B70C;
extern uint32_t data_0070B710;
extern uint32_t data_0070B714;
extern uint32_t data_0074F1E4;
void func_00100000(void);
void func_0011BD00(void);
void func_005902C0(uint32_t, uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_0074F1E4[97] = {
    "none",
    "keysmall",
    "keyboss",
    "compass",
    "heartcontioner",
    "rupee_red",
    "rupee_green",
    "rupee_blue",
    "heartparts",
    "item_icerod",
    "item_sandrod",
    "item_tornaderod",
    "item_bomb",
    "item_firerod",
    "item_hookshot",
    "item_boomerang",
    "item_hammer",
    "item_bow",
    "item_shield",
    "item_bottle",
    "item_potshop_red",
    "item_potshop_blue",
    "item_stonebeauty",
    "item_pendant_power",
    "item_pendant_wisdom",
    "item_pendant_courage",
    "kandelaar",
    "item_sword_lv1",
    "item_sword_lv2",
    "item_sword_lv3",
    "item_sword_lv4",
    "item_mizukaki",
    "item_rental_icerod",
    "item_rental_sandrod",
    "item_rental_tornaderod",
    "item_rental_bomb",
    "item_rental_firerod",
    "item_rental_hookshot",
    "item_rental_boomerang",
    "item_rental_hammer",
    "item_rental_bow",
    "item_shield",
    "ring_rental",
    "ring_hekiga",
    "item_bell",
    "rupee_gold",
    "rupee_silver",
    "power_glove",
    "item_insectNet",
    "powerful_glove",
    "kinsta",
    "badge_bee",
    "golden_bee",
    "hint_glasses",
    "escape_fruit",
    "stop_fruit",
    "bee",
    "fairy",
    "liver_blue",
    "liver_purple",
    "liver_yellow",
    "package_sword",
    "zelda_amulet",
    "clothes_blue",
    "clothes_red",
    "hyrule_shield",
    "ore_yellow",
    "ore_green",
    "ore_blue",
    "ganbari_power_up",
    "pouch",
    "dash_boots",
    "ore_red",
    "message_bottle",
    "milk_matured",
    "item_potshop_purple",
    "item_potshop_yellow",
    "item_icerod_lv2",
    "item_sandrod_lv2",
    "item_tornaderod_lv2",
    "item_bomb_lv2",
    "item_firerod_lv2",
    "item_hookshot_lv2",
    "item_boomerang_lv2",
    "item_hammer_lv2",
    "item_bow_lv2",
    "special_move",
    "milk",
    "kandelaar_lv2",
    "item_insectNet_lv2",
    "ganbaritubo",
    "rupee_purple",
    "item_bow_light",
    "triforce_courage",
    "heart",
    "item_rental_sandrod_first",
    "golden_bee",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B23B8(void) {
    fill_names((sead_SafeString *)&data_0074F1E4, names_0074F1E4, 97);
    data_0070B708 = 0xFFFFFFFFu;
    data_0070B70C = 0xFFFFFFFFu;
    data_0070B710 = 0x00000000u;
    data_0070B714 = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_0011BD00, (uint32_t)(uintptr_t)&func_00100000, (uint32_t)(uintptr_t)"item_rental_sandrod_first");
}
