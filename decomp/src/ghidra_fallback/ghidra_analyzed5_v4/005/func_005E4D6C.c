#include "ghidra_types.h"

extern undefined4 *DAT_005e4dc8;
extern undefined4 *DAT_005e4dcc;
extern undefined4 *DAT_005e4dd0;
extern undefined4 DAT_005e4de0;
extern undefined4 DAT_005e4e08;
extern undefined4 DAT_005e4e0c;
extern undefined4 *DAT_005e4e10;
extern undefined4 DAT_005e4e14;
extern undefined4 DAT_005e4e18;
extern undefined4 DAT_005e4e1c;
extern char s_N_ArrowB_00_005e4de4[];
extern char s_N_ArrowL_00_005e4df0[];
extern char s_N_ArrowR_00_005e4dfc[];
extern char s_N_ArrowT_00_005e4dd4[];

// USA 005E4D6C <- EU 005E4D44 (Ghidra, non-matching)
// GLOBAL DAT_005e4dc8 undefined4 *
// GLOBAL DAT_005e4dcc undefined4 *
// GLOBAL DAT_005e4dd0 undefined4 *
// GLOBAL DAT_005e4de0 undefined4
// GLOBAL DAT_005e4e08 undefined4
// GLOBAL DAT_005e4e0c undefined4
// GLOBAL DAT_005e4e10 undefined4 *
// GLOBAL DAT_005e4e14 undefined4
// GLOBAL DAT_005e4e18 undefined4
// GLOBAL DAT_005e4e1c undefined4
// GLOBAL s_N_ArrowB_00_005e4de4 string
// GLOBAL s_N_ArrowL_00_005e4df0 string
// GLOBAL s_N_ArrowR_00_005e4dfc string
// GLOBAL s_N_ArrowT_00_005e4dd4 string

void func_005E4D6C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_005e4dc8;
  *DAT_005e4dc8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4dcc;
  *DAT_005e4dcc = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005e4de0;
  puVar1 = DAT_005e4dd0;
  DAT_005e4dd0[1] = s_N_ArrowT_00_005e4dd4;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e4de4;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e4df0;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e4dfc;
  uVar3 = DAT_005e4e1c;
  uVar2 = DAT_005e4e18;
  puVar1 = DAT_005e4e10;
  *DAT_005e4e10 = DAT_005e4e14;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  return;
}

