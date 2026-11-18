#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005aabf8;
extern undefined4 *DAT_005aabfc;
extern undefined4 DAT_005aac08;
extern undefined DAT_005aac14;
extern undefined4 DAT_005aac40;
extern uint DAT_005aac44;
extern uint DAT_005aac48;
extern uint DAT_005aac4c;
extern uint DAT_005aac50;
extern undefined4 *DAT_005aac54;
extern undefined4 DAT_005aac58;
extern undefined4 *DAT_005aac5c;
extern undefined DAT_005aac60;
extern int DAT_005aac78;
extern uint *DAT_005aac7c;
extern undefined4 DAT_005aac80;
extern undefined4 *DAT_005aac84;
extern undefined4 DAT_005aac88;
extern char s_EnemyTainon_005aac6c[];
extern char s_awake_005aac0c[];
extern char s_damage_fire_005aac34[];
extern char s_freeze_005aac00[];
extern char s_walk_sideL_005aac1c[];
extern char s_walk_sideR_005aac28[];

// USA 005AAA98 <- EU 005AAA70 (Ghidra, non-matching)
// GLOBAL DAT_005aabf8 int *
// GLOBAL DAT_005aabfc undefined4 *
// GLOBAL DAT_005aac08 undefined4
// GLOBAL DAT_005aac14 undefined
// GLOBAL DAT_005aac40 undefined4
// GLOBAL DAT_005aac44 uint
// GLOBAL DAT_005aac48 uint
// GLOBAL DAT_005aac4c uint
// GLOBAL DAT_005aac50 uint
// GLOBAL DAT_005aac54 undefined4 *
// GLOBAL DAT_005aac58 undefined4
// GLOBAL DAT_005aac5c undefined4 *
// GLOBAL DAT_005aac60 undefined
// GLOBAL DAT_005aac78 int
// GLOBAL DAT_005aac7c uint *
// GLOBAL DAT_005aac80 undefined4
// GLOBAL DAT_005aac84 undefined4 *
// GLOBAL DAT_005aac88 undefined4
// GLOBAL s_EnemyTainon_005aac6c string
// GLOBAL s_awake_005aac0c string
// GLOBAL s_damage_fire_005aac34 string
// GLOBAL s_freeze_005aac00 string
// GLOBAL s_walk_sideL_005aac1c string
// GLOBAL s_walk_sideR_005aac28 string

undefined8 func_005AAA98(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
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
  piVar1 = DAT_005aabf8;
  DAT_005aabf8[4] = -1;
  piVar1[5] = -1;
  uVar3 = DAT_005aac08;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005aabfc;
  DAT_005aabfc[1] = s_freeze_005aac00;
  *puVar2 = uVar3;
  puVar2[3] = s_awake_005aac0c;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005aac14;
  puVar2[4] = uVar3;
  puVar2[7] = s_walk_sideL_005aac1c;
  puVar2[6] = uVar3;
  puVar2[9] = s_walk_sideR_005aac28;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_damage_fire_005aac34;
  puVar2[10] = uVar3;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = s_damage_fire_005aac34;
  uVar6 = func_00114608(DAT_005aac48,DAT_005aac44);
  piVar1[1] = (int)uVar6;
  uVar6 = func_00114608(DAT_005aac4c,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[2] = (int)uVar6;
  uVar6 = func_00114608(DAT_005aac50,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[3] = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005aac54,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005aac5c;
  puVar5 = DAT_005aac5c + 3;
  DAT_005aac5c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005aac60;
  local_18 = uVar3;
  local_1c = s_EnemyTainon_005aac6c;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005aac78;
  }
  uVar3 = func_0019B51C(DAT_005aac84,DAT_005aac80,*DAT_005aac7c,(int)&local_20,DAT_005aac5c,
                        &local_18,iVar4);
  return CONCAT44(DAT_005aac88,uVar3);
}

