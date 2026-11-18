#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b46ac;
extern undefined4 *DAT_005b46b0;
extern undefined4 *DAT_005b46b4;
extern undefined4 DAT_005b46c4;
extern undefined4 DAT_005b46ec;
extern undefined4 DAT_005b46f0;
extern undefined4 *DAT_005b46f4;
extern undefined DAT_005b46f8;
extern undefined4 DAT_005b4708;
extern undefined4 *DAT_005b470c;
extern undefined DAT_005b4710;
extern uint *DAT_005b4728;
extern undefined4 DAT_005b472c;
extern undefined4 *DAT_005b4730;
extern undefined4 DAT_005b4734;
extern undefined4 *DAT_005b4738;
extern undefined DAT_005b473c;
extern uint *DAT_005b4768;
extern undefined4 DAT_005b476c;
extern undefined4 *DAT_005b4770;
extern undefined4 *DAT_005b4774;
extern undefined DAT_005b4778;
extern uint *DAT_005b4790;
extern undefined4 DAT_005b4794;
extern undefined4 *DAT_005b4798;
extern undefined4 *DAT_005b479c;
extern undefined DAT_005b47a0;
extern uint *DAT_005b47c0;
extern undefined4 DAT_005b47c4;
extern undefined4 *DAT_005b47c8;
extern char s_MojDoorChurchS_005b47b0[];
extern char s_MojDoorHouse_005b4718[];
extern char s_MojDoorHyruleSmall_005b4754[];
extern char s_MojDoorOre_005b4784[];
extern char s_N_ArrowB_00_005b46c8[];
extern char s_N_ArrowL_00_005b46d4[];
extern char s_N_ArrowR_00_005b46e0[];
extern char s_N_ArrowT_00_005b46b8[];
extern char s_close_005b4700[];

// USA 005B448C <- EU 005B4464 (Ghidra, non-matching)
// GLOBAL DAT_005b46ac undefined4 *
// GLOBAL DAT_005b46b0 undefined4 *
// GLOBAL DAT_005b46b4 undefined4 *
// GLOBAL DAT_005b46c4 undefined4
// GLOBAL DAT_005b46ec undefined4
// GLOBAL DAT_005b46f0 undefined4
// GLOBAL DAT_005b46f4 undefined4 *
// GLOBAL DAT_005b46f8 undefined
// GLOBAL DAT_005b4708 undefined4
// GLOBAL DAT_005b470c undefined4 *
// GLOBAL DAT_005b4710 undefined
// GLOBAL DAT_005b4728 uint *
// GLOBAL DAT_005b472c undefined4
// GLOBAL DAT_005b4730 undefined4 *
// GLOBAL DAT_005b4734 undefined4
// GLOBAL DAT_005b4738 undefined4 *
// GLOBAL DAT_005b473c undefined
// GLOBAL DAT_005b4768 uint *
// GLOBAL DAT_005b476c undefined4
// GLOBAL DAT_005b4770 undefined4 *
// GLOBAL DAT_005b4774 undefined4 *
// GLOBAL DAT_005b4778 undefined
// GLOBAL DAT_005b4790 uint *
// GLOBAL DAT_005b4794 undefined4
// GLOBAL DAT_005b4798 undefined4 *
// GLOBAL DAT_005b479c undefined4 *
// GLOBAL DAT_005b47a0 undefined
// GLOBAL DAT_005b47c0 uint *
// GLOBAL DAT_005b47c4 undefined4
// GLOBAL DAT_005b47c8 undefined4 *
// GLOBAL s_MojDoorChurchS_005b47b0 string
// GLOBAL s_MojDoorHouse_005b4718 string
// GLOBAL s_MojDoorHyruleSmall_005b4754 string
// GLOBAL s_MojDoorOre_005b4784 string
// GLOBAL s_N_ArrowB_00_005b46c8 string
// GLOBAL s_N_ArrowL_00_005b46d4 string
// GLOBAL s_N_ArrowR_00_005b46e0 string
// GLOBAL s_N_ArrowT_00_005b46b8 string
// GLOBAL s_close_005b4700 string

undefined8 func_005B448C(void)

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
  puVar1 = DAT_005b46ac;
  *DAT_005b46ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005b46c4;
  puVar1 = DAT_005b46b0;
  *DAT_005b46b0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b46b4;
  DAT_005b46b4[1] = s_N_ArrowT_00_005b46b8;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005b46c8;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005b46d4;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005b46e0;
  puVar1 = DAT_005b46f4;
  DAT_005b46f4[1] = &DAT_005b46f8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_close_005b4700;
  puVar1 = DAT_005b470c;
  puVar3 = DAT_005b470c + 3;
  DAT_005b470c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005b4710;
  local_4c = s_MojDoorHouse_005b4718;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_005b4730,DAT_005b472c,*DAT_005b4728,(int)&local_50,DAT_005b470c,&local_48,0);
  puVar1 = DAT_005b4738;
  puVar3 = DAT_005b4738 + 3;
  DAT_005b4738[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005b473c;
  local_3c = s_MojDoorHyruleSmall_005b4754;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005b4770,DAT_005b476c,*DAT_005b4768,(int)&local_40,DAT_005b4738,&local_38,0);
  puVar1 = DAT_005b4774;
  puVar3 = DAT_005b4774 + 3;
  DAT_005b4774[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b4778;
  local_2c = s_MojDoorOre_005b4784;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b4798,DAT_005b4794,*DAT_005b4790,(int)&local_30,DAT_005b4774,&local_28,0);
  puVar1 = DAT_005b479c;
  puVar3 = DAT_005b479c + 3;
  DAT_005b479c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b47a0;
  local_1c = s_MojDoorChurchS_005b47b0;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b47c8,DAT_005b47c4,*DAT_005b47c0,(int)&local_20,DAT_005b479c,
                        &local_18,0);
  return CONCAT44(DAT_005b4734,uVar2);
}

