#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005e0768;
extern undefined4 *DAT_005e076c;
extern undefined DAT_005e0770;
extern undefined4 DAT_005e0780;
extern int DAT_005e0798;
extern uint *DAT_005e079c;
extern undefined4 DAT_005e07a0;
extern undefined4 *DAT_005e07a4;
extern undefined4 DAT_005e07a8;
extern undefined4 DAT_005e07ac;
extern undefined4 *DAT_005e07b0;
extern undefined4 DAT_005e085c;
extern undefined4 *DAT_005e0860;
extern undefined4 DAT_005e086c;
extern undefined4 *DAT_005e0870;
extern undefined4 DAT_005e0874;
extern char s_EnemySoldierBomb_005e0784[];
extern char s_Lhand_005e0864[];
extern char s_bomb_damage00_005e081c[];
extern char s_bomb_dead_ed00_005e083c[];
extern char s_bomb_dead_st00_005e082c[];
extern char s_bomb_fall00_005e0810[];
extern char s_bomb_find00_005e07e4[];
extern char s_bomb_kamae00_005e07f0[];
extern char s_bomb_piyopiyo00_005e084c[];
extern char s_bomb_throw00_005e0800[];
extern char s_bomb_wait00_005e07cc[];
extern char s_bomb_wait01_005e07d8[];
extern char s_bomb_walk00_005e07b4[];
extern char s_bomb_walk01_005e07c0[];

// USA 005E05DC <- EU 005E05B4 (Ghidra, non-matching)
// GLOBAL DAT_005e0768 int *
// GLOBAL DAT_005e076c undefined4 *
// GLOBAL DAT_005e0770 undefined
// GLOBAL DAT_005e0780 undefined4
// GLOBAL DAT_005e0798 int
// GLOBAL DAT_005e079c uint *
// GLOBAL DAT_005e07a0 undefined4
// GLOBAL DAT_005e07a4 undefined4 *
// GLOBAL DAT_005e07a8 undefined4
// GLOBAL DAT_005e07ac undefined4
// GLOBAL DAT_005e07b0 undefined4 *
// GLOBAL DAT_005e085c undefined4
// GLOBAL DAT_005e0860 undefined4 *
// GLOBAL DAT_005e086c undefined4
// GLOBAL DAT_005e0870 undefined4 *
// GLOBAL DAT_005e0874 undefined4
// GLOBAL s_EnemySoldierBomb_005e0784 string
// GLOBAL s_Lhand_005e0864 string
// GLOBAL s_bomb_damage00_005e081c string
// GLOBAL s_bomb_dead_ed00_005e083c string
// GLOBAL s_bomb_dead_st00_005e082c string
// GLOBAL s_bomb_fall00_005e0810 string
// GLOBAL s_bomb_find00_005e07e4 string
// GLOBAL s_bomb_kamae00_005e07f0 string
// GLOBAL s_bomb_piyopiyo00_005e084c string
// GLOBAL s_bomb_throw00_005e0800 string
// GLOBAL s_bomb_wait00_005e07cc string
// GLOBAL s_bomb_wait01_005e07d8 string
// GLOBAL s_bomb_walk00_005e07b4 string
// GLOBAL s_bomb_walk01_005e07c0 string

undefined8 func_005E05DC(void)

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
  piVar1 = DAT_005e0768;
  DAT_005e0768[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar3 = DAT_005e076c;
  DAT_005e076c[2] = DAT_005e076c + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  uVar2 = DAT_005e0780;
  local_14 = &DAT_005e0770;
  local_18 = DAT_005e0780;
  local_1c = s_EnemySoldierBomb_005e0784;
  local_20 = DAT_005e0780;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005e0798;
  }
  func_0019B51C(DAT_005e07a4,DAT_005e07a0,*DAT_005e079c,(int)&local_20,DAT_005e076c,&local_18,iVar4)
  ;
  puVar3 = DAT_005e07b0;
  DAT_005e07b0[1] = s_bomb_walk00_005e07b4;
  *puVar3 = uVar2;
  puVar3[3] = s_bomb_walk01_005e07c0;
  puVar3[2] = uVar2;
  puVar3[5] = s_bomb_wait00_005e07cc;
  puVar3[4] = uVar2;
  puVar3[7] = s_bomb_wait01_005e07d8;
  puVar3[6] = uVar2;
  puVar3[9] = s_bomb_find00_005e07e4;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_bomb_kamae00_005e07f0;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_bomb_throw00_005e0800;
  puVar3[0xc] = uVar2;
  puVar3[0xf] = s_bomb_fall00_005e0810;
  puVar3[0xe] = uVar2;
  puVar3[0x11] = s_bomb_damage00_005e081c;
  puVar3[0x10] = uVar2;
  puVar3[0x13] = s_bomb_dead_st00_005e082c;
  puVar3[0x12] = uVar2;
  puVar3[0x15] = s_bomb_dead_ed00_005e083c;
  puVar3[0x14] = uVar2;
  puVar3[0x16] = uVar2;
  puVar3[0x17] = s_bomb_piyopiyo00_005e084c;
  puVar3 = DAT_005e0860;
  DAT_005e0860[1] = s_Lhand_005e0864;
  *puVar3 = uVar2;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar3 = func_004FC6FC(DAT_005e0870,0,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005e0874,puVar3);
}

