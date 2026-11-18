#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d040c;
extern undefined4 *DAT_005d0410;
extern undefined4 *DAT_005d0414;
extern undefined4 DAT_005d0424;
extern undefined4 DAT_005d044c;
extern undefined4 DAT_005d0450;
extern char s_N_ArrowB_00_005d0428[];
extern char s_N_ArrowL_00_005d0434[];
extern char s_N_ArrowR_00_005d0440[];
extern char s_N_ArrowT_00_005d0418[];

// USA 005D03CC <- EU 005D03A4 (Ghidra, non-matching)
// GLOBAL DAT_005d040c undefined4 *
// GLOBAL DAT_005d0410 undefined4 *
// GLOBAL DAT_005d0414 undefined4 *
// GLOBAL DAT_005d0424 undefined4
// GLOBAL DAT_005d044c undefined4
// GLOBAL DAT_005d0450 undefined4
// GLOBAL s_N_ArrowB_00_005d0428 string
// GLOBAL s_N_ArrowL_00_005d0434 string
// GLOBAL s_N_ArrowR_00_005d0440 string
// GLOBAL s_N_ArrowT_00_005d0418 string

undefined4 func_005D03CC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005d040c;
  *DAT_005d040c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0410;
  *DAT_005d0410 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005d0424;
  puVar1 = DAT_005d0414;
  DAT_005d0414[1] = s_N_ArrowT_00_005d0418;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005d0428;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005d0434;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005d0440;
  return func_005902C0(0);
}

