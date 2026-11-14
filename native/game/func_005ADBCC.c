/* USA 005ADBCC (EU 005ADBA4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 37 other stores, 11 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FA10;
extern uint32_t data_0070FA14;
extern uint32_t data_0070FA18;
extern uint32_t data_0070FA1C;
extern uint32_t data_00791FA0;
extern uint32_t data_00791FA4;
extern uint32_t data_00791FA8;
extern uint32_t data_00791FAC;
extern uint32_t data_00791FC0;
extern uint32_t data_00792208;
extern uint32_t data_0079220C;
extern uint32_t data_00792210;
extern uint32_t data_00792214;
extern uint32_t data_00792228;
extern uint32_t data_00792470;
extern uint32_t data_00792474;
extern uint32_t data_00792478;
extern uint32_t data_0079247C;
extern uint32_t data_00792490;
extern uint32_t data_007926D8;
extern uint32_t data_007926DC;
extern uint32_t data_007926E0;
extern uint32_t data_007926E4;
extern uint32_t data_007926F8;
extern uint32_t data_00792940;
extern uint32_t data_00792944;
extern uint32_t data_00792948;
extern uint32_t data_0079294C;
extern uint32_t data_00792960;
extern uint32_t data_00792BA8;
extern uint32_t data_00792BAC;
extern uint32_t data_00792BB0;
extern uint32_t data_00792BB4;
extern uint32_t data_00792BC8;
extern uint32_t data_00792E10;
extern uint32_t data_00792E14;
extern uint32_t data_00792E18;
extern uint32_t data_00792E1C;
extern uint32_t data_00792E30;
extern uint32_t data_00793078;
extern uint32_t data_0079307C;
extern uint32_t data_00793080;
extern uint32_t data_00793084;
extern uint32_t data_00793098;
extern uint32_t data_007932E0;
extern uint32_t data_007932E4;
extern uint32_t data_007932E8;
extern uint32_t data_007932EC;
extern uint32_t data_00793300;
extern uint32_t data_00793548;
extern uint32_t data_0079354C;
extern uint32_t data_00793550;
extern uint32_t data_00793554;
extern uint32_t data_00793568;
extern uint32_t data_007937B0;
extern uint32_t data_007937B4;
extern uint32_t data_007937B8;
extern uint32_t data_007937BC;
extern uint32_t data_007937D0;
extern uint32_t data_00793A18;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603798(void);
void func_00605434(void);

static const char *const names_00793A18[9] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "PotShop",
    "Bee",
    "twinkle",
    "DisplayBee",
    "DisplayFairy",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ADBCC(void) {
    uintptr_t stk[50];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00791FA0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjRentalItem";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"^ACe";
    fill_names((sead_SafeString *)&data_00793A18, names_00793A18, 9);
    data_0070FA10 = 0xFFFFFFFFu;
    data_0070FA14 = 0xFFFFFFFFu;
    data_0070FA18 = 0x00000000u;
    data_0070FA1C = 0x00000000u;
    data_00791FA0 = 0x00000000u;
    data_00791FA4 = 0x00000005u;
    data_00791FA8 = (uintptr_t)&data_00791FAC;
    func_0019B51C((uintptr_t)&data_00791FC0, (uintptr_t)&func_00603798, 0x00000049u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00792208;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjGtEvBottleEmpty";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"r";
    data_00792208 = 0x00000000u;
    data_0079220C = 0x00000005u;
    data_00792210 = (uintptr_t)&data_00792214;
    func_0019B51C((uintptr_t)&data_00792228, (uintptr_t)&func_00603798, 0x00000055u, (uintptr_t)((char *)stk + 32));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00792470;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"ObjPotShop";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"NXK";
    data_00792470 = 0x00000000u;
    data_00792474 = 0x00000005u;
    data_00792478 = (uintptr_t)&data_0079247C;
    func_0019B51C((uintptr_t)&data_00792490, (uintptr_t)&func_00603798, 0x00000056u, (uintptr_t)((char *)stk + 48));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007926D8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"ObjHeartShop";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"XèÌn[g";
    data_007926D8 = 0x00000000u;
    data_007926DC = 0x00000005u;
    data_007926E0 = (uintptr_t)&data_007926E4;
    func_0019B51C((uintptr_t)&data_007926F8, (uintptr_t)&func_00603798, 0x00000057u, (uintptr_t)((char *)stk + 64));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00792940;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 88);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"ObjStoneBeauty";
    *(uintptr_t *)((char *)stk + 88) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 92) = (uintptr_t)"XxXxÎ";
    data_00792940 = 0x00000000u;
    data_00792944 = 0x00000005u;
    data_00792948 = (uintptr_t)&data_0079294C;
    func_0019B51C((uintptr_t)&data_00792960, (uintptr_t)&func_00603798, 0x00000058u, (uintptr_t)((char *)stk + 80));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00792BA8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 104);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 96) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 100) = (uintptr_t)"ObjGtEvShield";
    *(uintptr_t *)((char *)stk + 104) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 108) = (uintptr_t)"XèÌ";
    data_00792BA8 = 0x00000000u;
    data_00792BAC = 0x00000005u;
    data_00792BB0 = (uintptr_t)&data_00792BB4;
    func_0019B51C((uintptr_t)&data_00792BC8, (uintptr_t)&func_00603798, 0x00000059u, (uintptr_t)((char *)stk + 96));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00792E10;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 120);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 112) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 116) = (uintptr_t)"ObjFruitEscape";
    *(uintptr_t *)((char *)stk + 120) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 124) = (uintptr_t)"hÌÊÀ";
    data_00792E10 = 0x00000000u;
    data_00792E14 = 0x00000005u;
    data_00792E18 = (uintptr_t)&data_00792E1C;
    func_0019B51C((uintptr_t)&data_00792E30, (uintptr_t)&func_00603798, 0x0000005Au, (uintptr_t)((char *)stk + 112));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00793078;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 136);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 128) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 132) = (uintptr_t)"ObjFruitStop";
    *(uintptr_t *)((char *)stk + 136) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 140) = (uintptr_t)"_AÌÊÀ";
    data_00793078 = 0x00000000u;
    data_0079307C = 0x00000005u;
    data_00793080 = (uintptr_t)&data_00793084;
    func_0019B51C((uintptr_t)&data_00793098, (uintptr_t)&func_00603798, 0x0000005Bu, (uintptr_t)((char *)stk + 128));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007932E0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 152);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 144) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 148) = (uintptr_t)"ObjGtEvHintGlasses";
    *(uintptr_t *)((char *)stk + 152) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 156) = (uintptr_t)"qgKl";
    data_007932E0 = 0x00000000u;
    data_007932E4 = 0x00000005u;
    data_007932E8 = (uintptr_t)&data_007932EC;
    func_0019B51C((uintptr_t)&data_00793300, (uintptr_t)&func_00603798, 0x0000005Cu, (uintptr_t)((char *)stk + 144));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00793548;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 168);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 160) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 164) = (uintptr_t)"ObjDisplayBee";
    *(uintptr_t *)((char *)stk + 168) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 172) = (uintptr_t)"XèÌn`";
    data_00793548 = 0x00000000u;
    data_0079354C = 0x00000005u;
    data_00793550 = (uintptr_t)&data_00793554;
    func_0019B51C((uintptr_t)&data_00793568, (uintptr_t)&func_00605434, 0x0000005Du, (uintptr_t)((char *)stk + 160));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007937B0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 184);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 176) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 180) = (uintptr_t)"ObjDisplayFairy";
    *(uintptr_t *)((char *)stk + 184) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 188) = (uintptr_t)"XèÌd¸";
    data_007937B0 = 0x00000000u;
    data_007937B4 = 0x00000005u;
    data_007937B8 = (uintptr_t)&data_007937BC;
    func_0019B51C((uintptr_t)&data_007937D0, (uintptr_t)&func_00605434, 0x0000005Eu, (uintptr_t)((char *)stk + 176));
}
