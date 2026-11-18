#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005a10f0;
extern undefined4 *DAT_005a10f4;
extern undefined4 *DAT_005a10f8;
extern undefined4 DAT_005a1108;
extern undefined4 DAT_005a1130;
extern undefined4 DAT_005a1134;
extern char s_N_ArrowB_00_005a110c[];
extern char s_N_ArrowL_00_005a1118[];
extern char s_N_ArrowR_00_005a1124[];
extern char s_N_ArrowT_00_005a10fc[];

// USA 005A10B0 <- EU 005A1088 (Ghidra, non-matching)
// GLOBAL DAT_005a10f0 undefined4 *
// GLOBAL DAT_005a10f4 undefined4 *
// GLOBAL DAT_005a10f8 undefined4 *
// GLOBAL DAT_005a1108 undefined4
// GLOBAL DAT_005a1130 undefined4
// GLOBAL DAT_005a1134 undefined4
// GLOBAL s_N_ArrowB_00_005a110c string
// GLOBAL s_N_ArrowL_00_005a1118 string
// GLOBAL s_N_ArrowR_00_005a1124 string
// GLOBAL s_N_ArrowT_00_005a10fc string

undefined4 func_005A10B0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005a10f0;
  *DAT_005a10f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a10f4;
  *DAT_005a10f4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005a1108;
  puVar1 = DAT_005a10f8;
  DAT_005a10f8[1] = s_N_ArrowT_00_005a10fc;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005a110c;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005a1118;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005a1124;
  return func_005902C0(0);
}

