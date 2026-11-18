#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ea120;
extern undefined4 *DAT_005ea124;
extern undefined4 *DAT_005ea128;
extern undefined4 DAT_005ea138;
extern undefined4 DAT_005ea160;
extern undefined4 DAT_005ea164;
extern undefined4 *DAT_005ea168;
extern undefined DAT_005ea16c;
extern undefined DAT_005ea174;
extern undefined DAT_005ea17c;
extern undefined4 DAT_005ea18c;
extern undefined4 *DAT_005ea190;
extern undefined4 DAT_005ea194;
extern undefined4 *DAT_005ea198;
extern undefined4 DAT_005ea19c;
extern undefined4 DAT_005ea1a0;
extern undefined4 DAT_005ea1a4;
extern undefined4 DAT_005ea1a8;
extern undefined4 DAT_005ea1ac;
extern undefined4 DAT_005ea1b0;
extern undefined4 DAT_005ea1b4;
extern undefined4 *DAT_005ea1b8;
extern undefined4 DAT_005ea1bc;
extern undefined4 *DAT_005ea1c0;
extern undefined DAT_005ea1c4;
extern uint *DAT_005ea1f8;
extern undefined4 DAT_005ea1fc;
extern undefined4 *DAT_005ea200;
extern undefined4 DAT_005ea204;
extern undefined4 *DAT_005ea208;
extern undefined DAT_005ea20c;
extern uint *DAT_005ea240;
extern undefined4 DAT_005ea244;
extern undefined4 *DAT_005ea248;
extern undefined4 *DAT_005ea24c;
extern undefined DAT_005ea250;
extern uint *DAT_005ea284;
extern undefined4 DAT_005ea288;
extern undefined4 *DAT_005ea28c;
extern char s_N_ArrowB_00_005ea13c[];
extern char s_N_ArrowL_00_005ea148[];
extern char s_N_ArrowR_00_005ea154[];
extern char s_N_ArrowT_00_005ea12c[];
extern char s_NpcTreasureHunterDark_005ea228[];
extern char s_NpcTreasureHunterGrave_005ea26c[];
extern char s_NpcTreasureHunterLight_005ea1e0[];
extern char s_search_005ea184[];

// USA 005E9E04 <- EU 005E9DDC (Ghidra, non-matching)
// GLOBAL DAT_005ea120 undefined4 *
// GLOBAL DAT_005ea124 undefined4 *
// GLOBAL DAT_005ea128 undefined4 *
// GLOBAL DAT_005ea138 undefined4
// GLOBAL DAT_005ea160 undefined4
// GLOBAL DAT_005ea164 undefined4
// GLOBAL DAT_005ea168 undefined4 *
// GLOBAL DAT_005ea16c undefined
// GLOBAL DAT_005ea174 undefined
// GLOBAL DAT_005ea17c undefined
// GLOBAL DAT_005ea18c undefined4
// GLOBAL DAT_005ea190 undefined4 *
// GLOBAL DAT_005ea194 undefined4
// GLOBAL DAT_005ea198 undefined4 *
// GLOBAL DAT_005ea19c undefined4
// GLOBAL DAT_005ea1a0 undefined4
// GLOBAL DAT_005ea1a4 undefined4
// GLOBAL DAT_005ea1a8 undefined4
// GLOBAL DAT_005ea1ac undefined4
// GLOBAL DAT_005ea1b0 undefined4
// GLOBAL DAT_005ea1b4 undefined4
// GLOBAL DAT_005ea1b8 undefined4 *
// GLOBAL DAT_005ea1bc undefined4
// GLOBAL DAT_005ea1c0 undefined4 *
// GLOBAL DAT_005ea1c4 undefined
// GLOBAL DAT_005ea1f8 uint *
// GLOBAL DAT_005ea1fc undefined4
// GLOBAL DAT_005ea200 undefined4 *
// GLOBAL DAT_005ea204 undefined4
// GLOBAL DAT_005ea208 undefined4 *
// GLOBAL DAT_005ea20c undefined
// GLOBAL DAT_005ea240 uint *
// GLOBAL DAT_005ea244 undefined4
// GLOBAL DAT_005ea248 undefined4 *
// GLOBAL DAT_005ea24c undefined4 *
// GLOBAL DAT_005ea250 undefined
// GLOBAL DAT_005ea284 uint *
// GLOBAL DAT_005ea288 undefined4
// GLOBAL DAT_005ea28c undefined4 *
// GLOBAL s_N_ArrowB_00_005ea13c string
// GLOBAL s_N_ArrowL_00_005ea148 string
// GLOBAL s_N_ArrowR_00_005ea154 string
// GLOBAL s_N_ArrowT_00_005ea12c string
// GLOBAL s_NpcTreasureHunterDark_005ea228 string
// GLOBAL s_NpcTreasureHunterGrave_005ea26c string
// GLOBAL s_NpcTreasureHunterLight_005ea1e0 string
// GLOBAL s_search_005ea184 string

