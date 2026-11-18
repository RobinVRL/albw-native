#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bac00;
extern int *DAT_005bac04;
extern int DAT_005bac14;
extern undefined4 DAT_005bac3c;
extern uint DAT_005bac40;
extern undefined4 DAT_005bac44;
extern undefined4 *DAT_005bac48;
extern undefined4 DAT_005bac4c;
extern undefined4 DAT_005bac50;
extern undefined4 DAT_005bac54;
extern undefined4 DAT_005bac58;
extern uint DAT_005bac5c;
extern undefined4 DAT_005bac60;
extern undefined4 *DAT_005bac64;
extern undefined4 DAT_005bac68;
extern undefined4 DAT_005bac6c;
extern undefined4 DAT_005bac70;
extern undefined4 DAT_005bac74;
extern uint DAT_005bac78;
extern uint DAT_005bac7c;
extern uint DAT_005bac80;
extern int *DAT_005bac84;
extern undefined DAT_005bac94;
extern undefined DAT_005bad48;
extern undefined DAT_005bad50;
extern undefined4 DAT_005bae5c;
extern undefined4 DAT_005bae6c;
extern int *DAT_005bae70;
extern undefined4 DAT_005bae88;
extern undefined4 *DAT_005bae8c;
extern undefined4 DAT_005bae90;
extern undefined4 *DAT_005bae94;
extern undefined DAT_005bae98;
extern int DAT_005baf14;
extern uint *DAT_005baf18;
extern undefined4 DAT_005baf1c;
extern undefined4 *DAT_005baf20;
extern undefined4 DAT_005baf24;
extern char s_DeguRock_005bae60[];
extern char s_EnemyDeguRock_005baf04[];
extern char s_N_ArrowB_00_005bac18[];
extern char s_N_ArrowL_00_005bac24[];
extern char s_N_ArrowR_00_005bac30[];
extern char s_N_ArrowT_00_005bac08[];
extern char s_attack_ed_005badc4[];
extern char s_attack_md_005badb8[];
extern char s_attack_shell_ed_005bad9c[];
extern char s_attack_shell_md_005bad8c[];
extern char s_attack_shell_st_005bad7c[];
extern char s_attack_st_005badac[];
extern char s_end_ed_005bae54[];
extern char s_end_st_005bae4c[];
extern char s_explosion_ed_005bae00[];
extern char s_explosion_loop_005bade0[];
extern char s_explosion_md_005badf0[];
extern char s_explosion_st_005badd0[];
extern char s_jump_ed_005bad74[];
extern char s_jump_md_005bad6c[];
extern char s_jump_st_005bad64[];
extern char s_lava_off_005bae74[];
extern char s_lava_on_005bae80[];
extern char s_opening_swim_explosion_ed_005bacf4[];
extern char s_opening_swim_explosion_md_005bacd8[];
extern char s_opening_swim_explosion_st_005bacbc[];
extern char s_opening_swim_up_005bacac[];
extern char s_piyopiyo_ed_005bae28[];
extern char s_piyopiyo_md_005bae1c[];
extern char s_piyopiyo_st_005bae10[];
extern char s_swim_damage_005bad58[];
extern char s_swim_eruption_005bac9c[];
extern char s_swim_wait_005bac88[];
extern char s_transform_fly_005bad24[];
extern char s_transform_swim_down_005bad10[];
extern char s_transform_touchdown_005bad34[];
extern char s_turn45_l_005bae34[];
extern char s_turn45_r_005bae40[];

