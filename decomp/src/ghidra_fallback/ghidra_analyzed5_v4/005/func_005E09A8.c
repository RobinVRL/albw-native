#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e09e8;
extern undefined4 *DAT_005e09ec;
extern undefined4 *DAT_005e09f0;
extern undefined4 DAT_005e0a00;
extern undefined4 DAT_005e0a28;
extern undefined4 DAT_005e0a2c;
extern char s_N_ArrowB_00_005e0a04[];
extern char s_N_ArrowL_00_005e0a10[];
extern char s_N_ArrowR_00_005e0a1c[];
extern char s_N_ArrowT_00_005e09f4[];

// USA 005E09A8 <- EU 005E0980 (Ghidra, non-matching)
// GLOBAL DAT_005e09e8 undefined4 *
// GLOBAL DAT_005e09ec undefined4 *
// GLOBAL DAT_005e09f0 undefined4 *
// GLOBAL DAT_005e0a00 undefined4
// GLOBAL DAT_005e0a28 undefined4
// GLOBAL DAT_005e0a2c undefined4
// GLOBAL s_N_ArrowB_00_005e0a04 string
// GLOBAL s_N_ArrowL_00_005e0a10 string
// GLOBAL s_N_ArrowR_00_005e0a1c string
// GLOBAL s_N_ArrowT_00_005e09f4 string

undefined4 func_005E09A8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e09e8;
  *DAT_005e09e8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e09ec;
  *DAT_005e09ec = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005e0a00;
  puVar1 = DAT_005e09f0;
  DAT_005e09f0[1] = s_N_ArrowT_00_005e09f4;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e0a04;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e0a10;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e0a1c;
  return func_005902C0(0);
}

