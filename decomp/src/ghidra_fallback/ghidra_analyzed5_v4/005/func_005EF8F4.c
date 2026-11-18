#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ef934;
extern undefined4 *DAT_005ef938;
extern undefined4 *DAT_005ef93c;
extern undefined4 DAT_005ef94c;
extern undefined4 DAT_005ef974;
extern undefined4 DAT_005ef978;
extern char s_N_ArrowB_00_005ef950[];
extern char s_N_ArrowL_00_005ef95c[];
extern char s_N_ArrowR_00_005ef968[];
extern char s_N_ArrowT_00_005ef940[];

// USA 005EF8F4 <- EU 005EF8CC (Ghidra, non-matching)
// GLOBAL DAT_005ef934 undefined4 *
// GLOBAL DAT_005ef938 undefined4 *
// GLOBAL DAT_005ef93c undefined4 *
// GLOBAL DAT_005ef94c undefined4
// GLOBAL DAT_005ef974 undefined4
// GLOBAL DAT_005ef978 undefined4
// GLOBAL s_N_ArrowB_00_005ef950 string
// GLOBAL s_N_ArrowL_00_005ef95c string
// GLOBAL s_N_ArrowR_00_005ef968 string
// GLOBAL s_N_ArrowT_00_005ef940 string

undefined4 func_005EF8F4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ef934;
  *DAT_005ef934 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ef938;
  *DAT_005ef938 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ef94c;
  puVar1 = DAT_005ef93c;
  DAT_005ef93c[1] = s_N_ArrowT_00_005ef940;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ef950;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ef95c;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ef968;
  return func_005902C0(0);
}

