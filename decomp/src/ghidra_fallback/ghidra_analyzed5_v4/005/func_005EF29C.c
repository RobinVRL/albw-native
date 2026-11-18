#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ef2dc;
extern undefined4 *DAT_005ef2e0;
extern undefined4 *DAT_005ef2e4;
extern undefined4 DAT_005ef2f4;
extern undefined4 DAT_005ef31c;
extern undefined4 DAT_005ef320;
extern char s_N_ArrowB_00_005ef2f8[];
extern char s_N_ArrowL_00_005ef304[];
extern char s_N_ArrowR_00_005ef310[];
extern char s_N_ArrowT_00_005ef2e8[];

// USA 005EF29C <- EU 005EF274 (Ghidra, non-matching)
// GLOBAL DAT_005ef2dc undefined4 *
// GLOBAL DAT_005ef2e0 undefined4 *
// GLOBAL DAT_005ef2e4 undefined4 *
// GLOBAL DAT_005ef2f4 undefined4
// GLOBAL DAT_005ef31c undefined4
// GLOBAL DAT_005ef320 undefined4
// GLOBAL s_N_ArrowB_00_005ef2f8 string
// GLOBAL s_N_ArrowL_00_005ef304 string
// GLOBAL s_N_ArrowR_00_005ef310 string
// GLOBAL s_N_ArrowT_00_005ef2e8 string

undefined4 func_005EF29C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ef2dc;
  *DAT_005ef2dc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ef2e0;
  *DAT_005ef2e0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ef2f4;
  puVar1 = DAT_005ef2e4;
  DAT_005ef2e4[1] = s_N_ArrowT_00_005ef2e8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ef2f8;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ef304;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ef310;
  return func_005902C0(0);
}

