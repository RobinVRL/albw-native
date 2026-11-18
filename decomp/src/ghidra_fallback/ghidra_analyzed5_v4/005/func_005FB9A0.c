#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fba8c;
extern undefined4 *DAT_005fba90;
extern undefined4 *DAT_005fba94;
extern undefined4 DAT_005fbaa4;
extern undefined4 DAT_005fbacc;
extern undefined4 DAT_005fbad0;
extern undefined4 *DAT_005fbad4;
extern undefined4 DAT_005fbae8;
extern undefined4 *DAT_005fbaec;
extern undefined DAT_005fbaf0;
extern undefined DAT_005fbaf4;
extern undefined DAT_005fbaf8;
extern undefined DAT_005fbafc;
extern undefined4 DAT_005fbb00;
extern undefined4 *DAT_005fbb04;
extern undefined DAT_005fbb08;
extern undefined DAT_005fbb10;
extern undefined DAT_005fbb18;
extern undefined DAT_005fbb20;
extern undefined4 DAT_005fbb28;
extern char s_Gm_AreaMapArrow_005fbad8[];
extern char s_N_ArrowB_00_005fbaa8[];
extern char s_N_ArrowL_00_005fbab4[];
extern char s_N_ArrowR_00_005fbac0[];
extern char s_N_ArrowT_00_005fba98[];

// USA 005FB9A0 <- EU 005FB978 (Ghidra, non-matching)
// GLOBAL DAT_005fba8c undefined4 *
// GLOBAL DAT_005fba90 undefined4 *
// GLOBAL DAT_005fba94 undefined4 *
// GLOBAL DAT_005fbaa4 undefined4
// GLOBAL DAT_005fbacc undefined4
// GLOBAL DAT_005fbad0 undefined4
// GLOBAL DAT_005fbad4 undefined4 *
// GLOBAL DAT_005fbae8 undefined4
// GLOBAL DAT_005fbaec undefined4 *
// GLOBAL DAT_005fbaf0 undefined
// GLOBAL DAT_005fbaf4 undefined
// GLOBAL DAT_005fbaf8 undefined
// GLOBAL DAT_005fbafc undefined
// GLOBAL DAT_005fbb00 undefined4
// GLOBAL DAT_005fbb04 undefined4 *
// GLOBAL DAT_005fbb08 undefined
// GLOBAL DAT_005fbb10 undefined
// GLOBAL DAT_005fbb18 undefined
// GLOBAL DAT_005fbb20 undefined
// GLOBAL DAT_005fbb28 undefined4
// GLOBAL s_Gm_AreaMapArrow_005fbad8 string
// GLOBAL s_N_ArrowB_00_005fbaa8 string
// GLOBAL s_N_ArrowL_00_005fbab4 string
// GLOBAL s_N_ArrowR_00_005fbac0 string
// GLOBAL s_N_ArrowT_00_005fba98 string

undefined4 func_005FB9A0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fba8c;
  *DAT_005fba8c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fbaa4;
  puVar1 = DAT_005fba90;
  *DAT_005fba90 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005fba94;
  DAT_005fba94[1] = s_N_ArrowT_00_005fba98;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005fbaa8;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005fbab4;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005fbac0;
  puVar1 = DAT_005fbad4;
  DAT_005fbad4[1] = s_Gm_AreaMapArrow_005fbad8;
  *puVar1 = uVar2;
  puVar1 = DAT_005fbaec;
  DAT_005fbaec[1] = &DAT_005fbaf0;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005fbaf4;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005fbaf8;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005fbafc;
  puVar1 = DAT_005fbb04;
  DAT_005fbb04[1] = &DAT_005fbb08;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005fbb10;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005fbb18;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005fbb20;
  return func_005902C0(0);
}