// USA 005BA86C <- EU 005BA844 (Ghidra, non-matching)
// GLOBAL DAT_005bac00 int *
// GLOBAL DAT_005bac04 int *
// GLOBAL DAT_005bac14 int
// GLOBAL DAT_005bac3c undefined4
// GLOBAL DAT_005bac40 uint
// GLOBAL DAT_005bac44 undefined4
// GLOBAL DAT_005bac48 undefined4 *
// GLOBAL DAT_005bac4c undefined4
// GLOBAL DAT_005bac50 undefined4
// GLOBAL DAT_005bac54 undefined4
// GLOBAL DAT_005bac58 undefined4
// GLOBAL DAT_005bac5c uint
// GLOBAL DAT_005bac60 undefined4
// GLOBAL DAT_005bac64 undefined4 *
// GLOBAL DAT_005bac68 undefined4
// GLOBAL DAT_005bac6c undefined4
// GLOBAL DAT_005bac70 undefined4
// GLOBAL DAT_005bac74 undefined4
// GLOBAL DAT_005bac78 uint
// GLOBAL DAT_005bac7c uint
// GLOBAL DAT_005bac80 uint
// GLOBAL DAT_005bac84 int *
// GLOBAL DAT_005bac94 undefined
// GLOBAL DAT_005bad48 undefined
// GLOBAL DAT_005bad50 undefined
// GLOBAL DAT_005bae5c undefined4
// GLOBAL DAT_005bae6c undefined4
// GLOBAL DAT_005bae70 int *
// GLOBAL DAT_005bae88 undefined4
// GLOBAL DAT_005bae8c undefined4 *
// GLOBAL DAT_005bae90 undefined4
// GLOBAL DAT_005bae94 undefined4 *
// GLOBAL DAT_005bae98 undefined
// GLOBAL DAT_005baf14 int
// GLOBAL DAT_005baf18 uint *
// GLOBAL DAT_005baf1c undefined4
// GLOBAL DAT_005baf20 undefined4 *
// GLOBAL DAT_005baf24 undefined4
// GLOBAL s_DeguRock_005bae60 string
// GLOBAL s_EnemyDeguRock_005baf04 string
// GLOBAL s_N_ArrowB_00_005bac18 string
// GLOBAL s_N_ArrowL_00_005bac24 string
// GLOBAL s_N_ArrowR_00_005bac30 string
// GLOBAL s_N_ArrowT_00_005bac08 string
// GLOBAL s_attack_ed_005badc4 string
// GLOBAL s_attack_md_005badb8 string
// GLOBAL s_attack_shell_ed_005bad9c string
// GLOBAL s_attack_shell_md_005bad8c string
// GLOBAL s_attack_shell_st_005bad7c string
// GLOBAL s_attack_st_005badac string
// GLOBAL s_end_ed_005bae54 string
// GLOBAL s_end_st_005bae4c string
// GLOBAL s_explosion_ed_005bae00 string
// GLOBAL s_explosion_loop_005bade0 string
// GLOBAL s_explosion_md_005badf0 string
// GLOBAL s_explosion_st_005badd0 string
// GLOBAL s_jump_ed_005bad74 string
// GLOBAL s_jump_md_005bad6c string
// GLOBAL s_jump_st_005bad64 string
// GLOBAL s_lava_off_005bae74 string
// GLOBAL s_lava_on_005bae80 string
// GLOBAL s_opening_swim_explosion_ed_005bacf4 string
// GLOBAL s_opening_swim_explosion_md_005bacd8 string
// GLOBAL s_opening_swim_explosion_st_005bacbc string
// GLOBAL s_opening_swim_up_005bacac string
// GLOBAL s_piyopiyo_ed_005bae28 string
// GLOBAL s_piyopiyo_md_005bae1c string
// GLOBAL s_piyopiyo_st_005bae10 string
// GLOBAL s_swim_damage_005bad58 string
// GLOBAL s_swim_eruption_005bac9c string
// GLOBAL s_swim_wait_005bac88 string
// GLOBAL s_transform_fly_005bad24 string
// GLOBAL s_transform_swim_down_005bad10 string
// GLOBAL s_transform_touchdown_005bad34 string
// GLOBAL s_turn45_l_005bae34 string
// GLOBAL s_turn45_r_005bae40 string