undefined8 func_005E9E04(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(char * *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined * *)(albw_frame + 0x34))
  puVar1 = DAT_005ea120;
  *DAT_005ea120 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar8 = DAT_005ea138;
  puVar1 = DAT_005ea124;
  *DAT_005ea124 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ea128;
  DAT_005ea128[1] = s_N_ArrowT_00_005ea12c;
  *puVar1 = uVar8;
  puVar1[3] = s_N_ArrowB_00_005ea13c;
  puVar1[2] = uVar8;
  puVar1[5] = s_N_ArrowL_00_005ea148;
  puVar1[4] = uVar8;
  puVar1[6] = uVar8;
  puVar1[7] = s_N_ArrowR_00_005ea154;
  puVar1 = DAT_005ea168;
  DAT_005ea168[1] = &DAT_005ea16c;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005ea174;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_005ea17c;
  puVar1[6] = uVar8;
  puVar1[9] = uVar8;
  puVar1[10] = s_search_005ea184;
  puVar1 = DAT_005ea190;
  DAT_005ea190[1] = &DAT_005ea16c;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005ea174;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_005ea17c;
  puVar1[6] = uVar8;
  puVar1[9] = uVar8;
  puVar1[10] = s_search_005ea184;
  puVar1 = DAT_005ea198;
  DAT_005ea198[1] = &DAT_005ea16c;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005ea174;
  puVar1[3] = uVar8;
  puVar1[6] = uVar8;
  puVar1[7] = &DAT_005ea17c;
  puVar1 = DAT_005ea1b8;
  uVar7 = DAT_005ea1b4;
  uVar6 = DAT_005ea1b0;
  uVar5 = DAT_005ea1ac;
  uVar4 = DAT_005ea1a8;
  uVar3 = DAT_005ea1a4;
  uVar2 = DAT_005ea1a0;
  *DAT_005ea1b8 = DAT_005ea1a0;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x28;
  *(undefined1 *)(puVar1 + 9) = 5;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  puVar1[0xe] = uVar6;
  puVar1[0xf] = uVar7;
  puVar1[0x10] = 0xf;
  *(undefined2 *)(puVar1 + 0x11) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x46) = 0xb4;
  *(undefined1 *)(puVar1 + 0x12) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x49) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0x28;
  *(undefined1 *)(puVar1 + 0x13) = 5;
  uVar7 = DAT_005ea1bc;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = uVar3;
  puVar1[0x16] = uVar4;
  puVar1[0x17] = uVar5;
  puVar1[0x18] = uVar6;
  puVar1[0x19] = uVar7;
  puVar1[0x1a] = 10;
  *(undefined2 *)(puVar1 + 0x1b) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x6e) = 0xb4;
  *(undefined1 *)(puVar1 + 0x1c) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x71) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x72) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x73) = 0x28;
  *(undefined1 *)(puVar1 + 0x1d) = 5;
  puVar1 = DAT_005ea1c0;
  puVar9 = DAT_005ea1c0 + 3;
  *DAT_005ea1c0 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar9;
  local_3c = &DAT_005ea1c4;
  local_44 = s_NpcTreasureHunterLight_005ea1e0;
  local_40 = uVar8;
  local_48 = uVar8;
  func_0019B51C(DAT_005ea200,DAT_005ea1fc,*DAT_005ea1f8,(int)&local_48,DAT_005ea1c0,&local_40,0);
  puVar1 = DAT_005ea208;
  puVar9 = DAT_005ea208 + 3;
  DAT_005ea208[1] = 5;
  puVar1[2] = puVar9;
  *puVar1 = 0;
  local_2c = &DAT_005ea20c;
  local_34 = s_NpcTreasureHunterDark_005ea228;
  local_30 = uVar8;
  local_38 = uVar8;
  func_0019B51C(DAT_005ea248,DAT_005ea244,*DAT_005ea240,(int)&local_38,DAT_005ea208,&local_30,0);
  puVar1 = DAT_005ea24c;
  puVar9 = DAT_005ea24c + 3;
  DAT_005ea24c[1] = 5;
  puVar1[2] = puVar9;
  *puVar1 = 0;
  local_1c = &DAT_005ea250;
  local_24 = s_NpcTreasureHunterGrave_005ea26c;
  local_20 = uVar8;
  local_28 = uVar8;
  uVar8 = func_0019B51C(DAT_005ea28c,DAT_005ea288,*DAT_005ea284,(int)&local_28,DAT_005ea24c,
                        &local_20,0);
  return CONCAT44(DAT_005ea204,uVar8);
}

