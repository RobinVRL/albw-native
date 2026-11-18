#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f66d8;
extern undefined4 *DAT_005f66dc;
extern undefined4 *DAT_005f66e0;
extern undefined4 DAT_005f66f0;
extern undefined4 DAT_005f6718;
extern undefined4 DAT_005f671c;
extern undefined4 *DAT_005f6720;
extern undefined4 DAT_005f6738;
extern char s_Gm_PinMenuWindow_005f6724[];
extern char s_N_ArrowB_00_005f66f4[];
extern char s_N_ArrowL_00_005f6700[];
extern char s_N_ArrowR_00_005f670c[];
extern char s_N_ArrowT_00_005f66e4[];

// USA 005F6674 <- EU 005F664C (Ghidra, non-matching)
// GLOBAL DAT_005f66d8 undefined4 *
// GLOBAL DAT_005f66dc undefined4 *
// GLOBAL DAT_005f66e0 undefined4 *
// GLOBAL DAT_005f66f0 undefined4
// GLOBAL DAT_005f6718 undefined4
// GLOBAL DAT_005f671c undefined4
// GLOBAL DAT_005f6720 undefined4 *
// GLOBAL DAT_005f6738 undefined4
// GLOBAL s_Gm_PinMenuWindow_005f6724 string
// GLOBAL s_N_ArrowB_00_005f66f4 string
// GLOBAL s_N_ArrowL_00_005f6700 string
// GLOBAL s_N_ArrowR_00_005f670c string
// GLOBAL s_N_ArrowT_00_005f66e4 string

undefined4 func_005F6674(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f66d8;
  *DAT_005f66d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f66f0;
  puVar1 = DAT_005f66dc;
  *DAT_005f66dc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f66e0;
  DAT_005f66e0[1] = s_N_ArrowT_00_005f66e4;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f66f4;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f6700;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f670c;
  puVar1 = DAT_005f6720;
  DAT_005f6720[1] = s_Gm_PinMenuWindow_005f6724;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

