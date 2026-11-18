#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f7670;
extern undefined4 *DAT_005f7674;
extern undefined DAT_005f7678;
extern undefined4 DAT_005f7680;
extern undefined4 DAT_005f7684;
extern undefined4 DAT_005f7688;
extern undefined4 *DAT_005f768c;
extern undefined4 DAT_005f7690;
extern undefined4 *DAT_005f7694;
extern undefined DAT_005f7698;
extern uint *DAT_005f76c8;
extern undefined4 DAT_005f76cc;
extern undefined4 *DAT_005f76d0;
extern undefined4 DAT_005f76d4;
extern undefined4 *DAT_005f76d8;
extern undefined DAT_005f76dc;
extern uint *DAT_005f770c;
extern undefined4 DAT_005f7710;
extern undefined4 *DAT_005f7714;
extern char s_MojDoorSwitchEast_005f76f8[];
extern char s_MojDoorSwitchWind_005f76b4[];

// USA 005F754C <- EU 005F7524 (Ghidra, non-matching)
// GLOBAL DAT_005f7670 undefined4 *
// GLOBAL DAT_005f7674 undefined4 *
// GLOBAL DAT_005f7678 undefined
// GLOBAL DAT_005f7680 undefined4
// GLOBAL DAT_005f7684 undefined4
// GLOBAL DAT_005f7688 undefined4
// GLOBAL DAT_005f768c undefined4 *
// GLOBAL DAT_005f7690 undefined4
// GLOBAL DAT_005f7694 undefined4 *
// GLOBAL DAT_005f7698 undefined
// GLOBAL DAT_005f76c8 uint *
// GLOBAL DAT_005f76cc undefined4
// GLOBAL DAT_005f76d0 undefined4 *
// GLOBAL DAT_005f76d4 undefined4
// GLOBAL DAT_005f76d8 undefined4 *
// GLOBAL DAT_005f76dc undefined
// GLOBAL DAT_005f770c uint *
// GLOBAL DAT_005f7710 undefined4
// GLOBAL DAT_005f7714 undefined4 *
// GLOBAL s_MojDoorSwitchEast_005f76f8 string
// GLOBAL s_MojDoorSwitchWind_005f76b4 string

undefined8 func_005F754C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005f7670;
  *DAT_005f7670 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f7680;
  puVar1 = DAT_005f7674;
  *DAT_005f7674 = 0;
  puVar1[1] = 0;
  puVar1[3] = &DAT_005f7678;
  puVar1[2] = uVar2;
  puVar1 = DAT_005f768c;
  DAT_005f768c[1] = &DAT_005f7678;
  *puVar1 = uVar2;
  puVar1 = DAT_005f7694;
  puVar3 = DAT_005f7694 + 3;
  DAT_005f7694[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005f7698;
  local_2c = s_MojDoorSwitchWind_005f76b4;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005f76d0,DAT_005f76cc,*DAT_005f76c8,(int)&local_30,DAT_005f7694,&local_28,0);
  puVar1 = DAT_005f76d8;
  DAT_005f76d8[2] = DAT_005f76d8 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_14 = &DAT_005f76dc;
  local_1c = s_MojDoorSwitchEast_005f76f8;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005f7714,DAT_005f7710,*DAT_005f770c,(int)&local_20,DAT_005f76d8,
                        &local_18,0);
  return CONCAT44(DAT_005f76d4,uVar2);
}

