#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005a3794;
extern undefined4 *DAT_005a3798;
extern undefined4 *DAT_005a379c;
extern undefined4 DAT_005a37ac;
extern undefined4 DAT_005a37d4;
extern undefined4 DAT_005a37d8;
extern char s_N_ArrowB_00_005a37b0[];
extern char s_N_ArrowL_00_005a37bc[];
extern char s_N_ArrowR_00_005a37c8[];
extern char s_N_ArrowT_00_005a37a0[];

// USA 005A3754 <- EU 005A372C (Ghidra, non-matching)
// GLOBAL DAT_005a3794 undefined4 *
// GLOBAL DAT_005a3798 undefined4 *
// GLOBAL DAT_005a379c undefined4 *
// GLOBAL DAT_005a37ac undefined4
// GLOBAL DAT_005a37d4 undefined4
// GLOBAL DAT_005a37d8 undefined4
// GLOBAL s_N_ArrowB_00_005a37b0 string
// GLOBAL s_N_ArrowL_00_005a37bc string
// GLOBAL s_N_ArrowR_00_005a37c8 string
// GLOBAL s_N_ArrowT_00_005a37a0 string

undefined4 func_005A3754(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005a3794;
  *DAT_005a3794 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a3798;
  *DAT_005a3798 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005a37ac;
  puVar1 = DAT_005a379c;
  DAT_005a379c[1] = s_N_ArrowT_00_005a37a0;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005a37b0;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005a37bc;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005a37c8;
  return func_005902C0(0);
}

