#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005aa978;
extern undefined4 *DAT_005aa97c;
extern undefined4 DAT_005aa98c;
extern undefined DAT_005aa9e4;
extern undefined4 DAT_005aaa20;
extern undefined4 DAT_005aaa24;
extern undefined4 *DAT_005aaa28;
extern undefined4 DAT_005aaa2c;
extern undefined4 DAT_005aaa30;
extern undefined4 DAT_005aaa34;
extern undefined4 *DAT_005aaa38;
extern undefined4 DAT_005aaa3c;
extern undefined4 *DAT_005aaa40;
extern undefined DAT_005aaa44;
extern int DAT_005aaa5c;
extern uint *DAT_005aaa60;
extern undefined4 DAT_005aaa64;
extern undefined4 *DAT_005aaa68;
extern undefined4 DAT_005aaa6c;
extern char s_EnemyOmugai_005aaa50[];
extern char s_catch_005aa9a0[];
extern char s_damage_005aa9cc[];
extern char s_dead_ed_005aa9dc[];
extern char s_dead_st_005aa9d4[];
extern char s_fly_hide_ed_005aa9c0[];
extern char s_fly_hide_guard_005aa9e8[];
extern char s_fly_hide_md_005aa9b4[];
extern char s_fly_hide_st_005aa9a8[];
extern char s_fly_jitabata_005aaa10[];
extern char s_fly_wait_005aa980[];
extern char s_jitabata_005aa9f8[];
extern char s_piyopiyo_005aaa04[];
extern char s_walk_ed_005aa998[];
extern char s_walk_st_005aa990[];

// USA 005AA7C8 <- EU 005AA7A0 (Ghidra, non-matching)
// GLOBAL DAT_005aa978 int *
// GLOBAL DAT_005aa97c undefined4 *
// GLOBAL DAT_005aa98c undefined4
// GLOBAL DAT_005aa9e4 undefined
// GLOBAL DAT_005aaa20 undefined4
// GLOBAL DAT_005aaa24 undefined4
// GLOBAL DAT_005aaa28 undefined4 *
// GLOBAL DAT_005aaa2c undefined4
// GLOBAL DAT_005aaa30 undefined4
// GLOBAL DAT_005aaa34 undefined4
// GLOBAL DAT_005aaa38 undefined4 *
// GLOBAL DAT_005aaa3c undefined4
// GLOBAL DAT_005aaa40 undefined4 *
// GLOBAL DAT_005aaa44 undefined
// GLOBAL DAT_005aaa5c int
// GLOBAL DAT_005aaa60 uint *
// GLOBAL DAT_005aaa64 undefined4
// GLOBAL DAT_005aaa68 undefined4 *
// GLOBAL DAT_005aaa6c undefined4
// GLOBAL s_EnemyOmugai_005aaa50 string
// GLOBAL s_catch_005aa9a0 string
// GLOBAL s_damage_005aa9cc string
// GLOBAL s_dead_ed_005aa9dc string
// GLOBAL s_dead_st_005aa9d4 string
// GLOBAL s_fly_hide_ed_005aa9c0 string
// GLOBAL s_fly_hide_guard_005aa9e8 string
// GLOBAL s_fly_hide_md_005aa9b4 string
// GLOBAL s_fly_hide_st_005aa9a8 string
// GLOBAL s_fly_jitabata_005aaa10 string
// GLOBAL s_fly_wait_005aa980 string
// GLOBAL s_jitabata_005aa9f8 string
// GLOBAL s_piyopiyo_005aaa04 string
// GLOBAL s_walk_ed_005aa998 string
// GLOBAL s_walk_st_005aa990 string

undefined8 func_005AA7C8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
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
  piVar1 = DAT_005aa978;
  DAT_005aa978[2] = -1;
  piVar1[3] = -1;
  uVar5 = DAT_005aa98c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005aa97c;
  DAT_005aa97c[1] = s_fly_wait_005aa980;
  *puVar2 = uVar5;
  puVar2[3] = s_fly_wait_005aa980 + 4;
  puVar2[2] = uVar5;
  puVar2[5] = s_walk_st_005aa990;
  puVar2[4] = uVar5;
  puVar2[7] = s_walk_ed_005aa998;
  puVar2[6] = uVar5;
  puVar2[9] = s_catch_005aa9a0;
  puVar2[8] = uVar5;
  puVar2[0xb] = s_fly_hide_st_005aa9a8;
  puVar2[10] = uVar5;
  puVar2[0xd] = s_fly_hide_md_005aa9b4;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = s_fly_hide_ed_005aa9c0;
  puVar2[0xe] = uVar5;
  puVar2[0x11] = s_damage_005aa9cc;
  puVar2[0x10] = uVar5;
  puVar2[0x13] = s_dead_st_005aa9d4;
  puVar2[0x12] = uVar5;
  puVar2[0x15] = s_dead_ed_005aa9dc;
  puVar2[0x14] = uVar5;
  puVar2[0x17] = &DAT_005aa9e4;
  puVar2[0x16] = uVar5;
  puVar2[0x19] = s_fly_hide_guard_005aa9e8;
  puVar2[0x18] = uVar5;
  puVar2[0x1b] = s_jitabata_005aa9f8;
  puVar2[0x1a] = uVar5;
  puVar2[0x1d] = s_piyopiyo_005aaa04;
  puVar2[0x1c] = uVar5;
  puVar2[0x1e] = uVar5;
  puVar2[0x1f] = s_fly_jitabata_005aaa10;
  uVar4 = DAT_005aaa34;
  uVar3 = DAT_005aaa30;
  puVar2 = DAT_005aaa28;
  *DAT_005aaa28 = DAT_005aaa2c;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005aaa38,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005aaa40;
  puVar7 = DAT_005aaa40 + 3;
  DAT_005aaa40[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_14 = &DAT_005aaa44;
  local_18 = uVar5;
  local_1c = s_EnemyOmugai_005aaa50;
  local_20 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005aaa5c;
  }
  uVar5 = func_0019B51C(DAT_005aaa68,DAT_005aaa64,*DAT_005aaa60,(int)&local_20,DAT_005aaa40,
                        &local_18,iVar6);
  return CONCAT44(DAT_005aaa6c,uVar5);
}

