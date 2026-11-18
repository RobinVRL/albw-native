#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int *DAT_005bce64;
extern undefined4 DAT_005bce68;
extern undefined4 *DAT_005bce6c;
extern undefined4 DAT_005bce70;
extern undefined4 DAT_005bce74;
extern undefined4 DAT_005bce78;
extern undefined4 DAT_005bce7c;
extern undefined4 DAT_005bce80;
extern undefined4 DAT_005bce84;
extern undefined4 DAT_005bce88;
extern undefined4 DAT_005bce8c;
extern undefined4 DAT_005bce90;
extern undefined4 DAT_005bce94;
extern undefined DAT_005bce98;
extern int DAT_005bcea0;
extern undefined DAT_005bcf7c;
extern undefined DAT_005bcf8c;
extern undefined4 DAT_005bcfb4;
extern undefined4 DAT_005bcfb8;
extern int *DAT_005bcfbc;
extern undefined4 DAT_005bcfcc;
extern undefined4 DAT_005bcfd0;
extern undefined4 *DAT_005bcfd4;
extern undefined DAT_005bcfd8;
extern int DAT_005bcff4;
extern uint *DAT_005bcff8;
extern undefined4 DAT_005bcffc;
extern undefined4 DAT_005bd000;
extern char s_EnemyTogegoma_005bcfe4[];
extern char s_damage01_005bcea4[];
extern char s_damage02_005bceb0[];
extern char s_damage03_005bcebc[];
extern char s_damage_large_005bcf50[];
extern char s_end_ed_005bcf9c[];
extern char s_end_st_005bcf94[];
extern char s_eye_open_005bcfc0[];
extern char s_jump_ed_005bcfac[];
extern char s_jump_st_005bcfa4[];
extern char s_opening_005bcf84[];
extern char s_piyopiyo_005bcf60[];
extern char s_piyopiyo_eye_005bcf6c[];
extern char s_transform_01to03_005bcec8[];
extern char s_transform_01to05_005bcedc[];
extern char s_transform_down_02to01_005bcf38[];
extern char s_transform_down_03to02_005bcf20[];
extern char s_transform_down_04to03_005bcf08[];
extern char s_transform_down_05to04_005bcef0[];

// USA 005BCC20 <- EU 005BCBF8 (Ghidra, non-matching)
// GLOBAL DAT_005bce64 int *
// GLOBAL DAT_005bce68 undefined4
// GLOBAL DAT_005bce6c undefined4 *
// GLOBAL DAT_005bce70 undefined4
// GLOBAL DAT_005bce74 undefined4
// GLOBAL DAT_005bce78 undefined4
// GLOBAL DAT_005bce7c undefined4
// GLOBAL DAT_005bce80 undefined4
// GLOBAL DAT_005bce84 undefined4
// GLOBAL DAT_005bce88 undefined4
// GLOBAL DAT_005bce8c undefined4
// GLOBAL DAT_005bce90 undefined4
// GLOBAL DAT_005bce94 undefined4
// GLOBAL DAT_005bce98 undefined
// GLOBAL DAT_005bcea0 int
// GLOBAL DAT_005bcf7c undefined
// GLOBAL DAT_005bcf8c undefined
// GLOBAL DAT_005bcfb4 undefined4
// GLOBAL DAT_005bcfb8 undefined4
// GLOBAL DAT_005bcfbc int *
// GLOBAL DAT_005bcfcc undefined4
// GLOBAL DAT_005bcfd0 undefined4
// GLOBAL DAT_005bcfd4 undefined4 *
// GLOBAL DAT_005bcfd8 undefined
// GLOBAL DAT_005bcff4 int
// GLOBAL DAT_005bcff8 uint *
// GLOBAL DAT_005bcffc undefined4
// GLOBAL DAT_005bd000 undefined4
// GLOBAL s_EnemyTogegoma_005bcfe4 string
// GLOBAL s_damage01_005bcea4 string
// GLOBAL s_damage02_005bceb0 string
// GLOBAL s_damage03_005bcebc string
// GLOBAL s_damage_large_005bcf50 string
// GLOBAL s_end_ed_005bcf9c string
// GLOBAL s_end_st_005bcf94 string
// GLOBAL s_eye_open_005bcfc0 string
// GLOBAL s_jump_ed_005bcfac string
// GLOBAL s_jump_st_005bcfa4 string
// GLOBAL s_opening_005bcf84 string
// GLOBAL s_piyopiyo_005bcf60 string
// GLOBAL s_piyopiyo_eye_005bcf6c string
// GLOBAL s_transform_01to03_005bcec8 string
// GLOBAL s_transform_01to05_005bcedc string
// GLOBAL s_transform_down_02to01_005bcf38 string
// GLOBAL s_transform_down_03to02_005bcf20 string
// GLOBAL s_transform_down_04to03_005bcf08 string
// GLOBAL s_transform_down_05to04_005bcef0 string

