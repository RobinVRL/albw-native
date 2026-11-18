#include "ghidra_types.h"

extern undefined4 *DAT_005eaa28;
extern undefined4 *DAT_005eaa2c;
extern undefined4 *DAT_005eaa30;
extern undefined4 DAT_005eaa40;
extern undefined4 DAT_005eaa68;
extern undefined4 DAT_005eaa6c;
extern undefined4 DAT_005eaa70;
extern undefined4 *DAT_005eaa74;
extern char s_N_ArrowB_00_005eaa44[];
extern char s_N_ArrowL_00_005eaa50[];
extern char s_N_ArrowR_00_005eaa5c[];
extern char s_N_ArrowT_00_005eaa34[];

// USA 005EA9D0 <- EU 005EA9A8 (Ghidra, non-matching)
// GLOBAL DAT_005eaa28 undefined4 *
// GLOBAL DAT_005eaa2c undefined4 *
// GLOBAL DAT_005eaa30 undefined4 *
// GLOBAL DAT_005eaa40 undefined4
// GLOBAL DAT_005eaa68 undefined4
// GLOBAL DAT_005eaa6c undefined4
// GLOBAL DAT_005eaa70 undefined4
// GLOBAL DAT_005eaa74 undefined4 *
// GLOBAL s_N_ArrowB_00_005eaa44 string
// GLOBAL s_N_ArrowL_00_005eaa50 string
// GLOBAL s_N_ArrowR_00_005eaa5c string
// GLOBAL s_N_ArrowT_00_005eaa34 string

void func_005EA9D0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005eaa28;
  *DAT_005eaa28 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eaa2c;
  *DAT_005eaa2c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005eaa40;
  puVar1 = DAT_005eaa30;
  DAT_005eaa30[1] = s_N_ArrowT_00_005eaa34;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005eaa44;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005eaa50;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005eaa5c;
  puVar1 = DAT_005eaa74;
  uVar2 = DAT_005eaa70;
  *DAT_005eaa74 = DAT_005eaa70;
  puVar1[1] = uVar2;
  return;
}

