#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b1f10;
extern undefined4 *DAT_005b1f14;
extern undefined4 DAT_005b1f20;
extern undefined DAT_005b1f34;
extern undefined DAT_005b1f60;
extern undefined4 DAT_005b1f68;
extern uint DAT_005b1f6c;
extern uint DAT_005b1f70;
extern undefined4 *DAT_005b1f74;
extern undefined4 DAT_005b1f78;
extern undefined4 DAT_005b1f7c;
extern undefined4 DAT_005b1f80;
extern undefined4 *DAT_005b1f84;
extern undefined4 DAT_005b1f88;
extern undefined4 *DAT_005b1f8c;
extern undefined DAT_005b1f90;
extern int DAT_005b1fb8;
extern uint *DAT_005b1fbc;
extern undefined4 DAT_005b1fc0;
extern undefined4 *DAT_005b1fc4;
extern undefined4 DAT_005b1fc8;
extern undefined4 *DAT_005b1fcc;
extern undefined DAT_005b1fd0;
extern int DAT_005b1ff4;
extern uint *DAT_005b1ff8;
extern undefined4 DAT_005b1ffc;
extern undefined4 *DAT_005b2000;
extern char s_EnemyWizrobeFire_005b1fa4[];
extern char s_EnemyWizrobeIce_005b1fe4[];
extern char s_appear_005b1f18[];
extern char s_attack_005b1f24[];
extern char s_damage_005b1f2c[];
extern char s_disappear_005b1f3c[];
extern char s_jitabata_005b1f48[];
extern char s_piyopiyo_005b1f54[];

// USA 005B1D40 <- EU 005B1D18 (Ghidra, non-matching)
// GLOBAL DAT_005b1f10 int *
// GLOBAL DAT_005b1f14 undefined4 *
// GLOBAL DAT_005b1f20 undefined4
// GLOBAL DAT_005b1f34 undefined
// GLOBAL DAT_005b1f60 undefined
// GLOBAL DAT_005b1f68 undefined4
// GLOBAL DAT_005b1f6c uint
// GLOBAL DAT_005b1f70 uint
// GLOBAL DAT_005b1f74 undefined4 *
// GLOBAL DAT_005b1f78 undefined4
// GLOBAL DAT_005b1f7c undefined4
// GLOBAL DAT_005b1f80 undefined4
// GLOBAL DAT_005b1f84 undefined4 *
// GLOBAL DAT_005b1f88 undefined4
// GLOBAL DAT_005b1f8c undefined4 *
// GLOBAL DAT_005b1f90 undefined
// GLOBAL DAT_005b1fb8 int
// GLOBAL DAT_005b1fbc uint *
// GLOBAL DAT_005b1fc0 undefined4
// GLOBAL DAT_005b1fc4 undefined4 *
// GLOBAL DAT_005b1fc8 undefined4
// GLOBAL DAT_005b1fcc undefined4 *
// GLOBAL DAT_005b1fd0 undefined
// GLOBAL DAT_005b1ff4 int
// GLOBAL DAT_005b1ff8 uint *
// GLOBAL DAT_005b1ffc undefined4
// GLOBAL DAT_005b2000 undefined4 *
// GLOBAL s_EnemyWizrobeFire_005b1fa4 string
// GLOBAL s_EnemyWizrobeIce_005b1fe4 string
// GLOBAL s_appear_005b1f18 string
// GLOBAL s_attack_005b1f24 string
// GLOBAL s_damage_005b1f2c string
// GLOBAL s_disappear_005b1f3c string
// GLOBAL s_jitabata_005b1f48 string
// GLOBAL s_piyopiyo_005b1f54 string

undefined8 func_005B1D40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005b1f10;
  DAT_005b1f10[4] = -1;
  piVar1[5] = -1;
  uVar5 = DAT_005b1f20;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005b1f14;
  DAT_005b1f14[1] = s_appear_005b1f18;
  *puVar2 = uVar5;
  puVar2[3] = s_attack_005b1f24;
  puVar2[2] = uVar5;
  puVar2[5] = s_damage_005b1f2c;
  puVar2[4] = uVar5;
  puVar2[7] = &DAT_005b1f34;
  puVar2[6] = uVar5;
  puVar2[9] = s_disappear_005b1f3c;
  puVar2[8] = uVar5;
  puVar2[0xb] = s_jitabata_005b1f48;
  puVar2[10] = uVar5;
  puVar2[0xd] = s_piyopiyo_005b1f54;
  puVar2[0xc] = uVar5;
  puVar2[0xe] = uVar5;
  puVar2[0xf] = &DAT_005b1f60;
  uVar8 = func_00114608(DAT_005b1f70,DAT_005b1f6c);
  piVar1[2] = (int)uVar8;
  uVar4 = DAT_005b1f80;
  uVar3 = DAT_005b1f7c;
  puVar2 = DAT_005b1f74;
  *DAT_005b1f74 = DAT_005b1f78;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005b1f84,0,1,0,0,(undefined4 *)&local_38,0xb);
  puVar2 = DAT_005b1f8c;
  puVar7 = DAT_005b1f8c + 3;
  DAT_005b1f8c[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_24 = &DAT_005b1f90;
  local_28 = uVar5;
  local_2c = s_EnemyWizrobeFire_005b1fa4;
  local_30 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005b1fb8;
  }
  func_0019B51C(DAT_005b1fc4,DAT_005b1fc0,*DAT_005b1fbc,(int)&local_30,DAT_005b1f8c,&local_28,iVar6)
  ;
  puVar2 = DAT_005b1fcc;
  puVar7 = DAT_005b1fcc + 3;
  DAT_005b1fcc[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_14 = &DAT_005b1fd0;
  local_18 = uVar5;
  local_1c = s_EnemyWizrobeIce_005b1fe4;
  local_20 = uVar5;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005b1ff4;
  }
  uVar5 = func_0019B51C(DAT_005b2000,DAT_005b1ffc,*DAT_005b1ff8,(int)&local_20,DAT_005b1fcc,
                        &local_18,iVar6);
  return CONCAT44(DAT_005b1fc8,uVar5);
}

