#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eafac;
extern undefined4 *DAT_005eafb0;
extern undefined4 *DAT_005eafb4;
extern undefined4 DAT_005eafc4;
extern undefined4 DAT_005eafec;
extern undefined4 DAT_005eaff0;
extern char s_N_ArrowB_00_005eafc8[];
extern char s_N_ArrowL_00_005eafd4[];
extern char s_N_ArrowR_00_005eafe0[];
extern char s_N_ArrowT_00_005eafb8[];

// USA 005EAF6C <- EU 005EAF44 (Ghidra, non-matching)
// GLOBAL DAT_005eafac undefined4 *
// GLOBAL DAT_005eafb0 undefined4 *
// GLOBAL DAT_005eafb4 undefined4 *
// GLOBAL DAT_005eafc4 undefined4
// GLOBAL DAT_005eafec undefined4
// GLOBAL DAT_005eaff0 undefined4
// GLOBAL s_N_ArrowB_00_005eafc8 string
// GLOBAL s_N_ArrowL_00_005eafd4 string
// GLOBAL s_N_ArrowR_00_005eafe0 string
// GLOBAL s_N_ArrowT_00_005eafb8 string

undefined4 func_005EAF6C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005eafac;
  *DAT_005eafac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eafb0;
  *DAT_005eafb0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005eafc4;
  puVar1 = DAT_005eafb4;
  DAT_005eafb4[1] = s_N_ArrowT_00_005eafb8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005eafc8;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005eafd4;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005eafe0;
  return func_005902C0(0);
}

