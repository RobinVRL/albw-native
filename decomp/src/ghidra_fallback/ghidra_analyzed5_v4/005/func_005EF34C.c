#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ef3b0;
extern undefined4 *DAT_005ef3b4;
extern undefined4 *DAT_005ef3b8;
extern undefined4 DAT_005ef3c8;
extern undefined4 DAT_005ef3f0;
extern undefined4 DAT_005ef3f4;
extern undefined4 *DAT_005ef3f8;
extern undefined4 DAT_005ef40c;
extern char s_Gm_PinSticked_005ef3fc[];
extern char s_N_ArrowB_00_005ef3cc[];
extern char s_N_ArrowL_00_005ef3d8[];
extern char s_N_ArrowR_00_005ef3e4[];
extern char s_N_ArrowT_00_005ef3bc[];

// USA 005EF34C <- EU 005EF324 (Ghidra, non-matching)
// GLOBAL DAT_005ef3b0 undefined4 *
// GLOBAL DAT_005ef3b4 undefined4 *
// GLOBAL DAT_005ef3b8 undefined4 *
// GLOBAL DAT_005ef3c8 undefined4
// GLOBAL DAT_005ef3f0 undefined4
// GLOBAL DAT_005ef3f4 undefined4
// GLOBAL DAT_005ef3f8 undefined4 *
// GLOBAL DAT_005ef40c undefined4
// GLOBAL s_Gm_PinSticked_005ef3fc string
// GLOBAL s_N_ArrowB_00_005ef3cc string
// GLOBAL s_N_ArrowL_00_005ef3d8 string
// GLOBAL s_N_ArrowR_00_005ef3e4 string
// GLOBAL s_N_ArrowT_00_005ef3bc string

undefined4 func_005EF34C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ef3b0;
  *DAT_005ef3b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ef3c8;
  puVar1 = DAT_005ef3b4;
  *DAT_005ef3b4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ef3b8;
  DAT_005ef3b8[1] = s_N_ArrowT_00_005ef3bc;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ef3cc;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ef3d8;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ef3e4;
  puVar1 = DAT_005ef3f8;
  DAT_005ef3f8[1] = s_Gm_PinSticked_005ef3fc;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

