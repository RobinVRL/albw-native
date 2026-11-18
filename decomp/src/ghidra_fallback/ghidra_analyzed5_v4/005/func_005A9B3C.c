#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a9d00;
extern undefined4 *DAT_005a9d04;
extern undefined DAT_005a9d08;
extern undefined4 DAT_005a9d10;
extern int DAT_005a9d20;
extern uint *DAT_005a9d24;
extern undefined4 DAT_005a9d28;
extern undefined4 *DAT_005a9d2c;
extern undefined4 DAT_005a9d30;
extern undefined4 DAT_005a9d34;
extern undefined4 *DAT_005a9d38;
extern undefined DAT_005a9d3c;
extern undefined4 DAT_005a9e04;
extern undefined4 *DAT_005a9e08;
extern undefined4 DAT_005a9e0c;
extern char s_EnemyGapura_005a9d14[];
extern char s_attack_l_ed_005a9d74[];
extern char s_attack_l_md_005a9d68[];
extern char s_attack_l_st_005a9d5c[];
extern char s_attack_r_ed_005a9d98[];
extern char s_attack_r_md_005a9d8c[];
extern char s_attack_r_st_005a9d80[];
extern char s_damage_005a9dd4[];
extern char s_dead_ed_005a9df0[];
extern char s_dead_st_005a9de8[];
extern char s_jitabata_005a9df8[];
extern char s_piyopiyo_005a9ddc[];
extern char s_turn_l_ed_005a9db0[];
extern char s_turn_l_st_005a9da4[];
extern char s_turn_r_ed_005a9dc8[];
extern char s_turn_r_st_005a9dbc[];
extern char s_walk_ed_005a9d54[];
extern char s_walk_md_005a9d4c[];
extern char s_walk_st_005a9d44[];

// USA 005A9B3C <- EU 005A9B14 (Ghidra, non-matching)
// GLOBAL DAT_005a9d00 int *
// GLOBAL DAT_005a9d04 undefined4 *
// GLOBAL DAT_005a9d08 undefined
// GLOBAL DAT_005a9d10 undefined4
// GLOBAL DAT_005a9d20 int
// GLOBAL DAT_005a9d24 uint *
// GLOBAL DAT_005a9d28 undefined4
// GLOBAL DAT_005a9d2c undefined4 *
// GLOBAL DAT_005a9d30 undefined4
// GLOBAL DAT_005a9d34 undefined4
// GLOBAL DAT_005a9d38 undefined4 *
// GLOBAL DAT_005a9d3c undefined
// GLOBAL DAT_005a9e04 undefined4
// GLOBAL DAT_005a9e08 undefined4 *
// GLOBAL DAT_005a9e0c undefined4
// GLOBAL s_EnemyGapura_005a9d14 string
// GLOBAL s_attack_l_ed_005a9d74 string
// GLOBAL s_attack_l_md_005a9d68 string
// GLOBAL s_attack_l_st_005a9d5c string
// GLOBAL s_attack_r_ed_005a9d98 string
// GLOBAL s_attack_r_md_005a9d8c string
// GLOBAL s_attack_r_st_005a9d80 string
// GLOBAL s_damage_005a9dd4 string
// GLOBAL s_dead_ed_005a9df0 string
// GLOBAL s_dead_st_005a9de8 string
// GLOBAL s_jitabata_005a9df8 string
// GLOBAL s_piyopiyo_005a9ddc string
// GLOBAL s_turn_l_ed_005a9db0 string
// GLOBAL s_turn_l_st_005a9da4 string
// GLOBAL s_turn_r_ed_005a9dc8 string
// GLOBAL s_turn_r_st_005a9dbc string
// GLOBAL s_walk_ed_005a9d54 string
// GLOBAL s_walk_md_005a9d4c string
// GLOBAL s_walk_st_005a9d44 string

undefined8 func_005A9B3C(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
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
  piVar1 = DAT_005a9d00;
  DAT_005a9d00[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar3 = DAT_005a9d04;
  DAT_005a9d04[2] = DAT_005a9d04 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  uVar2 = DAT_005a9d10;
  local_14 = &DAT_005a9d08;
  local_18 = DAT_005a9d10;
  local_1c = s_EnemyGapura_005a9d14;
  local_20 = DAT_005a9d10;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a9d20;
  }
  func_0019B51C(DAT_005a9d2c,DAT_005a9d28,*DAT_005a9d24,(int)&local_20,DAT_005a9d04,&local_18,iVar4)
  ;
  puVar3 = DAT_005a9d38;
  DAT_005a9d38[1] = &DAT_005a9d3c;
  *puVar3 = uVar2;
  puVar3[3] = s_walk_st_005a9d44;
  puVar3[2] = uVar2;
  puVar3[5] = s_walk_md_005a9d4c;
  puVar3[4] = uVar2;
  puVar3[7] = s_walk_ed_005a9d54;
  puVar3[6] = uVar2;
  puVar3[9] = s_attack_l_st_005a9d5c;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_attack_l_md_005a9d68;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_attack_l_ed_005a9d74;
  puVar3[0xc] = uVar2;
  puVar3[0xf] = s_attack_r_st_005a9d80;
  puVar3[0xe] = uVar2;
  puVar3[0x11] = s_attack_r_md_005a9d8c;
  puVar3[0x10] = uVar2;
  puVar3[0x13] = s_attack_r_ed_005a9d98;
  puVar3[0x12] = uVar2;
  puVar3[0x15] = s_turn_l_st_005a9da4;
  puVar3[0x14] = uVar2;
  puVar3[0x17] = s_turn_l_ed_005a9db0;
  puVar3[0x16] = uVar2;
  puVar3[0x19] = s_turn_r_st_005a9dbc;
  puVar3[0x18] = uVar2;
  puVar3[0x1b] = s_turn_r_ed_005a9dc8;
  puVar3[0x1a] = uVar2;
  puVar3[0x1d] = s_damage_005a9dd4;
  puVar3[0x1c] = uVar2;
  puVar3[0x1f] = s_piyopiyo_005a9ddc;
  puVar3[0x1e] = uVar2;
  puVar3[0x21] = s_dead_st_005a9de8;
  puVar3[0x20] = uVar2;
  puVar3[0x23] = s_dead_ed_005a9df0;
  puVar3[0x22] = uVar2;
  puVar3[0x24] = uVar2;
  puVar3[0x25] = s_jitabata_005a9df8;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar3 = func_004FC6FC(DAT_005a9e08,0,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005a9e0c,puVar3);
}

