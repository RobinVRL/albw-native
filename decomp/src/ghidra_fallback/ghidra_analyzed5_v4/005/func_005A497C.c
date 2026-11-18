#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a4b9c;
extern undefined4 *DAT_005a4ba0;
extern undefined DAT_005a4ba4;
extern undefined4 DAT_005a4bb0;
extern int DAT_005a4bc0;
extern uint *DAT_005a4bc4;
extern undefined4 DAT_005a4bc8;
extern undefined4 *DAT_005a4bcc;
extern undefined4 DAT_005a4bd0;
extern undefined4 DAT_005a4bd4;
extern undefined4 *DAT_005a4bd8;
extern undefined DAT_005a4bdc;
extern int DAT_005a4c00;
extern uint *DAT_005a4c04;
extern undefined4 DAT_005a4c08;
extern undefined4 *DAT_005a4c0c;
extern undefined4 *DAT_005a4c10;
extern undefined DAT_005a4c14;
extern undefined DAT_005a4c1c;
extern undefined DAT_005a4c2c;
extern undefined4 DAT_005a4cb0;
extern undefined4 *DAT_005a4cb4;
extern undefined DAT_005a4cb8;
extern undefined4 DAT_005a4cc0;
extern undefined4 *DAT_005a4cc4;
extern undefined4 DAT_005a4cc8;
extern char s_EnemyHinox_005a4bb4[];
extern char s_EnemyIceHinox_005a4bf0[];
extern char s_damage_005a4c50[];
extern char s_dead_back_ed_005a4c68[];
extern char s_dead_back_st_005a4c58[];
extern char s_dead_front_ed_005a4c88[];
extern char s_dead_front_st_005a4c78[];
extern char s_jitabata_005a4c98[];
extern char s_piyopiyo_005a4ca4[];
extern char s_run_ed_005a4c30[];
extern char s_run_st_005a4c24[];
extern char s_throw_005a4c48[];
extern char s_turn_l_005a4c38[];
extern char s_turn_r_005a4c40[];

// USA 005A497C <- EU 005A4954 (Ghidra, non-matching)
// GLOBAL DAT_005a4b9c int *
// GLOBAL DAT_005a4ba0 undefined4 *
// GLOBAL DAT_005a4ba4 undefined
// GLOBAL DAT_005a4bb0 undefined4
// GLOBAL DAT_005a4bc0 int
// GLOBAL DAT_005a4bc4 uint *
// GLOBAL DAT_005a4bc8 undefined4
// GLOBAL DAT_005a4bcc undefined4 *
// GLOBAL DAT_005a4bd0 undefined4
// GLOBAL DAT_005a4bd4 undefined4
// GLOBAL DAT_005a4bd8 undefined4 *
// GLOBAL DAT_005a4bdc undefined
// GLOBAL DAT_005a4c00 int
// GLOBAL DAT_005a4c04 uint *
// GLOBAL DAT_005a4c08 undefined4
// GLOBAL DAT_005a4c0c undefined4 *
// GLOBAL DAT_005a4c10 undefined4 *
// GLOBAL DAT_005a4c14 undefined
// GLOBAL DAT_005a4c1c undefined
// GLOBAL DAT_005a4c2c undefined
// GLOBAL DAT_005a4cb0 undefined4
// GLOBAL DAT_005a4cb4 undefined4 *
// GLOBAL DAT_005a4cb8 undefined
// GLOBAL DAT_005a4cc0 undefined4
// GLOBAL DAT_005a4cc4 undefined4 *
// GLOBAL DAT_005a4cc8 undefined4
// GLOBAL s_EnemyHinox_005a4bb4 string
// GLOBAL s_EnemyIceHinox_005a4bf0 string
// GLOBAL s_damage_005a4c50 string
// GLOBAL s_dead_back_ed_005a4c68 string
// GLOBAL s_dead_back_st_005a4c58 string
// GLOBAL s_dead_front_ed_005a4c88 string
// GLOBAL s_dead_front_st_005a4c78 string
// GLOBAL s_jitabata_005a4c98 string
// GLOBAL s_piyopiyo_005a4ca4 string
// GLOBAL s_run_ed_005a4c30 string
// GLOBAL s_run_st_005a4c24 string
// GLOBAL s_throw_005a4c48 string
// GLOBAL s_turn_l_005a4c38 string
// GLOBAL s_turn_r_005a4c40 string

undefined8 func_005A497C(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
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
  piVar1 = DAT_005a4b9c;
  DAT_005a4b9c[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  uVar2 = DAT_005a4bb0;
  puVar3 = DAT_005a4ba0;
  DAT_005a4ba0[2] = DAT_005a4ba0 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_24 = &DAT_005a4ba4;
  local_28 = uVar2;
  local_2c = s_EnemyHinox_005a4bb4;
  local_30 = uVar2;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a4bc0;
  }
  func_0019B51C(DAT_005a4bcc,DAT_005a4bc8,*DAT_005a4bc4,(int)&local_30,DAT_005a4ba0,&local_28,iVar4)
  ;
  puVar3 = DAT_005a4bd8;
  puVar5 = DAT_005a4bd8 + 3;
  DAT_005a4bd8[1] = 5;
  puVar3[2] = puVar5;
  *puVar3 = 0;
  local_14 = &DAT_005a4bdc;
  local_18 = uVar2;
  local_1c = s_EnemyIceHinox_005a4bf0;
  local_20 = uVar2;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005a4c00;
  }
  func_0019B51C(DAT_005a4c0c,DAT_005a4c08,*DAT_005a4c04,(int)&local_20,DAT_005a4bd8,&local_18,iVar4)
  ;
  puVar3 = DAT_005a4c10;
  DAT_005a4c10[1] = &DAT_005a4c14;
  *puVar3 = uVar2;
  puVar3[3] = &DAT_005a4c1c;
  puVar3[2] = uVar2;
  puVar3[5] = s_run_st_005a4c24;
  puVar3[4] = uVar2;
  puVar3[7] = &DAT_005a4c2c;
  puVar3[6] = uVar2;
  puVar3[9] = s_run_ed_005a4c30;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_turn_l_005a4c38;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_turn_r_005a4c40;
  puVar3[0xc] = uVar2;
  puVar3[0xf] = s_throw_005a4c48;
  puVar3[0xe] = uVar2;
  puVar3[0x11] = s_damage_005a4c50;
  puVar3[0x10] = uVar2;
  puVar3[0x13] = s_dead_back_st_005a4c58;
  puVar3[0x12] = uVar2;
  puVar3[0x15] = s_dead_back_ed_005a4c68;
  puVar3[0x14] = uVar2;
  puVar3[0x17] = s_dead_front_st_005a4c78;
  puVar3[0x16] = uVar2;
  puVar3[0x19] = s_dead_front_ed_005a4c88;
  puVar3[0x18] = uVar2;
  puVar3[0x1b] = s_jitabata_005a4c98;
  puVar3[0x1a] = uVar2;
  puVar3[0x1c] = uVar2;
  puVar3[0x1d] = s_piyopiyo_005a4ca4;
  puVar3 = DAT_005a4cb4;
  DAT_005a4cb4[1] = &DAT_005a4cb8;
  *puVar3 = uVar2;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  puVar3 = func_004FC6FC(DAT_005a4cc4,0,1,0,0,(undefined4 *)&local_38,0xb);
  return CONCAT44(DAT_005a4cc8,puVar3);
}

