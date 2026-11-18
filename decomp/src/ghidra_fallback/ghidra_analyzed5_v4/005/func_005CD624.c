#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005cd868;
extern undefined4 *DAT_005cd86c;
extern undefined4 DAT_005cd878;
extern undefined DAT_005cd894;
extern undefined DAT_005cd8f4;
extern undefined4 DAT_005cd8fc;
extern uint DAT_005cd900;
extern undefined4 DAT_005cd904;
extern undefined4 *DAT_005cd908;
extern undefined4 DAT_005cd90c;
extern uint DAT_005cd910;
extern undefined4 *DAT_005cd914;
extern undefined4 DAT_005cd918;
extern undefined4 *DAT_005cd91c;
extern undefined DAT_005cd920;
extern int DAT_005cd944;
extern uint *DAT_005cd948;
extern undefined4 DAT_005cd94c;
extern undefined4 *DAT_005cd950;
extern undefined4 DAT_005cd954;
extern undefined4 *DAT_005cd958;
extern undefined DAT_005cd95c;
extern int DAT_005cd98c;
extern uint *DAT_005cd990;
extern undefined4 *DAT_005cd994;
extern char s_EnemyUraWirtShield_005cd978[];
extern char s_EnemyWirtShield_005cd934[];
extern char s_attack_ed_005cd8d8[];
extern char s_attack_md_005cd8cc[];
extern char s_attack_st_005cd8c0[];
extern char s_damage_005cd8ec[];
extern char s_opening_005cd870[];
extern char s_opening_l_005cd87c[];
extern char s_opening_r_005cd888[];
extern char s_revive_005cd8e4[];
extern char s_wait_water_005cd89c[];
extern char s_walk_ed_005cd8b8[];
extern char s_walk_md_005cd8b0[];
extern char s_walk_st_005cd8a8[];

// USA 005CD624 <- EU 005CD5FC (Ghidra, non-matching)
// GLOBAL DAT_005cd868 int *
// GLOBAL DAT_005cd86c undefined4 *
// GLOBAL DAT_005cd878 undefined4
// GLOBAL DAT_005cd894 undefined
// GLOBAL DAT_005cd8f4 undefined
// GLOBAL DAT_005cd8fc undefined4
// GLOBAL DAT_005cd900 uint
// GLOBAL DAT_005cd904 undefined4
// GLOBAL DAT_005cd908 undefined4 *
// GLOBAL DAT_005cd90c undefined4
// GLOBAL DAT_005cd910 uint
// GLOBAL DAT_005cd914 undefined4 *
// GLOBAL DAT_005cd918 undefined4
// GLOBAL DAT_005cd91c undefined4 *
// GLOBAL DAT_005cd920 undefined
// GLOBAL DAT_005cd944 int
// GLOBAL DAT_005cd948 uint *
// GLOBAL DAT_005cd94c undefined4
// GLOBAL DAT_005cd950 undefined4 *
// GLOBAL DAT_005cd954 undefined4
// GLOBAL DAT_005cd958 undefined4 *
// GLOBAL DAT_005cd95c undefined
// GLOBAL DAT_005cd98c int
// GLOBAL DAT_005cd990 uint *
// GLOBAL DAT_005cd994 undefined4 *
// GLOBAL s_EnemyUraWirtShield_005cd978 string
// GLOBAL s_EnemyWirtShield_005cd934 string
// GLOBAL s_attack_ed_005cd8d8 string
// GLOBAL s_attack_md_005cd8cc string
// GLOBAL s_attack_st_005cd8c0 string
// GLOBAL s_damage_005cd8ec string
// GLOBAL s_opening_005cd870 string
// GLOBAL s_opening_l_005cd87c string
// GLOBAL s_opening_r_005cd888 string
// GLOBAL s_revive_005cd8e4 string
// GLOBAL s_wait_water_005cd89c string
// GLOBAL s_walk_ed_005cd8b8 string
// GLOBAL s_walk_md_005cd8b0 string
// GLOBAL s_walk_st_005cd8a8 string

undefined8 func_005CD624(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
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
  piVar1 = DAT_005cd868;
  DAT_005cd868[4] = -1;
  piVar1[5] = -1;
  uVar5 = DAT_005cd878;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005cd86c;
  DAT_005cd86c[1] = s_opening_005cd870;
  *puVar2 = uVar5;
  puVar2[3] = s_opening_l_005cd87c;
  puVar2[2] = uVar5;
  puVar2[5] = s_opening_r_005cd888;
  puVar2[4] = uVar5;
  puVar2[7] = &DAT_005cd894;
  puVar2[6] = uVar5;
  puVar2[9] = s_wait_water_005cd89c;
  puVar2[8] = uVar5;
  puVar2[0xb] = s_walk_st_005cd8a8;
  puVar2[10] = uVar5;
  puVar2[0xd] = s_walk_md_005cd8b0;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = s_walk_ed_005cd8b8;
  puVar2[0xe] = uVar5;
  puVar2[0x11] = s_attack_st_005cd8c0;
  puVar2[0x10] = uVar5;
  puVar2[0x13] = s_attack_md_005cd8cc;
  puVar2[0x12] = uVar5;
  puVar2[0x15] = s_attack_ed_005cd8d8;
  puVar2[0x14] = uVar5;
  puVar2[0x17] = s_revive_005cd8e4;
  puVar2[0x16] = uVar5;
  puVar2[0x19] = s_wait_water_005cd89c;
  puVar2[0x18] = uVar5;
  puVar2[0x1b] = s_damage_005cd8ec;
  puVar2[0x1a] = uVar5;
  puVar2[0x1c] = uVar5;
  puVar2[0x1d] = &DAT_005cd8f4;
  puVar2 = DAT_005cd908;
  uVar4 = DAT_005cd904;
  uVar3 = DAT_005cd900;
  *DAT_005cd908 = DAT_005cd904;
  puVar2[1] = uVar4;
  puVar2[2] = uVar4;
  uVar4 = DAT_005cd90c;
  puVar2[3] = DAT_005cd90c;
  puVar2[4] = uVar4;
  puVar2[5] = uVar4;
  uVar8 = func_00114608(DAT_005cd910,uVar3);
  piVar1[2] = (int)uVar8;
  piVar1[3] = (int)uVar8;
  local_38 = 0;
  local_37 = 1;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005cd914,0,1,0,0,(undefined4 *)&local_38,0xb);
  puVar2 = DAT_005cd91c;
  puVar7 = DAT_005cd91c + 3;
  DAT_005cd91c[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_24 = &DAT_005cd920;
  local_28 = uVar5;
  local_2c = s_EnemyWirtShield_005cd934;
  local_30 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005cd944;
  }
  func_0019B51C(DAT_005cd950,DAT_005cd94c,*DAT_005cd948,(int)&local_30,DAT_005cd91c,&local_28,iVar6)
  ;
  puVar2 = DAT_005cd958;
  DAT_005cd958[2] = DAT_005cd958 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_005cd95c;
  local_18 = uVar5;
  local_1c = s_EnemyUraWirtShield_005cd978;
  local_20 = uVar5;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005cd98c;
  }
  uVar5 = func_0019B51C(DAT_005cd994,DAT_005cd94c,*DAT_005cd990,(int)&local_20,DAT_005cd958,
                        &local_18,iVar6);
  return CONCAT44(DAT_005cd954,uVar5);
}

