#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f1d88;
extern undefined4 *DAT_005f1d8c;
extern undefined4 *DAT_005f1d90;
extern undefined4 DAT_005f1da0;
extern undefined4 DAT_005f1dc8;
extern undefined4 DAT_005f1dcc;
extern char s_N_ArrowB_00_005f1da4[];
extern char s_N_ArrowL_00_005f1db0[];
extern char s_N_ArrowR_00_005f1dbc[];
extern char s_N_ArrowT_00_005f1d94[];

// USA 005F1D48 <- EU 005F1D20 (Ghidra, non-matching)
// GLOBAL DAT_005f1d88 undefined4 *
// GLOBAL DAT_005f1d8c undefined4 *
// GLOBAL DAT_005f1d90 undefined4 *
// GLOBAL DAT_005f1da0 undefined4
// GLOBAL DAT_005f1dc8 undefined4
// GLOBAL DAT_005f1dcc undefined4
// GLOBAL s_N_ArrowB_00_005f1da4 string
// GLOBAL s_N_ArrowL_00_005f1db0 string
// GLOBAL s_N_ArrowR_00_005f1dbc string
// GLOBAL s_N_ArrowT_00_005f1d94 string

undefined4 func_005F1D48(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f1d88;
  *DAT_005f1d88 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f1d8c;
  *DAT_005f1d8c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005f1da0;
  puVar1 = DAT_005f1d90;
  DAT_005f1d90[1] = s_N_ArrowT_00_005f1d94;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f1da4;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f1db0;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f1dbc;
  return func_005902C0(0);
}

