#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b05dc;
extern undefined4 *DAT_005b05e0;
extern undefined DAT_005b05e4;
extern undefined4 DAT_005b05ec;
extern undefined DAT_005b05f0;
extern undefined4 DAT_005b0650;
extern uint DAT_005b0654;
extern uint DAT_005b0658;
extern uint DAT_005b065c;
extern undefined4 DAT_005b0660;
extern undefined4 *DAT_005b0664;
extern undefined4 DAT_005b0668;
extern undefined4 *DAT_005b066c;
extern undefined4 DAT_005b0670;
extern undefined4 *DAT_005b0674;
extern undefined DAT_005b0678;
extern int DAT_005b0694;
extern uint *DAT_005b0698;
extern undefined4 DAT_005b069c;
extern undefined4 *DAT_005b06a0;
extern undefined4 DAT_005b06a4;
extern char s_EnemyKodongo_005b0684[];
extern char s_damage_005b0620[];
extern char s_dead_ed_005b0630[];
extern char s_dead_st_005b0628[];
extern char s_fire_ed_005b0618[];
extern char s_fire_md_005b0610[];
extern char s_fire_st_005b0608[];
extern char s_jitabata_005b0644[];
extern char s_piyopiyo_005b0638[];
extern char s_turn_ed_005b0600[];
extern char s_turn_st_005b05f8[];

// USA 005B0428 <- EU 005B0400 (Ghidra, non-matching)
// GLOBAL DAT_005b05dc int *
// GLOBAL DAT_005b05e0 undefined4 *
// GLOBAL DAT_005b05e4 undefined
// GLOBAL DAT_005b05ec undefined4
// GLOBAL DAT_005b05f0 undefined
// GLOBAL DAT_005b0650 undefined4
// GLOBAL DAT_005b0654 uint
// GLOBAL DAT_005b0658 uint
// GLOBAL DAT_005b065c uint
// GLOBAL DAT_005b0660 undefined4
// GLOBAL DAT_005b0664 undefined4 *
// GLOBAL DAT_005b0668 undefined4
// GLOBAL DAT_005b066c undefined4 *
// GLOBAL DAT_005b0670 undefined4
// GLOBAL DAT_005b0674 undefined4 *
// GLOBAL DAT_005b0678 undefined
// GLOBAL DAT_005b0694 int
// GLOBAL DAT_005b0698 uint *
// GLOBAL DAT_005b069c undefined4
// GLOBAL DAT_005b06a0 undefined4 *
// GLOBAL DAT_005b06a4 undefined4
// GLOBAL s_EnemyKodongo_005b0684 string
// GLOBAL s_damage_005b0620 string
// GLOBAL s_dead_ed_005b0630 string
// GLOBAL s_dead_st_005b0628 string
// GLOBAL s_fire_ed_005b0618 string
// GLOBAL s_fire_md_005b0610 string
// GLOBAL s_fire_st_005b0608 string
// GLOBAL s_jitabata_005b0644 string
// GLOBAL s_piyopiyo_005b0638 string
// GLOBAL s_turn_ed_005b0600 string
// GLOBAL s_turn_st_005b05f8 string

undefined8 func_005B0428(void)

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
  piVar1 = DAT_005b05dc;
  DAT_005b05dc[8] = -1;
  piVar1[9] = -1;
  uVar5 = DAT_005b05ec;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  puVar2 = DAT_005b05e0;
  DAT_005b05e0[1] = &DAT_005b05e4;
  *puVar2 = uVar5;
  puVar2[3] = &DAT_005b05f0;
  puVar2[2] = uVar5;
  puVar2[5] = s_turn_st_005b05f8;
  puVar2[4] = uVar5;
  puVar2[7] = s_turn_ed_005b0600;
  puVar2[6] = uVar5;
  puVar2[9] = s_fire_st_005b0608;
  puVar2[8] = uVar5;
  puVar2[0xb] = s_fire_md_005b0610;
  puVar2[10] = uVar5;
  puVar2[0xd] = s_fire_ed_005b0618;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = s_damage_005b0620;
  puVar2[0xe] = uVar5;
  puVar2[0x11] = &DAT_005b05e4;
  puVar2[0x10] = uVar5;
  puVar2[0x13] = s_dead_st_005b0628;
  puVar2[0x12] = uVar5;
  puVar2[0x15] = s_dead_ed_005b0630;
  puVar2[0x14] = uVar5;
  puVar2[0x17] = s_piyopiyo_005b0638;
  puVar2[0x16] = uVar5;
  puVar2[0x18] = uVar5;
  puVar2[0x19] = s_jitabata_005b0644;
  uVar8 = func_00114608(DAT_005b0658,DAT_005b0654);
  piVar1[5] = (int)uVar8;
  piVar1[6] = (int)uVar8;
  uVar8 = func_00114608(DAT_005b065c,(uint)(piVar1 + 6));
  piVar1[7] = (int)uVar8;
  uVar4 = DAT_005b0668;
  puVar2 = DAT_005b0664;
  uVar3 = DAT_005b0660;
  *DAT_005b0664 = DAT_005b0660;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005b066c,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005b0674;
  puVar7 = DAT_005b0674 + 3;
  DAT_005b0674[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_14 = &DAT_005b0678;
  local_18 = uVar5;
  local_1c = s_EnemyKodongo_005b0684;
  local_20 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005b0694;
  }
  uVar5 = func_0019B51C(DAT_005b06a0,DAT_005b069c,*DAT_005b0698,(int)&local_20,DAT_005b0674,
                        &local_18,iVar6);
  return CONCAT44(DAT_005b06a4,uVar5);
}

