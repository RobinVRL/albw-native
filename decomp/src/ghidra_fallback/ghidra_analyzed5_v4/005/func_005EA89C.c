#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ea8dc;
extern undefined4 *DAT_005ea8e0;
extern undefined4 *DAT_005ea8e4;
extern undefined4 DAT_005ea8f4;
extern undefined4 DAT_005ea91c;
extern undefined4 DAT_005ea920;
extern char s_N_ArrowB_00_005ea8f8[];
extern char s_N_ArrowL_00_005ea904[];
extern char s_N_ArrowR_00_005ea910[];
extern char s_N_ArrowT_00_005ea8e8[];

// USA 005EA89C <- EU 005EA874 (Ghidra, non-matching)
// GLOBAL DAT_005ea8dc undefined4 *
// GLOBAL DAT_005ea8e0 undefined4 *
// GLOBAL DAT_005ea8e4 undefined4 *
// GLOBAL DAT_005ea8f4 undefined4
// GLOBAL DAT_005ea91c undefined4
// GLOBAL DAT_005ea920 undefined4
// GLOBAL s_N_ArrowB_00_005ea8f8 string
// GLOBAL s_N_ArrowL_00_005ea904 string
// GLOBAL s_N_ArrowR_00_005ea910 string
// GLOBAL s_N_ArrowT_00_005ea8e8 string

undefined4 func_005EA89C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ea8dc;
  *DAT_005ea8dc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea8e0;
  *DAT_005ea8e0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ea8f4;
  puVar1 = DAT_005ea8e4;
  DAT_005ea8e4[1] = s_N_ArrowT_00_005ea8e8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ea8f8;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ea904;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ea910;
  return func_005902C0(0);
}

