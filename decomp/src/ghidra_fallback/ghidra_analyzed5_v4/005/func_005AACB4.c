#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005aae48;
extern undefined4 *DAT_005aae4c;
extern undefined DAT_005aae50;
extern undefined4 DAT_005aae58;
extern undefined DAT_005aae80;
extern undefined4 DAT_005aaeb0;
extern uint DAT_005aaeb4;
extern uint DAT_005aaeb8;
extern undefined4 *DAT_005aaebc;
extern undefined4 DAT_005aaec0;
extern undefined4 DAT_005aaec4;
extern undefined4 DAT_005aaec8;
extern uint DAT_005aaecc;
extern undefined4 *DAT_005aaed0;
extern undefined4 DAT_005aaed4;
extern undefined4 *DAT_005aaed8;
extern undefined DAT_005aaedc;
extern int DAT_005aaef4;
extern uint *DAT_005aaef8;
extern undefined4 DAT_005aaefc;
extern undefined4 *DAT_005aaf00;
extern undefined4 DAT_005aaf04;
extern char s_EnemyTendol_005aaee8[];
extern char s_attack_005aae94[];
extern char s_attack_ed_005aae9c[];
extern char s_attack_st_005aae88[];
extern char s_damage_005aae6c[];
extern char s_fly_l_005aae64[];
extern char s_fly_st_005aae5c[];
extern char s_hover_005aaea8[];
extern char s_piyopiyo_005aae74[];

// USA 005AACB4 <- EU 005AAC8C (Ghidra, non-matching)
// GLOBAL DAT_005aae48 int *
// GLOBAL DAT_005aae4c undefined4 *
// GLOBAL DAT_005aae50 undefined
// GLOBAL DAT_005aae58 undefined4
// GLOBAL DAT_005aae80 undefined
// GLOBAL DAT_005aaeb0 undefined4
// GLOBAL DAT_005aaeb4 uint
// GLOBAL DAT_005aaeb8 uint
// GLOBAL DAT_005aaebc undefined4 *
// GLOBAL DAT_005aaec0 undefined4
// GLOBAL DAT_005aaec4 undefined4
// GLOBAL DAT_005aaec8 undefined4
// GLOBAL DAT_005aaecc uint
// GLOBAL DAT_005aaed0 undefined4 *
// GLOBAL DAT_005aaed4 undefined4
// GLOBAL DAT_005aaed8 undefined4 *
// GLOBAL DAT_005aaedc undefined
// GLOBAL DAT_005aaef4 int
// GLOBAL DAT_005aaef8 uint *
// GLOBAL DAT_005aaefc undefined4
// GLOBAL DAT_005aaf00 undefined4 *
// GLOBAL DAT_005aaf04 undefined4
// GLOBAL s_EnemyTendol_005aaee8 string
// GLOBAL s_attack_005aae94 string
// GLOBAL s_attack_ed_005aae9c string
// GLOBAL s_attack_st_005aae88 string
// GLOBAL s_damage_005aae6c string
// GLOBAL s_fly_l_005aae64 string
// GLOBAL s_fly_st_005aae5c string
// GLOBAL s_hover_005aaea8 string
// GLOBAL s_piyopiyo_005aae74 string

undefined8 func_005AACB4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005aae48;
  DAT_005aae48[4] = -1;
  piVar1[5] = -1;
  uVar5 = DAT_005aae58;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005aae4c;
  DAT_005aae4c[1] = &DAT_005aae50;
  *puVar2 = uVar5;
  puVar2[3] = s_fly_st_005aae5c;
  puVar2[2] = uVar5;
  puVar2[5] = s_fly_l_005aae64;
  puVar2[4] = uVar5;
  puVar2[7] = s_damage_005aae6c;
  puVar2[6] = uVar5;
  puVar2[9] = s_damage_005aae6c;
  puVar2[8] = uVar5;
  puVar2[0xb] = s_piyopiyo_005aae74;
  puVar2[10] = uVar5;
  puVar2[0xd] = &DAT_005aae80;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = s_attack_st_005aae88;
  puVar2[0xe] = uVar5;
  puVar2[0x11] = s_attack_005aae94;
  puVar2[0x10] = uVar5;
  puVar2[0x13] = s_attack_ed_005aae9c;
  puVar2[0x12] = uVar5;
  puVar2[0x14] = uVar5;
  puVar2[0x15] = s_hover_005aaea8;
  uVar8 = func_00114608(DAT_005aaeb8,DAT_005aaeb4);
  piVar1[1] = (int)uVar8;
  uVar4 = DAT_005aaec8;
  uVar3 = DAT_005aaec4;
  puVar2 = DAT_005aaebc;
  *DAT_005aaebc = DAT_005aaec0;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  uVar8 = func_00114608(DAT_005aaecc,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[2] = (int)uVar8;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005aaed0,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005aaed8;
  puVar7 = DAT_005aaed8 + 3;
  DAT_005aaed8[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_14 = &DAT_005aaedc;
  local_18 = uVar5;
  local_1c = s_EnemyTendol_005aaee8;
  local_20 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005aaef4;
  }
  uVar5 = func_0019B51C(DAT_005aaf00,DAT_005aaefc,*DAT_005aaef8,(int)&local_20,DAT_005aaed8,
                        &local_18,iVar6);
  return CONCAT44(DAT_005aaf04,uVar5);
}

