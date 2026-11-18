#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005a11cc;
extern undefined4 *DAT_005a11d0;
extern undefined4 *DAT_005a11d4;
extern undefined4 DAT_005a11e4;
extern undefined4 DAT_005a120c;
extern undefined4 DAT_005a1210;
extern char s_N_ArrowB_00_005a11e8[];
extern char s_N_ArrowL_00_005a11f4[];
extern char s_N_ArrowR_00_005a1200[];
extern char s_N_ArrowT_00_005a11d8[];

// USA 005A118C <- EU 005A1164 (Ghidra, non-matching)
// GLOBAL DAT_005a11cc undefined4 *
// GLOBAL DAT_005a11d0 undefined4 *
// GLOBAL DAT_005a11d4 undefined4 *
// GLOBAL DAT_005a11e4 undefined4
// GLOBAL DAT_005a120c undefined4
// GLOBAL DAT_005a1210 undefined4
// GLOBAL s_N_ArrowB_00_005a11e8 string
// GLOBAL s_N_ArrowL_00_005a11f4 string
// GLOBAL s_N_ArrowR_00_005a1200 string
// GLOBAL s_N_ArrowT_00_005a11d8 string

undefined4 func_005A118C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005a11cc;
  *DAT_005a11cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a11d0;
  *DAT_005a11d0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005a11e4;
  puVar1 = DAT_005a11d4;
  DAT_005a11d4[1] = s_N_ArrowT_00_005a11d8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005a11e8;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005a11f4;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005a1200;
  return func_005902C0(0);
}

