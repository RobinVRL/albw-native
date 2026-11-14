/* USA 005B448C (EU 005B4464): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 16 other stores, 4 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF70;
extern uint32_t data_0070BF74;
extern uint32_t data_0070BF78;
extern uint32_t data_0070BF7C;
extern uint32_t data_00754988;
extern uint32_t data_0075498C;
extern uint32_t data_00754990;
extern uint32_t data_00754994;
extern uint32_t data_007549A8;
extern uint32_t data_00754BF0;
extern uint32_t data_00754BF4;
extern uint32_t data_00754BF8;
extern uint32_t data_00754BFC;
extern uint32_t data_00754C10;
extern uint32_t data_00754E58;
extern uint32_t data_00754E5C;
extern uint32_t data_00754E60;
extern uint32_t data_00754E64;
extern uint32_t data_00754E78;
extern uint32_t data_007550C0;
extern uint32_t data_007550C4;
extern uint32_t data_007550C8;
extern uint32_t data_007550CC;
extern uint32_t data_007550E0;
extern uint32_t data_00755328;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602A74(void);
void func_00603D64(void);
void func_00605BEC(void);
void func_00608B48(void);

static const char *const names_00755328[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "open",
    "close",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B448C(void) {
    uintptr_t stk[22];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00754988;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojDoorHouse";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\306\202\314\224\340";
    fill_names((sead_SafeString *)&data_00755328, names_00755328, 6);
    data_0070BF70 = 0xFFFFFFFFu;
    data_0070BF74 = 0xFFFFFFFFu;
    data_0070BF78 = 0x00000000u;
    data_0070BF7C = 0x00000000u;
    data_00754988 = 0x00000000u;
    data_0075498C = 0x00000005u;
    data_00754990 = (uintptr_t)&data_00754994;
    func_0019B51C((uintptr_t)&data_007549A8, (uintptr_t)&func_00603D64, 0x000000B6u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00754988, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00754BF0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojDoorHyruleSmall";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203n\203C\203\211\203\213\217\351\202\314\224\340\201i\217\254\201j";
    data_00754BF0 = 0x00000000u;
    data_00754BF4 = 0x00000005u;
    data_00754BF8 = (uintptr_t)&data_00754BFC;
    func_0019B51C((uintptr_t)&data_00754C10, (uintptr_t)&func_00608B48, 0x000000BCu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00754BF0, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00754E58;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"MojDoorOre";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\215z\220\316\211\256\202\314\224\340";
    data_00754E58 = 0x00000000u;
    data_00754E5C = 0x00000005u;
    data_00754E60 = (uintptr_t)&data_00754E64;
    func_0019B51C((uintptr_t)&data_00754E78, (uintptr_t)&func_00602A74, 0x000000B7u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00754E58, (uintptr_t)((char *)stk + 56), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007550C0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"MojDoorChurchS";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"\213\263\211\357\202\314\224\340\201i\217\254\201j";
    data_007550C0 = 0x00000000u;
    data_007550C4 = 0x00000005u;
    data_007550C8 = (uintptr_t)&data_007550CC;
    func_0019B51C((uintptr_t)&data_007550E0, (uintptr_t)&func_00605BEC, 0x000000B9u, (uintptr_t)((char *)stk + 64), (uintptr_t)&data_007550C0, (uintptr_t)((char *)stk + 72), 0x00000000u);
}
