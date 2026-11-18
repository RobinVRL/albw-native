#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005cb9c0;
extern undefined4 *DAT_005cb9c4;
extern undefined4 *DAT_005cb9c8;
extern undefined4 DAT_005cb9d8;
extern undefined4 DAT_005cba00;
extern undefined4 DAT_005cba04;
extern char s_N_ArrowB_00_005cb9dc[];
extern char s_N_ArrowL_00_005cb9e8[];
extern char s_N_ArrowR_00_005cb9f4[];
extern char s_N_ArrowT_00_005cb9cc[];

// USA 005CB980 <- EU 005CB958 (Ghidra, non-matching)
// GLOBAL DAT_005cb9c0 undefined4 *
// GLOBAL DAT_005cb9c4 undefined4 *
// GLOBAL DAT_005cb9c8 undefined4 *
// GLOBAL DAT_005cb9d8 undefined4
// GLOBAL DAT_005cba00 undefined4
// GLOBAL DAT_005cba04 undefined4
// GLOBAL s_N_ArrowB_00_005cb9dc string
// GLOBAL s_N_ArrowL_00_005cb9e8 string
// GLOBAL s_N_ArrowR_00_005cb9f4 string
// GLOBAL s_N_ArrowT_00_005cb9cc string

undefined4 func_005CB980(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005cb9c0;
  *DAT_005cb9c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb9c4;
  *DAT_005cb9c4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005cb9d8;
  puVar1 = DAT_005cb9c8;
  DAT_005cb9c8[1] = s_N_ArrowT_00_005cb9cc;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005cb9dc;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005cb9e8;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005cb9f4;
  return func_005902C0(0);
}

