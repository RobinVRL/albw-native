/* USA 005A71C8 (EU 005A71A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (11 names), 25 other stores, 7 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F898;
extern uint32_t data_0070F89C;
extern uint32_t data_0070F8A0;
extern uint32_t data_0070F8A4;
extern uint32_t data_0078DB0C;
extern uint32_t data_0078DB10;
extern uint32_t data_0078DB14;
extern uint32_t data_0078DB18;
extern uint32_t data_0078DB2C;
extern uint32_t data_0078DD74;
extern uint32_t data_0078DD78;
extern uint32_t data_0078DD7C;
extern uint32_t data_0078DD80;
extern uint32_t data_0078DD94;
extern uint32_t data_0078DFDC;
extern uint32_t data_0078DFE0;
extern uint32_t data_0078DFE4;
extern uint32_t data_0078DFE8;
extern uint32_t data_0078DFFC;
extern uint32_t data_0078E244;
extern uint32_t data_0078E248;
extern uint32_t data_0078E24C;
extern uint32_t data_0078E250;
extern uint32_t data_0078E264;
extern uint32_t data_0078E4AC;
extern uint32_t data_0078E4B0;
extern uint32_t data_0078E4B4;
extern uint32_t data_0078E4B8;
extern uint32_t data_0078E4CC;
extern uint32_t data_0078E714;
extern uint32_t data_0078E718;
extern uint32_t data_0078E71C;
extern uint32_t data_0078E720;
extern uint32_t data_0078E734;
extern uint32_t data_0078E97C;
extern uint32_t data_0078E980;
extern uint32_t data_0078E984;
extern uint32_t data_0078E988;
extern uint32_t data_0078E99C;
extern uint32_t data_0078EBE4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602F7C(void);

static const char *const names_0078EBE4[11] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "Sand_picture",
    "Dark_picture",
    "Hagure_picture",
    "Dokuro_picture",
    "Kame_picture",
    "Ice_picture",
    "Water_picture",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A71C8(void) {
    uintptr_t stk[34];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078DB0C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjPictureMaple";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\253\216\322\202\314\212G\201F\203\201\203C\203v\203\213";
    fill_names((sead_SafeString *)&data_0078EBE4, names_0078EBE4, 11);
    data_0070F898 = 0xFFFFFFFFu;
    data_0070F89C = 0xFFFFFFFFu;
    data_0070F8A0 = 0x00000000u;
    data_0070F8A4 = 0x00000000u;
    data_0078DB0C = 0x00000000u;
    data_0078DB10 = 0x00000005u;
    data_0078DB14 = (uintptr_t)&data_0078DB18;
    func_0019B51C((uintptr_t)&data_0078DB2C, (uintptr_t)&func_00602F7C, 0x0000004Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078DB0C, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078DD74;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjPictureBlacksmithBoy";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\214\253\216\322\202\314\212G\201F\220e\225\373\202\314\221\247\216q";
    data_0078DD74 = 0x00000000u;
    data_0078DD78 = 0x00000005u;
    data_0078DD7C = (uintptr_t)&data_0078DD80;
    func_0019B51C((uintptr_t)&data_0078DD94, (uintptr_t)&func_00602F7C, 0x0000004Cu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0078DD74, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078DFDC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"ObjPictureSahasPupilWarp";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\214\253\216\322\202\314\212G\201F\203\211\203N\203`\203\203\201i\203\217\201[\203v\227p\201j";
    data_0078DFDC = 0x00000000u;
    data_0078DFE0 = 0x00000005u;
    data_0078DFE4 = (uintptr_t)&data_0078DFE8;
    func_0019B51C((uintptr_t)&data_0078DFFC, (uintptr_t)&func_00602F7C, 0x0000004Du, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_0078DFDC, (uintptr_t)((char *)stk + 56), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078E244;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"ObjPicturePriestGirl";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"\214\253\216\322\202\314\212G\201F\203V\203X\203^\201[";
    data_0078E244 = 0x00000000u;
    data_0078E248 = 0x00000005u;
    data_0078E24C = (uintptr_t)&data_0078E250;
    func_0019B51C((uintptr_t)&data_0078E264, (uintptr_t)&func_00602F7C, 0x0000004Eu, (uintptr_t)((char *)stk + 64), (uintptr_t)&data_0078E244, (uintptr_t)((char *)stk + 72), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078E4AC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 88);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"ObjPictureInpa";
    *(uintptr_t *)((char *)stk + 88) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 92) = (uintptr_t)"\214\253\216\322\202\314\212G\201F\203C\203\223\203p";
    data_0078E4AC = 0x00000000u;
    data_0078E4B0 = 0x00000005u;
    data_0078E4B4 = (uintptr_t)&data_0078E4B8;
    func_0019B51C((uintptr_t)&data_0078E4CC, (uintptr_t)&func_00602F7C, 0x0000004Fu, (uintptr_t)((char *)stk + 80), (uintptr_t)&data_0078E4AC, (uintptr_t)((char *)stk + 88), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078E714;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 104);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 96) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 100) = (uintptr_t)"ObjPictureMountaineer";
    *(uintptr_t *)((char *)stk + 104) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 108) = (uintptr_t)"\214\253\216\322\202\314\212G\201F\215z\220\316\211\256";
    data_0078E714 = 0x00000000u;
    data_0078E718 = 0x00000005u;
    data_0078E71C = (uintptr_t)&data_0078E720;
    func_0019B51C((uintptr_t)&data_0078E734, (uintptr_t)&func_00602F7C, 0x00000050u, (uintptr_t)((char *)stk + 96), (uintptr_t)&data_0078E714, (uintptr_t)((char *)stk + 104), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078E97C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 120);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 112) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 116) = (uintptr_t)"ObjPictureZoraQueen";
    *(uintptr_t *)((char *)stk + 120) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 124) = (uintptr_t)"\214\253\216\322\202\314\212G\201F\203]\201[\203\211\203N\203B\201[\203\223";
    data_0078E97C = 0x00000000u;
    data_0078E980 = 0x00000005u;
    data_0078E984 = (uintptr_t)&data_0078E988;
    func_0019B51C((uintptr_t)&data_0078E99C, (uintptr_t)&func_00602F7C, 0x00000051u, (uintptr_t)((char *)stk + 112), (uintptr_t)&data_0078E97C, (uintptr_t)((char *)stk + 120), 0x00000000u);
}
