/* USA 005E1248 (EU 005E1220): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 83 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D5D8;
extern uint32_t data_0070D5DC;
extern uint32_t data_0070D5E0;
extern uint32_t data_0070D5E4;
extern uint32_t data_0070D620;
extern uint32_t data_0070D624;
extern uint32_t data_0070D628;
extern uint32_t data_0070D62C;
extern uint32_t data_0070D630;
extern uint32_t data_0070D634;
extern uint32_t data_0070D638;
extern uint32_t data_0070D63C;
extern uint32_t data_0070D640;
extern uint32_t data_0070D644;
extern uint32_t data_0070D648;
extern uint32_t data_0070D64C;
extern uint32_t data_0070D650;
extern uint32_t data_0070D654;
extern uint32_t data_0070D658;
extern uint32_t data_0070D65C;
extern uint32_t data_0070D660;
extern uint32_t data_0070D664;
extern uint32_t data_0070D668;
extern uint32_t data_0070D66C;
extern uint32_t data_0070D670;
extern uint32_t data_0070D674;
extern uint32_t data_0070D678;
extern uint32_t data_0070D67C;
extern uint32_t data_0070D680;
extern uint32_t data_0070D684;
extern uint32_t data_0070D688;
extern uint32_t data_0070D68C;
extern uint32_t data_0070D690;
extern uint32_t data_0070D694;
extern uint32_t data_0070D698;
extern uint32_t data_0070D69C;
extern uint32_t data_0070D6A0;
extern uint32_t data_0070D6A4;
extern uint32_t data_0070D6A8;
extern uint32_t data_0070D6AC;
extern uint32_t data_0070D6B0;
extern uint32_t data_0070D6B4;
extern uint32_t data_0070D6B8;
extern uint32_t data_0070D6BC;
extern uint32_t data_0070D6C0;
extern uint32_t data_0070D6C4;
extern uint32_t data_0070D6C8;
extern uint32_t data_0070D6CC;
extern uint32_t data_0070D6D0;
extern uint32_t data_0070D6D4;
extern uint32_t data_0070D6D8;
extern uint32_t data_0070D6DC;
extern uint32_t data_0070D6E0;
extern uint32_t data_0070D6E4;
extern uint32_t data_0070D6E8;
extern uint32_t data_0070D6EC;
extern uint32_t data_0070D6F0;
extern uint32_t data_0070D6F4;
extern uint32_t data_0070D6F8;
extern uint32_t data_0070D6FC;
extern uint32_t data_0070D700;
extern uint32_t data_0070D704;
extern uint32_t data_0070D708;
extern uint32_t data_0070D70C;
extern uint32_t data_0070D710;
extern uint32_t data_0070D714;
extern uint32_t data_0070D718;
extern uint32_t data_0070D71C;
extern uint32_t data_0070D720;
extern uint32_t data_0070D724;
extern uint32_t data_0070D728;
extern uint32_t data_0070D72C;
extern uint32_t data_0070D730;
extern uint32_t data_0070D734;
extern uint32_t data_0070D738;
extern uint32_t data_0070D73C;
extern uint32_t data_0070D740;
extern uint32_t data_0070D744;
extern uint32_t data_0070D748;
extern uint32_t data_0070D74C;
extern uint32_t data_0070D750;
extern uint32_t data_0070D754;
extern uint32_t data_0070D758;
extern uint32_t data_0076F070;

static const char *const names_0076F070[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E1248(void) {
    fill_names((sead_SafeString *)&data_0076F070, names_0076F070, 4);
    data_0070D5D8 = 0xFFFFFFFFu;
    data_0070D5DC = 0xFFFFFFFFu;
    data_0070D5E0 = 0x00000000u;
    data_0070D5E4 = 0x00000000u;
    data_0070D620 = 0x00000188u;
    data_0070D624 = 0x00000189u;
    data_0070D628 = 0x00000193u;
    data_0070D62C = 0x00000194u;
    data_0070D630 = 0x00000196u;
    data_0070D634 = 0x00000198u;
    data_0070D638 = 0x00000199u;
    data_0070D63C = 0x0000019Au;
    data_0070D640 = 0x0000019Cu;
    data_0070D644 = 0x0000019Eu;
    data_0070D648 = 0x0000019Fu;
    data_0070D64C = 0x000001A0u;
    data_0070D650 = 0x000001A1u;
    data_0070D654 = 0x000001A2u;
    data_0070D658 = 0x000001A3u;
    data_0070D65C = 0x000001A4u;
    data_0070D660 = 0x000001A5u;
    data_0070D664 = 0x000001A7u;
    data_0070D668 = 0x000001A8u;
    data_0070D66C = 0x000001ABu;
    data_0070D670 = 0x000001AAu;
    data_0070D674 = 0x0000018Cu;
    data_0070D678 = 0x00000190u;
    data_0070D67C = 0x000001B3u;
    data_0070D680 = 0x000001B1u;
    data_0070D684 = 0x00000115u;
    data_0070D688 = 0x000001ACu;
    data_0070D68C = 0x000001ADu;
    data_0070D690 = 0x000001B6u;
    data_0070D694 = 0x000001B7u;
    data_0070D698 = 0x000001A9u;
    data_0070D69C = 0x000001BBu;
    data_0070D6A0 = 0x000001BAu;
    data_0070D6A4 = 0x000001AEu;
    data_0070D6A8 = 0x000001B4u;
    data_0070D6AC = 0x000001C1u;
    data_0070D6B0 = 0x000001A4u;
    data_0070D6B4 = 0x00000194u;
    data_0070D6B8 = 0x000001BCu;
    data_0070D6BC = 0x000001E7u;
    data_0070D6C0 = 0x000001C2u;
    data_0070D6C4 = 0x000001C8u;
    data_0070D6C8 = 0x000001CAu;
    data_0070D6CC = 0x000001C5u;
    data_0070D6D0 = 0x000001E0u;
    data_0070D6D4 = 0x000001E1u;
    data_0070D6D8 = 0x000001E2u;
    data_0070D6DC = 0x000001CDu;
    data_0070D6E0 = 0x000001ECu;
    data_0070D6E4 = 0x000001EDu;
    data_0070D6E8 = 0x000001EBu;
    data_0070D6EC = 0x000001C3u;
    data_0070D6F0 = 0x000001B5u;
    data_0070D6F4 = 0x000001C4u;
    data_0070D6F8 = 0x000001C6u;
    data_0070D6FC = 0x000001CEu;
    data_0070D700 = 0x0000011Eu;
    data_0070D704 = 0x000001D4u;
    data_0070D708 = 0x000001D5u;
    data_0070D70C = 0x000001D6u;
    data_0070D710 = 0x000001E3u;
    data_0070D714 = 0x0000011Fu;
    data_0070D718 = 0x000001D8u;
    data_0070D71C = 0x000001DAu;
    data_0070D720 = 0x000001AFu;
    data_0070D724 = 0x0000019Bu;
    data_0070D728 = 0x00000197u;
    data_0070D72C = 0x0000008Eu;
    data_0070D730 = 0x0000008Du;
    data_0070D734 = 0x0000008Cu;
    data_0070D738 = 0x000001DBu;
    data_0070D73C = 0x000001F2u;
    data_0070D740 = 0x00000195u;
    data_0070D744 = 0x000001B8u;
    data_0070D748 = 0x000001F1u;
    data_0070D74C = 0x000001CBu;
    data_0070D750 = 0x000001DCu;
    data_0070D754 = 0x000001DDu;
    data_0070D758 = 0x000001DEu;
}
