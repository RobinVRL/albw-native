#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005b9174;
extern undefined4 *DAT_005b9178;
extern undefined4 *DAT_005b917c;
extern undefined4 DAT_005b9188;
extern undefined DAT_005b91c4;
extern undefined4 DAT_005b91ec;
extern undefined4 DAT_005b91f0;
extern char s_Life0_1_005b9180[];
extern char s_Life1_0_005b918c[];
extern char s_Life1_2_005b9194[];
extern char s_Life2_1_005b919c[];
extern char s_Life2_3_005b91a4[];
extern char s_Life3_2_005b91ac[];
extern char s_Life3_4_005b91b4[];
extern char s_Life4_3_005b91bc[];
extern char s_SetActive_005b91d4[];
extern char s_SetInactive_005b91c8[];
extern char s_WaitActive_005b91e0[];
extern char s_cf_005b9180[];
extern char s_cf_005b918c[];
extern char s_cf_005b9194[];
extern char s_cf_005b919c[];
extern char s_cf_005b91a4[];
extern char s_cf_005b91ac[];
extern char s_cf_005b91b4[];
extern char s_cf_005b91bc[];

// USA 005B90D8 <- EU 005B90B0 (Ghidra, non-matching)
// GLOBAL DAT_005b9174 undefined4 *
// GLOBAL DAT_005b9178 undefined4 *
// GLOBAL DAT_005b917c undefined4 *
// GLOBAL DAT_005b9188 undefined4
// GLOBAL DAT_005b91c4 undefined
// GLOBAL DAT_005b91ec undefined4
// GLOBAL DAT_005b91f0 undefined4
// GLOBAL s_cf_005b9180 string
// GLOBAL s_cf_005b918c string
// GLOBAL s_cf_005b9194 string
// GLOBAL s_cf_005b919c string
// GLOBAL s_cf_005b91a4 string
// GLOBAL s_cf_005b91ac string
// GLOBAL s_cf_005b91b4 string
// GLOBAL s_cf_005b91bc string
// GLOBAL s_SetActive_005b91d4 string
// GLOBAL s_SetInactive_005b91c8 string
// GLOBAL s_WaitActive_005b91e0 string

undefined4 func_005B90D8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005b9174;
  *DAT_005b9174 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9178;
  *DAT_005b9178 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005b9188;
  puVar1 = DAT_005b917c;
  *DAT_005b917c = DAT_005b9188;
  puVar1[1] = s_Life0_1_005b9180;
  puVar1[2] = uVar2;
  puVar1[3] = s_Life1_0_005b918c;
  puVar1[4] = uVar2;
  puVar1[5] = s_Life1_2_005b9194;
  puVar1[6] = uVar2;
  puVar1[7] = s_Life2_1_005b919c;
  puVar1[8] = uVar2;
  puVar1[9] = s_Life2_3_005b91a4;
  puVar1[10] = uVar2;
  puVar1[0xb] = s_Life3_2_005b91ac;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = s_Life3_4_005b91b4;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = s_Life4_3_005b91bc;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = &DAT_005b91c4;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = s_SetInactive_005b91c8;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = s_SetActive_005b91d4;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = s_WaitActive_005b91e0;
  return func_005902C0(0);
}

