#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005cda00;
extern undefined4 *DAT_005cda04;
extern undefined4 *DAT_005cda08;
extern undefined4 DAT_005cda18;
extern undefined4 DAT_005cda40;
extern undefined4 DAT_005cda44;
extern char s_N_ArrowB_00_005cda1c[];
extern char s_N_ArrowL_00_005cda28[];
extern char s_N_ArrowR_00_005cda34[];
extern char s_N_ArrowT_00_005cda0c[];

// USA 005CD9C0 <- EU 005CD998 (Ghidra, non-matching)
// GLOBAL DAT_005cda00 undefined4 *
// GLOBAL DAT_005cda04 undefined4 *
// GLOBAL DAT_005cda08 undefined4 *
// GLOBAL DAT_005cda18 undefined4
// GLOBAL DAT_005cda40 undefined4
// GLOBAL DAT_005cda44 undefined4
// GLOBAL s_N_ArrowB_00_005cda1c string
// GLOBAL s_N_ArrowL_00_005cda28 string
// GLOBAL s_N_ArrowR_00_005cda34 string
// GLOBAL s_N_ArrowT_00_005cda0c string

undefined4 func_005CD9C0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005cda00;
  *DAT_005cda00 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cda04;
  *DAT_005cda04 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005cda18;
  puVar1 = DAT_005cda08;
  DAT_005cda08[1] = s_N_ArrowT_00_005cda0c;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005cda1c;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005cda28;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005cda34;
  return func_005902C0(0);
}

