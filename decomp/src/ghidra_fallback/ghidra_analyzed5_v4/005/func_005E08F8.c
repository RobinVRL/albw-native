#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e0938;
extern undefined4 *DAT_005e093c;
extern undefined4 *DAT_005e0940;
extern undefined4 DAT_005e0950;
extern undefined4 DAT_005e0978;
extern undefined4 DAT_005e097c;
extern char s_N_ArrowB_00_005e0954[];
extern char s_N_ArrowL_00_005e0960[];
extern char s_N_ArrowR_00_005e096c[];
extern char s_N_ArrowT_00_005e0944[];

// USA 005E08F8 <- EU 005E08D0 (Ghidra, non-matching)
// GLOBAL DAT_005e0938 undefined4 *
// GLOBAL DAT_005e093c undefined4 *
// GLOBAL DAT_005e0940 undefined4 *
// GLOBAL DAT_005e0950 undefined4
// GLOBAL DAT_005e0978 undefined4
// GLOBAL DAT_005e097c undefined4
// GLOBAL s_N_ArrowB_00_005e0954 string
// GLOBAL s_N_ArrowL_00_005e0960 string
// GLOBAL s_N_ArrowR_00_005e096c string
// GLOBAL s_N_ArrowT_00_005e0944 string

undefined4 func_005E08F8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e0938;
  *DAT_005e0938 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e093c;
  *DAT_005e093c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005e0950;
  puVar1 = DAT_005e0940;
  DAT_005e0940[1] = s_N_ArrowT_00_005e0944;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e0954;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e0960;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e096c;
  return func_005902C0(0);
}

