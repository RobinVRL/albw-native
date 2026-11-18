#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f2aac;
extern undefined4 *DAT_005f2ab0;
extern undefined4 *DAT_005f2ab4;
extern undefined4 DAT_005f2ac4;
extern undefined4 DAT_005f2aec;
extern undefined4 DAT_005f2af0;
extern undefined4 *DAT_005f2af4;
extern undefined4 DAT_005f2b04;
extern char s_Gm_StadiumB_005f2af8[];
extern char s_N_ArrowB_00_005f2ac8[];
extern char s_N_ArrowL_00_005f2ad4[];
extern char s_N_ArrowR_00_005f2ae0[];
extern char s_N_ArrowT_00_005f2ab8[];

// USA 005F2A48 <- EU 005F2A20 (Ghidra, non-matching)
// GLOBAL DAT_005f2aac undefined4 *
// GLOBAL DAT_005f2ab0 undefined4 *
// GLOBAL DAT_005f2ab4 undefined4 *
// GLOBAL DAT_005f2ac4 undefined4
// GLOBAL DAT_005f2aec undefined4
// GLOBAL DAT_005f2af0 undefined4
// GLOBAL DAT_005f2af4 undefined4 *
// GLOBAL DAT_005f2b04 undefined4
// GLOBAL s_Gm_StadiumB_005f2af8 string
// GLOBAL s_N_ArrowB_00_005f2ac8 string
// GLOBAL s_N_ArrowL_00_005f2ad4 string
// GLOBAL s_N_ArrowR_00_005f2ae0 string
// GLOBAL s_N_ArrowT_00_005f2ab8 string

undefined4 func_005F2A48(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f2aac;
  *DAT_005f2aac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f2ac4;
  puVar1 = DAT_005f2ab0;
  *DAT_005f2ab0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f2ab4;
  DAT_005f2ab4[1] = s_N_ArrowT_00_005f2ab8;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f2ac8;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f2ad4;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f2ae0;
  puVar1 = DAT_005f2af4;
  DAT_005f2af4[1] = s_Gm_StadiumB_005f2af8;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

