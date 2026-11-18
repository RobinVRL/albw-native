#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_001E8E70(void);
extern int func_0043283C(void);
extern int func_00435920(void);
extern int func_0048B8B8(int param_1,int param_2,int *param_3);
extern undefined *DAT_004ab470;
extern undefined *DAT_004ab474;
extern undefined *DAT_004ab478;
extern uint DAT_004ab47c;
extern undefined4 DAT_004ab480;
extern int DAT_004ab484;
extern undefined4 DAT_004ab488;
extern undefined4 DAT_004ab48c;
extern undefined4 DAT_004ab490;
extern undefined4 DAT_004ab494;
extern undefined4 DAT_004ab498;
extern int *DAT_004ab49c;
extern int DAT_004ab4a0;
extern int DAT_004ab4a4;

// USA 004AB348 <- EU 004AB320 (Ghidra, non-matching)
// GLOBAL DAT_004ab470 undefined *
// GLOBAL DAT_004ab474 undefined *
// GLOBAL DAT_004ab478 undefined *
// GLOBAL DAT_004ab47c uint
// GLOBAL DAT_004ab480 undefined4
// GLOBAL DAT_004ab484 int
// GLOBAL DAT_004ab488 undefined4
// GLOBAL DAT_004ab48c undefined4
// GLOBAL DAT_004ab490 undefined4
// GLOBAL DAT_004ab494 undefined4
// GLOBAL DAT_004ab498 undefined4
// GLOBAL DAT_004ab49c int *
// GLOBAL DAT_004ab4a0 int
// GLOBAL DAT_004ab4a4 int

undefined4 * func_004AB348(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar5 = func_00100118(param_1 + 0x10,DAT_004ab470,0xc,0xf);
  iVar5 = func_00100118(iVar5 + 0xb4,DAT_004ab474,0xc,6);
  *(undefined4 *)(iVar5 + 0x48) = 0xffffffff;
  *(undefined1 *)(iVar5 + 0x4c) = 0;
  *(undefined4 *)(iVar5 + 0x50) = 0;
  puVar1 = DAT_004ab478;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  iVar5 = func_00100118(iVar5 + 0x58,puVar1,0x48,0x2a4);
  iVar6 = iVar5 + 0xbe20;
  *(int *)(iVar5 + 0xbe24) = iVar6;
  *(undefined4 *)(iVar5 + 0xbe28) = 0;
  uVar2 = DAT_004ab47c;
  *(undefined4 *)(iVar5 + 0xbe2c) = 0xffffffff;
  *(int *)iVar6 = iVar6;
  *(undefined1 *)(uVar2 + iVar5 + -0x11c) = 0;
  *(undefined1 *)((uVar2 | (int)uVar2 >> 0xd) + iVar5 + -0x11c) = 0;
  *(undefined4 *)(iVar5 + 0xbe44) = 0;
  *(undefined4 *)(iVar5 + 0xbe48) = 0;
  *(undefined4 **)(iVar5 + 0xbe4c) = (undefined4 *)(iVar5 + 0xbe34);
  *(undefined4 *)(iVar5 + 0xbe50) = 0;
  puVar7 = func_0010CE7C((undefined4 *)(iVar5 + 0xbe34));
  *puVar7 = DAT_004ab480;
  puVar7[9] = puVar7 + 0xb;
  puVar7[10] = 0x20;
  uVar4 = DAT_004ab494;
  iVar5 = DAT_004ab484;
  *(undefined1 *)(puVar7[9] + 0x1f) = 0;
  *(undefined1 *)puVar7[9] = 0;
  uVar3 = DAT_004ab490;
  *puVar7 = uVar4;
  puVar7[8] = uVar3;
  func_0043283C();
  func_001E8E70();
  func_00435920();
  local_18 = iVar5;
  local_14 = DAT_004ab498;
  func_0048B8B8(*DAT_004ab49c,(int)puVar7,&local_18);
  *(undefined4 **)(DAT_004ab4a0 + 0xc) = puVar7;
  *(undefined4 *)(DAT_004ab4a4 + (int)(puVar7 + -0x2fd4)) = 0x104;
  return puVar7 + -0x2fd4;
}

