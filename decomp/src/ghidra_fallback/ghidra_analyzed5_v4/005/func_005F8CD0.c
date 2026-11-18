#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f8db0;
extern undefined4 *DAT_005f8db4;
extern undefined4 *DAT_005f8db8;
extern undefined4 DAT_005f8dc8;
extern undefined4 DAT_005f8df0;
extern undefined4 DAT_005f8df4;
extern undefined4 *DAT_005f8df8;
extern undefined4 DAT_005f8e14;
extern undefined4 *DAT_005f8e18;
extern undefined DAT_005f8e1c;
extern undefined DAT_005f8e20;
extern undefined DAT_005f8e24;
extern undefined4 DAT_005f8e2c;
extern undefined4 *DAT_005f8e30;
extern undefined DAT_005f8e34;
extern undefined DAT_005f8e38;
extern undefined DAT_005f8e3c;
extern undefined DAT_005f8e40;
extern undefined4 DAT_005f8e44;
extern char s_Gm_SRCShadowLinkInfoB_005f8dfc[];
extern char s_N_ArrowB_00_005f8dcc[];
extern char s_N_ArrowL_00_005f8dd8[];
extern char s_N_ArrowR_00_005f8de4[];
extern char s_N_ArrowT_00_005f8dbc[];

// USA 005F8CD0 <- EU 005F8CA8 (Ghidra, non-matching)
// GLOBAL DAT_005f8db0 undefined4 *
// GLOBAL DAT_005f8db4 undefined4 *
// GLOBAL DAT_005f8db8 undefined4 *
// GLOBAL DAT_005f8dc8 undefined4
// GLOBAL DAT_005f8df0 undefined4
// GLOBAL DAT_005f8df4 undefined4
// GLOBAL DAT_005f8df8 undefined4 *
// GLOBAL DAT_005f8e14 undefined4
// GLOBAL DAT_005f8e18 undefined4 *
// GLOBAL DAT_005f8e1c undefined
// GLOBAL DAT_005f8e20 undefined
// GLOBAL DAT_005f8e24 undefined
// GLOBAL DAT_005f8e2c undefined4
// GLOBAL DAT_005f8e30 undefined4 *
// GLOBAL DAT_005f8e34 undefined
// GLOBAL DAT_005f8e38 undefined
// GLOBAL DAT_005f8e3c undefined
// GLOBAL DAT_005f8e40 undefined
// GLOBAL DAT_005f8e44 undefined4
// GLOBAL s_Gm_SRCShadowLinkInfoB_005f8dfc string
// GLOBAL s_N_ArrowB_00_005f8dcc string
// GLOBAL s_N_ArrowL_00_005f8dd8 string
// GLOBAL s_N_ArrowR_00_005f8de4 string
// GLOBAL s_N_ArrowT_00_005f8dbc string

undefined4 func_005F8CD0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f8db0;
  *DAT_005f8db0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f8dc8;
  puVar1 = DAT_005f8db4;
  *DAT_005f8db4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f8db8;
  DAT_005f8db8[1] = s_N_ArrowT_00_005f8dbc;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f8dcc;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f8dd8;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f8de4;
  puVar1 = DAT_005f8df8;
  DAT_005f8df8[1] = s_Gm_SRCShadowLinkInfoB_005f8dfc;
  *puVar1 = uVar2;
  puVar1 = DAT_005f8e18;
  DAT_005f8e18[1] = &DAT_005f8e1c;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005f8e20;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005f8e24;
  puVar1 = DAT_005f8e30;
  DAT_005f8e30[1] = &DAT_005f8e34;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005f8e38;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005f8e3c;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005f8e40;
  return func_005902C0(0);
}

