#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int DAT_005aa54c;
extern int *DAT_005aa550;
extern int DAT_005aa560;
extern undefined4 DAT_005aa588;
extern undefined4 DAT_005aa58c;
extern undefined4 *DAT_005aa590;
extern undefined4 DAT_005aa594;
extern undefined4 DAT_005aa598;
extern undefined4 DAT_005aa59c;
extern undefined DAT_005aa600;
extern undefined4 DAT_005aa634;
extern int *DAT_005aa638;
extern undefined4 DAT_005aa71c;
extern int *DAT_005aa720;
extern undefined4 DAT_005aa754;
extern undefined4 *DAT_005aa768;
extern undefined4 DAT_005aa76c;
extern undefined4 *DAT_005aa770;
extern undefined DAT_005aa774;
extern int DAT_005aa78c;
extern uint *DAT_005aa790;
extern undefined4 DAT_005aa794;
extern undefined4 *DAT_005aa798;
extern undefined4 DAT_005aa79c;
extern char s_EnemyMedium_005aa780[];
extern char s_FlatMediumSide_walkL_005aa724[];
extern char s_FlatMediumSide_walkR_005aa73c[];
extern char s_Medium_Enemy_005aa758[];
extern char s_N_ArrowB_00_005aa564[];
extern char s_N_ArrowL_00_005aa570[];
extern char s_N_ArrowR_00_005aa57c[];
extern char s_N_ArrowT_00_005aa554[];
extern char s_angry_005aa620[];
extern char s_angry_ed_005aa628[];
extern char s_angry_ed_stick_005aa70c[];
extern char s_angry_st_005aa614[];
extern char s_angry_st_stick_005aa6f0[];
extern char s_angry_stick_005aa700[];
extern char s_damage_005aa5f8[];
extern char s_damage_stick_005aa6b8[];
extern char s_emerge_ed_005aa5e4[];
extern char s_emerge_ed_stick_005aa698[];
extern char s_emerge_st_005aa5d8[];
extern char s_emerge_st_stick_005aa688[];
extern char s_escape_ed_005aa5cc[];
extern char s_escape_ed_stick_005aa678[];
extern char s_flinch_005aa5f0[];
extern char s_flinch_stick_005aa6a8[];
extern char s_guard_005aa60c[];
extern char s_guard_stick_005aa6e4[];
extern char s_hit_stick_005aa6c8[];
extern char s_magic_005aa5ac[];
extern char s_magic_stick_005aa64c[];
extern char s_npc_wait_005aa5a0[];
extern char s_npc_wait_stick_005aa63c[];
extern char s_revival_005aa604[];
extern char s_revival_stick_005aa6d4[];
extern char s_towall_ed_005aa5c0[];
extern char s_towall_ed_stick_005aa668[];
extern char s_towall_st_005aa5b4[];
extern char s_towall_st_stick_005aa658[];

