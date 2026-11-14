/* USA 0059E8DC (EU 0059E8B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (15 names), 25 other stores, 8 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F698;
extern uint32_t data_0070F699;
extern uint32_t data_0070F69A;
extern uint32_t data_0070F69B;
extern uint32_t data_0070F69C;
extern uint32_t data_0070F6A0;
extern uint32_t data_0070F6A4;
extern uint32_t data_0070F6A8;
extern uint32_t data_0070F6AC;
extern uint32_t data_0070F6B0;
extern uint32_t data_0070F6B4;
extern uint32_t data_0070F6B8;
extern uint32_t data_0070F6BC;
extern uint32_t data_0070F6C0;
extern uint32_t data_00789ECC;
extern uint32_t data_00789ED0;
extern uint32_t data_00789ED4;
extern uint32_t data_00789ED8;
extern uint32_t data_00789EEC;
extern uint32_t data_0078A134;
extern uint32_t data_0078A138;
extern uint32_t data_0078A13C;
extern uint32_t data_0078A140;
extern uint32_t data_0078A154;
extern uint32_t data_0078A39C;
extern uint32_t data_0078A3A0;
extern uint32_t data_0078A3A4;
extern uint32_t data_0078A3A8;
extern uint32_t data_0078A3BC;
extern uint32_t data_0078A604;
extern uint32_t data_0078A608;
extern uint32_t data_0078A60C;
extern uint32_t data_0078A610;
extern uint32_t data_0078A624;
extern uint32_t data_0078A86C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602EEC(void);
void func_0060AE8C(void);

static const char *const names_0070F6C0[2] = {
    "kokko_start",
    "kokko_game",
};
static const char *const names_0078A86C[13] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait",
    "walk",
    "run",
    "damage",
    "run",
    "damage",
    "surprise",
    "fly",
    "fly",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059E8DC(void) {
    uintptr_t stk[22];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070F6C0, names_0070F6C0, 2);
    fill_names((sead_SafeString *)&data_0078A86C, names_0078A86C, 13);
    *(uint8_t *)&data_0070F698 = 0x80u;
    *(uint8_t *)&data_0070F699 = 0x0u;
    *(uint8_t *)&data_0070F69A = 0x64u;
    *(uint8_t *)&data_0070F69B = 0xFFu;
    data_0070F6B0 = 0xFFFFFFFFu;
    data_0070F6B4 = 0xFFFFFFFFu;
    data_0070F6B8 = 0x00000000u;
    data_0070F6BC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4B360B61u, 0x000000FFu);
    data_0070F69C = ret0;
    uintptr_t ret1 = func_00114608(0x4BB60B61u, 0x00000000u);
    data_0070F6A0 = ret1;
    uintptr_t ret2 = func_00114608(0x4EC00000u, 0x00000000u);
    data_0070F6A4 = ret2;
    data_0070F6A8 = ret0;
    uintptr_t ret3 = func_00114608(0x4CE38E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00789ECC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjKokko";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203R\203b\203R";
    data_0070F6AC = ret3;
    data_00789ECC = 0x00000000u;
    data_00789ED0 = 0x00000005u;
    data_00789ED4 = (uintptr_t)&data_00789ED8;
    func_0019B51C((uintptr_t)&data_00789EEC, (uintptr_t)&func_0060AE8C, 0x00000071u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00789ECC, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078A134;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjHonekko";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\215\234\203R\203b\203R";
    data_0078A134 = 0x00000000u;
    data_0078A138 = 0x00000005u;
    data_0078A13C = (uintptr_t)&data_0078A140;
    func_0019B51C((uintptr_t)&data_0078A154, (uintptr_t)&func_00602EEC, 0x00000072u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0078A134, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078A39C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"ObjKokkoMiniGame";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203R\203b\203R\203Q\201[\203\200\227p";
    data_0078A39C = 0x00000000u;
    data_0078A3A0 = 0x00000005u;
    data_0078A3A4 = (uintptr_t)&data_0078A3A8;
    func_0019B51C((uintptr_t)&data_0078A3BC, (uintptr_t)&func_0060AE8C, 0x00000074u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_0078A39C, (uintptr_t)((char *)stk + 56), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078A604;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"ObjKokkoBig";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"\203R\203b\203R\203Q\201[\203\200\227p\203f\203u\203R\203b\203R";
    data_0078A604 = 0x00000000u;
    data_0078A608 = 0x00000005u;
    data_0078A60C = (uintptr_t)&data_0078A610;
    func_0019B51C((uintptr_t)&data_0078A624, (uintptr_t)&func_0060AE8C, 0x00000073u, (uintptr_t)((char *)stk + 64), (uintptr_t)&data_0078A604, (uintptr_t)((char *)stk + 72), 0x00000000u);
}
