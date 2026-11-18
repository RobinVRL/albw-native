#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bcb40;
extern undefined4 *DAT_005bcb44;
extern undefined DAT_005bcb48;
extern undefined4 DAT_005bcb54;
extern int DAT_005bcb68;
extern uint *DAT_005bcb6c;
extern undefined4 DAT_005bcb70;
extern undefined4 *DAT_005bcb74;
extern undefined4 DAT_005bcb78;
extern undefined4 DAT_005bcb7c;
extern undefined4 *DAT_005bcb80;
extern undefined DAT_005bcb84;
extern undefined DAT_005bcb90;
extern undefined DAT_005bcba0;
extern undefined DAT_005bcba8;
extern undefined4 DAT_005bcbd0;
extern undefined4 *DAT_005bcbd4;
extern uint DAT_005bcbe4;
extern uint DAT_005bcbe8;
extern uint DAT_005bcbec;
extern undefined4 *DAT_005bcbf0;
extern undefined4 DAT_005bcbf4;
extern char s_EnemyTektight_005bcb58[];
extern char s_Tektight_005bcbd8[];
extern char s_damage_005bcbb0[];
extern char s_jitabata_005bcbb8[];
extern char s_jump_ed_005bcb98[];
extern char s_jump_st_005bcb88[];
extern char s_piyopiyo_005bcbc4[];

// USA 005BC9BC <- EU 005BC994 (Ghidra, non-matching)
// GLOBAL DAT_005bcb40 int *
// GLOBAL DAT_005bcb44 undefined4 *
// GLOBAL DAT_005bcb48 undefined
// GLOBAL DAT_005bcb54 undefined4
// GLOBAL DAT_005bcb68 int
// GLOBAL DAT_005bcb6c uint *
// GLOBAL DAT_005bcb70 undefined4
// GLOBAL DAT_005bcb74 undefined4 *
// GLOBAL DAT_005bcb78 undefined4
// GLOBAL DAT_005bcb7c undefined4
// GLOBAL DAT_005bcb80 undefined4 *
// GLOBAL DAT_005bcb84 undefined
// GLOBAL DAT_005bcb90 undefined
// GLOBAL DAT_005bcba0 undefined
// GLOBAL DAT_005bcba8 undefined
// GLOBAL DAT_005bcbd0 undefined4
// GLOBAL DAT_005bcbd4 undefined4 *
// GLOBAL DAT_005bcbe4 uint
// GLOBAL DAT_005bcbe8 uint
// GLOBAL DAT_005bcbec uint
// GLOBAL DAT_005bcbf0 undefined4 *
// GLOBAL DAT_005bcbf4 undefined4
// GLOBAL s_EnemyTektight_005bcb58 string
// GLOBAL s_Tektight_005bcbd8 string
// GLOBAL s_damage_005bcbb0 string
// GLOBAL s_jitabata_005bcbb8 string
// GLOBAL s_jump_ed_005bcb98 string
// GLOBAL s_jump_st_005bcb88 string
// GLOBAL s_piyopiyo_005bcbc4 string

undefined8 func_005BC9BC(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
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
  piVar1 = DAT_005bcb40;
  DAT_005bcb40[4] = -1;
  piVar1[5] = -1;
  piVar1[6] = 0;
  piVar1[7] = 0;
  uVar2 = DAT_005bcb54;
  puVar3 = DAT_005bcb44;
  DAT_005bcb44[2] = DAT_005bcb44 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_14 = &DAT_005bcb48;
  local_18 = uVar2;
  local_1c = s_EnemyTektight_005bcb58;
  local_20 = uVar2;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005bcb68;
  }
  func_0019B51C(DAT_005bcb74,DAT_005bcb70,*DAT_005bcb6c,(int)&local_20,DAT_005bcb44,&local_18,iVar4)
  ;
  puVar3 = DAT_005bcb80;
  DAT_005bcb80[1] = &DAT_005bcb84;
  *puVar3 = uVar2;
  puVar3[3] = s_jump_st_005bcb88;
  puVar3[2] = uVar2;
  puVar3[5] = &DAT_005bcb90;
  puVar3[4] = uVar2;
  puVar3[7] = s_jump_ed_005bcb98;
  puVar3[6] = uVar2;
  puVar3[9] = &DAT_005bcba0;
  puVar3[8] = uVar2;
  puVar3[0xb] = &DAT_005bcba8;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_damage_005bcbb0;
  puVar3[0xc] = uVar2;
  puVar3[0xf] = s_jitabata_005bcbb8;
  puVar3[0xe] = uVar2;
  puVar3[0x10] = uVar2;
  puVar3[0x11] = s_piyopiyo_005bcbc4;
  puVar3 = DAT_005bcbd4;
  DAT_005bcbd4[1] = s_Tektight_005bcbd8;
  *puVar3 = uVar2;
  uVar5 = func_00114608(DAT_005bcbe8,DAT_005bcbe4);
  piVar1[1] = (int)uVar5;
  uVar5 = func_00114608(DAT_005bcbec,(uint)((ulonglong)uVar5 >> 0x20));
  piVar1[2] = (int)uVar5;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar3 = func_004FC6FC(DAT_005bcbf0,0,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005bcbf4,puVar3);
}

