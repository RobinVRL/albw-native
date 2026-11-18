#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f2dd4;
extern undefined4 *DAT_005f2dd8;
extern undefined4 *DAT_005f2ddc;
extern undefined4 DAT_005f2dec;
extern undefined4 DAT_005f2e14;
extern undefined4 DAT_005f2e18;
extern undefined4 *DAT_005f2e1c;
extern undefined4 DAT_005f2e34;
extern undefined4 *DAT_005f2e38;
extern undefined4 *DAT_005f2e4c;
extern undefined4 *DAT_005f2e5c;
extern undefined4 *DAT_005f2e60;
extern undefined4 *DAT_005f2e74;
extern undefined4 *DAT_005f2e8c;
extern undefined DAT_005f2e90;
extern undefined4 DAT_005f2eac;
extern char s_Decide_005f2e94[];
extern char s_Gm_SelectPowerUpT_005f2e20[];
extern char s_ItemNameUpper_005f2e64[];
extern char s_N_Area_00_005f2e50[];
extern char s_N_ArrowB_00_005f2df0[];
extern char s_N_ArrowL_00_005f2dfc[];
extern char s_N_ArrowR_00_005f2e08[];
extern char s_N_ArrowT_00_005f2de0[];
extern char s_N_ItemName_00_005f2e3c[];
extern char s_ScrollL_005f2e9c[];
extern char s_ScrollR_005f2ea4[];
extern char s_T_ItemNameCancel_00_005f2e78[];

// USA 005F2CA0 <- EU 005F2C78 (Ghidra, non-matching)
// GLOBAL DAT_005f2dd4 undefined4 *
// GLOBAL DAT_005f2dd8 undefined4 *
// GLOBAL DAT_005f2ddc undefined4 *
// GLOBAL DAT_005f2dec undefined4
// GLOBAL DAT_005f2e14 undefined4
// GLOBAL DAT_005f2e18 undefined4
// GLOBAL DAT_005f2e1c undefined4 *
// GLOBAL DAT_005f2e34 undefined4
// GLOBAL DAT_005f2e38 undefined4 *
// GLOBAL DAT_005f2e4c undefined4 *
// GLOBAL DAT_005f2e5c undefined4 *
// GLOBAL DAT_005f2e60 undefined4 *
// GLOBAL DAT_005f2e74 undefined4 *
// GLOBAL DAT_005f2e8c undefined4 *
// GLOBAL DAT_005f2e90 undefined
// GLOBAL DAT_005f2eac undefined4
// GLOBAL s_Decide_005f2e94 string
// GLOBAL s_Gm_SelectPowerUpT_005f2e20 string
// GLOBAL s_ItemNameUpper_005f2e64 string
// GLOBAL s_N_Area_00_005f2e50 string
// GLOBAL s_N_ArrowB_00_005f2df0 string
// GLOBAL s_N_ArrowL_00_005f2dfc string
// GLOBAL s_N_ArrowR_00_005f2e08 string
// GLOBAL s_N_ArrowT_00_005f2de0 string
// GLOBAL s_N_ItemName_00_005f2e3c string
// GLOBAL s_ScrollL_005f2e9c string
// GLOBAL s_ScrollR_005f2ea4 string
// GLOBAL s_T_ItemNameCancel_00_005f2e78 string

undefined4 func_005F2CA0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f2dd4;
  *DAT_005f2dd4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f2dec;
  puVar1 = DAT_005f2dd8;
  *DAT_005f2dd8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f2ddc;
  DAT_005f2ddc[1] = s_N_ArrowT_00_005f2de0;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f2df0;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f2dfc;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f2e08;
  puVar1 = DAT_005f2e1c;
  DAT_005f2e1c[1] = s_Gm_SelectPowerUpT_005f2e20;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2e38;
  DAT_005f2e38[1] = s_N_ItemName_00_005f2e3c;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2e4c;
  DAT_005f2e4c[1] = s_N_Area_00_005f2e50;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2e5c;
  DAT_005f2e5c[1] = s_N_Area_00_005f2e50;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2e60;
  DAT_005f2e60[1] = s_ItemNameUpper_005f2e64;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2e74;
  DAT_005f2e74[1] = s_T_ItemNameCancel_00_005f2e78;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2e8c;
  DAT_005f2e8c[1] = &DAT_005f2e90;
  *puVar1 = uVar2;
  puVar1[3] = s_Decide_005f2e94;
  puVar1[2] = uVar2;
  puVar1[5] = s_ScrollL_005f2e9c;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_ScrollR_005f2ea4;
  return func_005902C0(0);
}

