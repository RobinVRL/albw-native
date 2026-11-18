#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a3dd0;
extern undefined4 *DAT_005a3dd4;
extern undefined4 *DAT_005a3dd8;
extern undefined DAT_005a3ddc;
extern undefined4 DAT_005a3df0;
extern uint *DAT_005a3e04;
extern undefined4 DAT_005a3e08;
extern undefined4 *DAT_005a3e0c;
extern undefined4 DAT_005a3e10;
extern undefined4 DAT_005a3e14;
extern undefined4 *DAT_005a3e18;
extern undefined DAT_005a3e1c;
extern uint *DAT_005a3e44;
extern undefined4 DAT_005a3e48;
extern undefined4 *DAT_005a3e4c;
extern undefined4 *DAT_005a3e50;
extern undefined DAT_005a3e54;
extern uint *DAT_005a3e80;
extern undefined4 DAT_005a3e84;
extern undefined4 *DAT_005a3e88;
extern undefined4 *DAT_005a3e8c;
extern undefined DAT_005a3e90;
extern uint *DAT_005a3eb4;
extern undefined4 DAT_005a3eb8;
extern undefined4 *DAT_005a3ebc;
extern char s_AreaSwitchCheck_005a3ea4[];
extern char s_AreaSwitchCube_005a3df4[];
extern char s_AreaSwitchCylinder_005a3e6c[];
extern char s_AreaSwitchSphere_005a3e30[];

// USA 005A3C20 <- EU 005A3BF8 (Ghidra, non-matching)
// GLOBAL DAT_005a3dd0 undefined4 *
// GLOBAL DAT_005a3dd4 undefined4 *
// GLOBAL DAT_005a3dd8 undefined4 *
// GLOBAL DAT_005a3ddc undefined
// GLOBAL DAT_005a3df0 undefined4
// GLOBAL DAT_005a3e04 uint *
// GLOBAL DAT_005a3e08 undefined4
// GLOBAL DAT_005a3e0c undefined4 *
// GLOBAL DAT_005a3e10 undefined4
// GLOBAL DAT_005a3e14 undefined4
// GLOBAL DAT_005a3e18 undefined4 *
// GLOBAL DAT_005a3e1c undefined
// GLOBAL DAT_005a3e44 uint *
// GLOBAL DAT_005a3e48 undefined4
// GLOBAL DAT_005a3e4c undefined4 *
// GLOBAL DAT_005a3e50 undefined4 *
// GLOBAL DAT_005a3e54 undefined
// GLOBAL DAT_005a3e80 uint *
// GLOBAL DAT_005a3e84 undefined4
// GLOBAL DAT_005a3e88 undefined4 *
// GLOBAL DAT_005a3e8c undefined4 *
// GLOBAL DAT_005a3e90 undefined
// GLOBAL DAT_005a3eb4 uint *
// GLOBAL DAT_005a3eb8 undefined4
// GLOBAL DAT_005a3ebc undefined4 *
// GLOBAL s_AreaSwitchCheck_005a3ea4 string
// GLOBAL s_AreaSwitchCube_005a3df4 string
// GLOBAL s_AreaSwitchCylinder_005a3e6c string
// GLOBAL s_AreaSwitchSphere_005a3e30 string

undefined8 func_005A3C20(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined * *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(char * *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined * *)(albw_frame + 0x3c))
  puVar1 = DAT_005a3dd0;
  *DAT_005a3dd0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a3dd4;
  *DAT_005a3dd4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005a3df0;
  puVar1 = DAT_005a3dd8;
  puVar3 = DAT_005a3dd8 + 3;
  DAT_005a3dd8[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005a3ddc;
  local_4c = s_AreaSwitchCube_005a3df4;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_005a3e0c,DAT_005a3e08,*DAT_005a3e04,(int)&local_50,DAT_005a3dd8,&local_48,0);
  puVar1 = DAT_005a3e18;
  puVar3 = DAT_005a3e18 + 3;
  DAT_005a3e18[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005a3e1c;
  local_3c = s_AreaSwitchSphere_005a3e30;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005a3e4c,DAT_005a3e48,*DAT_005a3e44,(int)&local_40,DAT_005a3e18,&local_38,0);
  puVar1 = DAT_005a3e50;
  puVar3 = DAT_005a3e50 + 3;
  DAT_005a3e50[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005a3e54;
  local_2c = s_AreaSwitchCylinder_005a3e6c;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005a3e88,DAT_005a3e84,*DAT_005a3e80,(int)&local_30,DAT_005a3e50,&local_28,0);
  puVar1 = DAT_005a3e8c;
  puVar3 = DAT_005a3e8c + 3;
  DAT_005a3e8c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005a3e90;
  local_1c = s_AreaSwitchCheck_005a3ea4;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005a3ebc,DAT_005a3eb8,*DAT_005a3eb4,(int)&local_20,DAT_005a3e8c,
                        &local_18,0);
  return CONCAT44(DAT_005a3e14,uVar2);
}