undefined8 func_005BA86C(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_33 (*(undefined1 *)(albw_frame + 0xd))
  #define local_32 (*(undefined1 *)(albw_frame + 0xe))
  #define local_31 (*(undefined1 *)(albw_frame + 0xf))
  #define local_30 (*(undefined1 *)(albw_frame + 0x10))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  piVar1 = DAT_005bac00;
  DAT_005bac00[0x10] = -1;
  piVar1[0x11] = -1;
  piVar1[0x12] = 0;
  piVar1[0x13] = 0;
  iVar7 = DAT_005bac14;
  piVar2 = DAT_005bac04;
  DAT_005bac04[1] = (int)s_N_ArrowT_00_005bac08;
  *piVar2 = iVar7;
  piVar2[3] = (int)s_N_ArrowB_00_005bac18;
  piVar2[2] = iVar7;
  piVar2[5] = (int)s_N_ArrowL_00_005bac24;
  piVar2[4] = iVar7;
  piVar2[6] = iVar7;
  piVar2[7] = (int)s_N_ArrowR_00_005bac30;
  uVar8 = DAT_005bac54;
  uVar5 = DAT_005bac4c;
  puVar4 = DAT_005bac48;
  uVar6 = DAT_005bac44;
  uVar3 = DAT_005bac40;
  *DAT_005bac48 = DAT_005bac44;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  uVar6 = DAT_005bac50;
  puVar4[3] = DAT_005bac50;
  puVar4[4] = uVar8;
  puVar4[5] = uVar6;
  uVar6 = DAT_005bac58;
  puVar4[6] = DAT_005bac58;
  puVar4[7] = uVar8;
  puVar4[8] = uVar6;
  uVar10 = func_00114608(DAT_005bac5c,uVar3);
  piVar1[4] = (int)uVar10;
  uVar9 = DAT_005bac60;
  uVar10 = func_00114608(0,(uint)((ulonglong)uVar10 >> 0x20));
  piVar1[5] = (int)uVar10;
  uVar5 = DAT_005bac6c;
  uVar6 = DAT_005bac68;
  puVar4 = DAT_005bac64;
  *DAT_005bac64 = uVar9;
  puVar4[1] = uVar6;
  puVar4[2] = uVar5;
  uVar6 = DAT_005bac70;
  puVar4[3] = uVar9;
  puVar4[4] = uVar6;
  puVar4[5] = uVar6;
  uVar6 = DAT_005bac74;
  puVar4[6] = uVar9;
  puVar4[7] = uVar8;
  puVar4[8] = uVar6;
  uVar10 = func_00114608(DAT_005bac78,(uint)((ulonglong)uVar10 >> 0x20));
  piVar1[6] = (int)uVar10;
  uVar10 = func_00114608(DAT_005bac7c,(uint)((ulonglong)uVar10 >> 0x20));
  piVar1[7] = (int)uVar10;
  piVar1[8] = (int)uVar10;
  uVar10 = func_00114608(DAT_005bac80,(uint)(piVar1 + 8));
  piVar1[9] = (int)uVar10;
  piVar2 = DAT_005bac84;
  DAT_005bac84[1] = (int)s_swim_wait_005bac88;
  *piVar2 = iVar7;
  piVar2[3] = (int)&DAT_005bac94;
  piVar2[2] = iVar7;
  piVar2[5] = (int)s_swim_eruption_005bac9c;
  piVar2[4] = iVar7;
  piVar2[7] = (int)s_opening_swim_up_005bacac;
  piVar2[6] = iVar7;
  piVar2[9] = (int)s_opening_swim_explosion_st_005bacbc;
  piVar2[8] = iVar7;
  piVar2[0xb] = (int)s_opening_swim_explosion_md_005bacd8;
  piVar2[10] = iVar7;
  piVar2[0xd] = (int)s_opening_swim_explosion_ed_005bacf4;
  piVar2[0xc] = iVar7;
  piVar2[0xf] = (int)s_transform_swim_down_005bad10;
  piVar2[0xe] = iVar7;
  piVar2[0x11] = (int)s_transform_fly_005bad24;
  piVar2[0x10] = iVar7;
  piVar2[0x13] = (int)s_transform_touchdown_005bad34;
  piVar2[0x12] = iVar7;
  piVar2[0x15] = (int)&DAT_005bad48;
  piVar2[0x14] = iVar7;
  piVar2[0x17] = (int)&DAT_005bad50;
  piVar2[0x16] = iVar7;
  piVar2[0x19] = (int)s_swim_damage_005bad58;
  piVar2[0x18] = iVar7;
  piVar2[0x1b] = (int)s_jump_st_005bad64;
  piVar2[0x1a] = iVar7;
  piVar2[0x1d] = (int)s_jump_md_005bad6c;
  piVar2[0x1c] = iVar7;
  piVar2[0x1f] = (int)s_jump_ed_005bad74;
  piVar2[0x1e] = iVar7;
  piVar2[0x21] = (int)s_attack_shell_st_005bad7c;
  piVar2[0x20] = iVar7;
  piVar2[0x23] = (int)s_attack_shell_md_005bad8c;
  piVar2[0x22] = iVar7;
  piVar2[0x25] = (int)s_attack_shell_ed_005bad9c;
  piVar2[0x24] = iVar7;
  piVar2[0x27] = (int)s_attack_st_005badac;
  piVar2[0x26] = iVar7;
  piVar2[0x29] = (int)s_attack_md_005badb8;
  piVar2[0x28] = iVar7;
  piVar2[0x2b] = (int)s_attack_ed_005badc4;
  piVar2[0x2a] = iVar7;
  piVar2[0x2d] = (int)s_explosion_st_005badd0;
  piVar2[0x2c] = iVar7;
  piVar2[0x2f] = (int)s_explosion_loop_005bade0;
  piVar2[0x2e] = iVar7;
  piVar2[0x31] = (int)s_explosion_md_005badf0;
  piVar2[0x30] = iVar7;
  piVar2[0x33] = (int)s_explosion_ed_005bae00;
  piVar2[0x32] = iVar7;
  piVar2[0x35] = (int)s_piyopiyo_st_005bae10;
  piVar2[0x34] = iVar7;
  piVar2[0x37] = (int)s_piyopiyo_md_005bae1c;
  piVar2[0x36] = iVar7;
  piVar2[0x39] = (int)s_piyopiyo_ed_005bae28;
  piVar2[0x38] = iVar7;
  piVar2[0x3b] = (int)s_turn45_l_005bae34;
  piVar2[0x3a] = iVar7;
  piVar2[0x3d] = (int)s_turn45_r_005bae40;
  piVar2[0x3c] = iVar7;
  piVar2[0x3f] = (int)s_end_st_005bae4c;
  piVar2[0x3e] = iVar7;
  piVar2[0x40] = iVar7;
  piVar2[0x41] = (int)s_end_ed_005bae54;
  piVar1[0x15] = (int)s_DeguRock_005bae60;
  piVar1[0x14] = iVar7;
  piVar2 = DAT_005bae70;
  DAT_005bae70[1] = (int)s_lava_off_005bae74;
  *piVar2 = iVar7;
  piVar2[2] = iVar7;
  piVar2[3] = (int)s_lava_on_005bae80;
  local_34 = 0;
  local_33 = 0;
  local_3c = s_DeguRock_005bae60;
  local_32 = 0;
  local_31 = 3;
  local_30 = 3;
  local_40 = iVar7;
  func_004FC5F8(DAT_005bae8c,&local_40,0,1,0,(undefined4 *)&local_34,0xb);
  puVar4 = DAT_005bae94;
  DAT_005bae94[2] = DAT_005bae94 + 3;
  puVar4[1] = 5;
  *puVar4 = 0;
  local_1c = &DAT_005bae98;
  local_20 = iVar7;
  local_24 = s_EnemyDeguRock_005baf04;
  local_28 = iVar7;
  iVar7 = *piVar1;
  if (*piVar1 == 0) {
    iVar7 = DAT_005baf14;
  }
  uVar6 = func_0019B51C(DAT_005baf20,DAT_005baf1c,*DAT_005baf18,(int)&local_28,DAT_005bae94,
                        &local_20,iVar7);
  return CONCAT44(DAT_005baf24,uVar6);
}