// USA 005AA220 <- EU 005AA1F8 (Ghidra, non-matching)
// GLOBAL DAT_005aa54c int
// GLOBAL DAT_005aa550 int *
// GLOBAL DAT_005aa560 int
// GLOBAL DAT_005aa588 undefined4
// GLOBAL DAT_005aa58c undefined4
// GLOBAL DAT_005aa590 undefined4 *
// GLOBAL DAT_005aa594 undefined4
// GLOBAL DAT_005aa598 undefined4
// GLOBAL DAT_005aa59c undefined4
// GLOBAL DAT_005aa600 undefined
// GLOBAL DAT_005aa634 undefined4
// GLOBAL DAT_005aa638 int *
// GLOBAL DAT_005aa71c undefined4
// GLOBAL DAT_005aa720 int *
// GLOBAL DAT_005aa754 undefined4
// GLOBAL DAT_005aa768 undefined4 *
// GLOBAL DAT_005aa76c undefined4
// GLOBAL DAT_005aa770 undefined4 *
// GLOBAL DAT_005aa774 undefined
// GLOBAL DAT_005aa78c int
// GLOBAL DAT_005aa790 uint *
// GLOBAL DAT_005aa794 undefined4
// GLOBAL DAT_005aa798 undefined4 *
// GLOBAL DAT_005aa79c undefined4
// GLOBAL s_EnemyMedium_005aa780 string
// GLOBAL s_FlatMediumSide_walkL_005aa724 string
// GLOBAL s_FlatMediumSide_walkR_005aa73c string
// GLOBAL s_Medium_Enemy_005aa758 string
// GLOBAL s_N_ArrowB_00_005aa564 string
// GLOBAL s_N_ArrowL_00_005aa570 string
// GLOBAL s_N_ArrowR_00_005aa57c string
// GLOBAL s_N_ArrowT_00_005aa554 string
// GLOBAL s_angry_005aa620 string
// GLOBAL s_angry_ed_005aa628 string
// GLOBAL s_angry_ed_stick_005aa70c string
// GLOBAL s_angry_st_005aa614 string
// GLOBAL s_angry_st_stick_005aa6f0 string
// GLOBAL s_angry_stick_005aa700 string
// GLOBAL s_damage_005aa5f8 string
// GLOBAL s_damage_stick_005aa6b8 string
// GLOBAL s_emerge_ed_005aa5e4 string
// GLOBAL s_emerge_ed_stick_005aa698 string
// GLOBAL s_emerge_st_005aa5d8 string
// GLOBAL s_emerge_st_stick_005aa688 string
// GLOBAL s_escape_ed_005aa5cc string
// GLOBAL s_escape_ed_stick_005aa678 string
// GLOBAL s_flinch_005aa5f0 string
// GLOBAL s_flinch_stick_005aa6a8 string
// GLOBAL s_guard_005aa60c string
// GLOBAL s_guard_stick_005aa6e4 string
// GLOBAL s_hit_stick_005aa6c8 string
// GLOBAL s_magic_005aa5ac string
// GLOBAL s_magic_stick_005aa64c string
// GLOBAL s_npc_wait_005aa5a0 string
// GLOBAL s_npc_wait_stick_005aa63c string
// GLOBAL s_revival_005aa604 string
// GLOBAL s_revival_stick_005aa6d4 string
// GLOBAL s_towall_ed_005aa5c0 string
// GLOBAL s_towall_ed_stick_005aa668 string
// GLOBAL s_towall_st_005aa5b4 string
// GLOBAL s_towall_st_stick_005aa658 string