undefined8 func_005BCC20(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined * *)(albw_frame + 0xc))
  piVar1 = DAT_005bce64;
  DAT_005bce64[2] = -1;
  piVar1[3] = -1;
  uVar6 = DAT_005bce68;
  piVar1[4] = 0;
  piVar1[5] = 0;
  local_18 = DAT_005bcea0;
  uVar4 = DAT_005bce7c;
  uVar3 = DAT_005bce70;
  puVar2 = DAT_005bce6c;
  *DAT_005bce6c = uVar6;
  puVar2[1] = uVar3;
  puVar2[2] = uVar6;
  uVar3 = DAT_005bce78;
  uVar6 = DAT_005bce74;
  puVar2[3] = DAT_005bce74;
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  uVar3 = DAT_005bce80;
  puVar2[6] = uVar6;
  uVar4 = DAT_005bce84;
  puVar2[7] = uVar3;
  puVar2[8] = uVar4;
  uVar3 = DAT_005bce88;
  puVar2[9] = uVar6;
  uVar4 = DAT_005bce8c;
  puVar2[10] = uVar3;
  puVar2[0xb] = uVar4;
  uVar4 = DAT_005bce94;
  uVar3 = DAT_005bce90;
  puVar2[0xc] = uVar6;
  puVar2[0xd] = uVar3;
  puVar2[0xe] = uVar4;
  puVar2[0x10] = &DAT_005bce98;
  puVar2[0xf] = local_18;
  puVar2[0x12] = s_damage01_005bcea4;
  puVar2[0x11] = local_18;
  puVar2[0x14] = s_damage02_005bceb0;
  puVar2[0x13] = local_18;
  puVar2[0x16] = s_damage03_005bcebc;
  puVar2[0x15] = local_18;
  puVar2[0x18] = s_transform_01to03_005bcec8;
  puVar2[0x17] = local_18;
  puVar2[0x1a] = s_transform_01to05_005bcedc;
  puVar2[0x19] = local_18;
  puVar2[0x1c] = s_transform_down_05to04_005bcef0;
  puVar2[0x1b] = local_18;
  puVar2[0x1e] = s_transform_down_04to03_005bcf08;
  puVar2[0x1d] = local_18;
  puVar2[0x20] = s_transform_down_03to02_005bcf20;
  puVar2[0x1f] = local_18;
  puVar2[0x22] = s_transform_down_02to01_005bcf38;
  puVar2[0x21] = local_18;
  puVar2[0x24] = s_damage_large_005bcf50;
  puVar2[0x23] = local_18;
  puVar2[0x26] = s_piyopiyo_005bcf60;
  puVar2[0x25] = local_18;
  puVar2[0x28] = s_piyopiyo_eye_005bcf6c;
  puVar2[0x27] = local_18;
  puVar2[0x2a] = &DAT_005bcf7c;
  puVar2[0x29] = local_18;
  puVar2[0x2c] = s_opening_005bcf84;
  puVar2[0x2b] = local_18;
  puVar2[0x2e] = &DAT_005bcf8c;
  puVar2[0x2d] = local_18;
  puVar2[0x30] = s_end_st_005bcf94;
  puVar2[0x2f] = local_18;
  puVar2[0x32] = s_end_ed_005bcf9c;
  puVar2[0x31] = local_18;
  puVar2[0x34] = s_jump_st_005bcfa4;
  puVar2[0x33] = local_18;
  puVar2[0x35] = local_18;
  puVar2[0x36] = s_jump_ed_005bcfac;
  piVar5 = DAT_005bcfbc;
  DAT_005bcfbc[1] = (int)s_eye_open_005bcfc0;
  *piVar5 = local_18;
  piVar5[2] = local_18;
  piVar5[3] = (int)s_damage_large_005bcf50;
  piVar1[7] = (int)s_end_st_005bcf94;
  piVar1[6] = local_18;
  puVar2 = DAT_005bcfd4;
  puVar8 = DAT_005bcfd4 + 3;
  *DAT_005bcfd4 = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar8;
  local_14 = &DAT_005bcfd8;
  local_1c = s_EnemyTogegoma_005bcfe4;
  local_20 = local_18;
  iVar7 = *piVar1;
  if (*piVar1 == 0) {
    iVar7 = DAT_005bcff4;
  }
  uVar6 = func_0019B51C(DAT_005bcfd4 + 8,DAT_005bcffc,*DAT_005bcff8,(int)&local_20,DAT_005bcfd4,
                        &local_18,iVar7);
  return CONCAT44(DAT_005bd000,uVar6);
}

