#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bc28c;
extern int *DAT_005bc290;
extern int DAT_005bc2a0;
extern undefined4 DAT_005bc2c8;
extern undefined4 DAT_005bc2cc;
extern int *DAT_005bc2d0;
extern undefined4 DAT_005bc2f0;
extern uint DAT_005bc2fc;
extern uint DAT_005bc300;
extern undefined4 DAT_005bc304;
extern undefined4 *DAT_005bc308;
extern undefined DAT_005bc30c;
extern int DAT_005bc32c;
extern uint *DAT_005bc330;
extern undefined4 DAT_005bc334;
extern undefined4 *DAT_005bc338;
extern undefined4 DAT_005bc33c;
extern undefined4 *DAT_005bc340;
extern undefined DAT_005bc344;
extern int DAT_005bc370;
extern uint *DAT_005bc374;
extern undefined4 *DAT_005bc378;
extern char s_EnemyFireMoldworm_005bc35c[];
extern char s_EnemyMoldworm_005bc31c[];
extern char s_Moldworm1_005bc294[];
extern char s_Moldworm2_005bc2a4[];
extern char s_Moldworm3_005bc2b0[];
extern char s_Moldworm4_005bc2bc[];
extern char s_damage2_005bc2f4[];
extern char s_damage_005bc2dc[];
extern char s_piyopiyo_005bc2e4[];
extern char s_wait_1_005bc2d4[];

// USA 005BC09C <- EU 005BC074 (Ghidra, non-matching)
// GLOBAL DAT_005bc28c int *
// GLOBAL DAT_005bc290 int *
// GLOBAL DAT_005bc2a0 int
// GLOBAL DAT_005bc2c8 undefined4
// GLOBAL DAT_005bc2cc undefined4
// GLOBAL DAT_005bc2d0 int *
// GLOBAL DAT_005bc2f0 undefined4
// GLOBAL DAT_005bc2fc uint
// GLOBAL DAT_005bc300 uint
// GLOBAL DAT_005bc304 undefined4
// GLOBAL DAT_005bc308 undefined4 *
// GLOBAL DAT_005bc30c undefined
// GLOBAL DAT_005bc32c int
// GLOBAL DAT_005bc330 uint *
// GLOBAL DAT_005bc334 undefined4
// GLOBAL DAT_005bc338 undefined4 *
// GLOBAL DAT_005bc33c undefined4
// GLOBAL DAT_005bc340 undefined4 *
// GLOBAL DAT_005bc344 undefined
// GLOBAL DAT_005bc370 int
// GLOBAL DAT_005bc374 uint *
// GLOBAL DAT_005bc378 undefined4 *
// GLOBAL s_EnemyFireMoldworm_005bc35c string
// GLOBAL s_EnemyMoldworm_005bc31c string
// GLOBAL s_Moldworm1_005bc294 string
// GLOBAL s_Moldworm2_005bc2a4 string
// GLOBAL s_Moldworm3_005bc2b0 string
// GLOBAL s_Moldworm4_005bc2bc string
// GLOBAL s_damage2_005bc2f4 string
// GLOBAL s_damage_005bc2dc string
// GLOBAL s_piyopiyo_005bc2e4 string
// GLOBAL s_wait_1_005bc2d4 string

undefined8 func_005BC09C(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(int *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005bc28c;
  DAT_005bc28c[4] = -1;
  piVar1[5] = -1;
  iVar6 = DAT_005bc2a0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar2 = DAT_005bc290;
  DAT_005bc290[1] = (int)s_Moldworm1_005bc294;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_Moldworm2_005bc2a4;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_Moldworm3_005bc2b0;
  piVar2[4] = iVar6;
  piVar2[6] = iVar6;
  piVar2[7] = (int)s_Moldworm4_005bc2bc;
  piVar2 = DAT_005bc2d0;
  DAT_005bc2d0[1] = (int)s_wait_1_005bc2d4;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_damage_005bc2dc;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_wait_1_005bc2d4;
  piVar2[4] = iVar6;
  piVar2[6] = iVar6;
  piVar2[7] = (int)s_piyopiyo_005bc2e4;
  piVar1[9] = (int)s_damage2_005bc2f4;
  piVar1[8] = iVar6;
  uVar8 = func_00114608(DAT_005bc300,DAT_005bc2fc);
  piVar1[2] = (int)uVar8;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC5F8(DAT_005bc290 + 0x10,DAT_005bc290,0,1,0,(undefined4 *)&local_38,0xb);
  puVar3 = DAT_005bc308;
  puVar7 = DAT_005bc308 + 3;
  DAT_005bc308[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_24 = &DAT_005bc30c;
  local_28 = iVar6;
  local_2c = s_EnemyMoldworm_005bc31c;
  local_30 = iVar6;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005bc32c;
  }
  func_0019B51C(DAT_005bc338,DAT_005bc334,*DAT_005bc330,(int)&local_30,DAT_005bc308,&local_28,iVar5)
  ;
  puVar3 = DAT_005bc340;
  puVar7 = DAT_005bc340 + 3;
  DAT_005bc340[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_14 = &DAT_005bc344;
  local_18 = iVar6;
  local_1c = s_EnemyFireMoldworm_005bc35c;
  local_20 = iVar6;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005bc370;
  }
  uVar4 = func_0019B51C(DAT_005bc378,DAT_005bc334,*DAT_005bc374,(int)&local_20,DAT_005bc340,
                        &local_18,iVar6);
  return CONCAT44(DAT_005bc33c,uVar4);
}