undefined8 func_005AA220(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined1 *)(albw_frame + 0x0))
  #define local_2f (*(undefined1 *)(albw_frame + 0x1))
  #define local_2e (*(undefined1 *)(albw_frame + 0x2))
  #define local_2d (*(undefined1 *)(albw_frame + 0x3))
  #define local_2c (*(undefined1 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  iVar1 = DAT_005aa54c;
  *(undefined4 *)(DAT_005aa54c + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  iVar6 = DAT_005aa560;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  piVar2 = DAT_005aa550;
  DAT_005aa550[1] = (int)s_N_ArrowT_00_005aa554;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_N_ArrowB_00_005aa564;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_N_ArrowL_00_005aa570;
  piVar2[4] = iVar6;
  piVar2[6] = iVar6;
  piVar2[7] = (int)s_N_ArrowR_00_005aa57c;
  uVar4 = DAT_005aa59c;
  uVar5 = DAT_005aa598;
  puVar3 = DAT_005aa590;
  *DAT_005aa590 = DAT_005aa594;
  puVar3[1] = uVar5;
  puVar3[2] = uVar4;
  puVar3[4] = s_npc_wait_005aa5a0;
  puVar3[3] = iVar6;
  puVar3[6] = s_npc_wait_005aa5a0 + 4;
  puVar3[5] = iVar6;
  puVar3[8] = s_magic_005aa5ac;
  puVar3[7] = iVar6;
  puVar3[10] = s_towall_st_005aa5b4;
  puVar3[9] = iVar6;
  puVar3[0xc] = s_towall_ed_005aa5c0;
  puVar3[0xb] = iVar6;
  puVar3[0xe] = s_escape_ed_005aa5cc;
  puVar3[0xd] = iVar6;
  puVar3[0x10] = s_npc_wait_005aa5a0 + 4;
  puVar3[0xf] = iVar6;
  puVar3[0x12] = s_emerge_st_005aa5d8;
  puVar3[0x11] = iVar6;
  puVar3[0x14] = s_emerge_ed_005aa5e4;
  puVar3[0x13] = iVar6;
  puVar3[0x16] = s_flinch_005aa5f0;
  puVar3[0x15] = iVar6;
  puVar3[0x18] = s_damage_005aa5f8;
  puVar3[0x17] = iVar6;
  puVar3[0x1a] = &DAT_005aa600;
  puVar3[0x19] = iVar6;
  puVar3[0x1c] = s_revival_005aa604;
  puVar3[0x1b] = iVar6;
  puVar3[0x1e] = s_guard_005aa60c;
  puVar3[0x1d] = iVar6;
  puVar3[0x20] = s_angry_st_005aa614;
  puVar3[0x1f] = iVar6;
  puVar3[0x22] = s_angry_005aa620;
  puVar3[0x21] = iVar6;
  puVar3[0x23] = iVar6;
  puVar3[0x24] = s_angry_ed_005aa628;
  piVar2 = DAT_005aa638;
  DAT_005aa638[1] = (int)s_npc_wait_stick_005aa63c;
  *piVar2 = iVar6;
  piVar2[3] = (int)(s_npc_wait_stick_005aa63c + 4);
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_magic_stick_005aa64c;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_towall_st_stick_005aa658;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_towall_ed_stick_005aa668;
  piVar2[8] = iVar6;
  piVar2[0xb] = (int)s_escape_ed_stick_005aa678;
  piVar2[10] = iVar6;
  piVar2[0xd] = (int)(s_npc_wait_stick_005aa63c + 4);
  piVar2[0xc] = iVar6;
  piVar2[0xf] = (int)s_emerge_st_stick_005aa688;
  piVar2[0xe] = iVar6;
  piVar2[0x11] = (int)s_emerge_ed_stick_005aa698;
  piVar2[0x10] = iVar6;
  piVar2[0x13] = (int)s_flinch_stick_005aa6a8;
  piVar2[0x12] = iVar6;
  piVar2[0x15] = (int)s_damage_stick_005aa6b8;
  piVar2[0x14] = iVar6;
  piVar2[0x17] = (int)s_hit_stick_005aa6c8;
  piVar2[0x16] = iVar6;
  piVar2[0x19] = (int)s_revival_stick_005aa6d4;
  piVar2[0x18] = iVar6;
  piVar2[0x1b] = (int)s_guard_stick_005aa6e4;
  piVar2[0x1a] = iVar6;
  piVar2[0x1d] = (int)s_angry_st_stick_005aa6f0;
  piVar2[0x1c] = iVar6;
  piVar2[0x1f] = (int)s_angry_stick_005aa700;
  piVar2[0x1e] = iVar6;
  piVar2[0x20] = iVar6;
  piVar2[0x21] = (int)s_angry_ed_stick_005aa70c;
  piVar2 = DAT_005aa720;
  DAT_005aa720[1] = (int)s_FlatMediumSide_walkL_005aa724;
  *piVar2 = iVar6;
  piVar2[2] = iVar6;
  piVar2[3] = (int)s_FlatMediumSide_walkR_005aa73c;
  *(undefined4 *)(iVar1 + 0x20) = 0x80;
  *(undefined4 *)(iVar1 + 0x24) = 0x80;
  local_30 = 0;
  local_2f = 0;
  local_2c = 0xff;
  local_2e = 0;
  local_24 = s_Medium_Enemy_005aa758;
  local_2d = 0;
  local_28 = iVar6;
  func_004FC5F8(DAT_005aa768,&local_28,0,1,0,(undefined4 *)&local_30,0xb);
  puVar3 = DAT_005aa770;
  puVar7 = DAT_005aa770 + 3;
  DAT_005aa770[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_20 = iVar6;
  puStack_1c = &DAT_005aa774;
  iStack_18 = iVar6;
  local_14 = s_EnemyMedium_005aa780;
  iVar6 = *(int *)(iVar1 + 4);
  if (*(int *)(iVar1 + 4) == 0) {
    iVar6 = DAT_005aa78c;
  }
  uVar5 = func_0019B51C(DAT_005aa798,DAT_005aa794,*DAT_005aa790,(int)&iStack_18,DAT_005aa770,
                        &local_20,iVar6);
  return CONCAT44(DAT_005aa79c,uVar5);
}

