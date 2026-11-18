#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005c5630;
extern undefined4 *DAT_005c5634;
extern undefined4 *DAT_005c5638;
extern undefined4 DAT_005c5648;
extern undefined4 DAT_005c5670;
extern undefined4 DAT_005c5674;
extern undefined4 *DAT_005c5678;
extern undefined DAT_005c567c;
extern undefined DAT_005c5684;
extern undefined4 DAT_005c568c;
extern undefined4 DAT_005c5690;
extern undefined4 DAT_005c5694;
extern undefined4 DAT_005c5698;
extern undefined4 DAT_005c569c;
extern undefined4 DAT_005c56a0;
extern undefined4 *DAT_005c56a4;
extern undefined4 DAT_005c56a8;
extern undefined4 *DAT_005c56ac;
extern undefined4 DAT_005c56c0;
extern undefined4 *DAT_005c56c4;
extern undefined DAT_005c56c8;
extern uint *DAT_005c56e8;
extern undefined4 DAT_005c56ec;
extern undefined4 *DAT_005c56f0;
extern undefined4 DAT_005c56f4;
extern undefined4 *DAT_005c56f8;
extern undefined DAT_005c56fc;
extern uint *DAT_005c5724;
extern undefined4 DAT_005c5728;
extern undefined4 *DAT_005c572c;
extern char s_HintGlasses_00_005c56b0[];
extern char s_N_ArrowB_00_005c564c[];
extern char s_N_ArrowL_00_005c5658[];
extern char s_N_ArrowR_00_005c5664[];
extern char s_N_ArrowT_00_005c563c[];
extern char s_NpcFortuneGirl_005c56d8[];
extern char s_NpcShopManFortuneUra_005c570c[];

// USA 005C5408 <- EU 005C53E0 (Ghidra, non-matching)
// GLOBAL DAT_005c5630 int
// GLOBAL DAT_005c5634 undefined4 *
// GLOBAL DAT_005c5638 undefined4 *
// GLOBAL DAT_005c5648 undefined4
// GLOBAL DAT_005c5670 undefined4
// GLOBAL DAT_005c5674 undefined4
// GLOBAL DAT_005c5678 undefined4 *
// GLOBAL DAT_005c567c undefined
// GLOBAL DAT_005c5684 undefined
// GLOBAL DAT_005c568c undefined4
// GLOBAL DAT_005c5690 undefined4
// GLOBAL DAT_005c5694 undefined4
// GLOBAL DAT_005c5698 undefined4
// GLOBAL DAT_005c569c undefined4
// GLOBAL DAT_005c56a0 undefined4
// GLOBAL DAT_005c56a4 undefined4 *
// GLOBAL DAT_005c56a8 undefined4
// GLOBAL DAT_005c56ac undefined4 *
// GLOBAL DAT_005c56c0 undefined4
// GLOBAL DAT_005c56c4 undefined4 *
// GLOBAL DAT_005c56c8 undefined
// GLOBAL DAT_005c56e8 uint *
// GLOBAL DAT_005c56ec undefined4
// GLOBAL DAT_005c56f0 undefined4 *
// GLOBAL DAT_005c56f4 undefined4
// GLOBAL DAT_005c56f8 undefined4 *
// GLOBAL DAT_005c56fc undefined
// GLOBAL DAT_005c5724 uint *
// GLOBAL DAT_005c5728 undefined4
// GLOBAL DAT_005c572c undefined4 *
// GLOBAL s_HintGlasses_00_005c56b0 string
// GLOBAL s_N_ArrowB_00_005c564c string
// GLOBAL s_N_ArrowL_00_005c5658 string
// GLOBAL s_N_ArrowR_00_005c5664 string
// GLOBAL s_N_ArrowT_00_005c563c string
// GLOBAL s_NpcFortuneGirl_005c56d8 string
// GLOBAL s_NpcShopManFortuneUra_005c570c string

undefined8 func_005C5408(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  iVar1 = DAT_005c5630;
  *(undefined4 *)(DAT_005c5630 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  uVar9 = DAT_005c5648;
  puVar2 = DAT_005c5634;
  *DAT_005c5634 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005c5638;
  DAT_005c5638[1] = s_N_ArrowT_00_005c563c;
  *puVar2 = uVar9;
  puVar2[3] = s_N_ArrowB_00_005c564c;
  puVar2[2] = uVar9;
  puVar2[5] = s_N_ArrowL_00_005c5658;
  puVar2[4] = uVar9;
  puVar2[6] = uVar9;
  puVar2[7] = s_N_ArrowR_00_005c5664;
  puVar2 = DAT_005c5678;
  DAT_005c5678[1] = &DAT_005c567c;
  *puVar2 = uVar9;
  puVar2[3] = uVar9;
  puVar2[4] = &DAT_005c5684;
  puVar2 = DAT_005c56a4;
  uVar5 = DAT_005c5698;
  uVar4 = DAT_005c5694;
  uVar3 = DAT_005c5690;
  *DAT_005c56a4 = DAT_005c5690;
  uVar8 = DAT_005c56a8;
  puVar2[1] = uVar4;
  uVar6 = DAT_005c569c;
  puVar2[2] = uVar5;
  uVar7 = DAT_005c56a0;
  puVar2[3] = uVar8;
  puVar2[4] = uVar6;
  puVar2[5] = uVar7;
  puVar2[6] = 0xe;
  *(undefined2 *)(puVar2 + 7) = 0x5f;
  *(undefined2 *)((int)puVar2 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar2 + 8) = 0xee;
  *(undefined1 *)((int)puVar2 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x23) = 0x19;
  *(undefined1 *)(puVar2 + 9) = 0xf;
  puVar2[10] = uVar3;
  puVar2[0xb] = uVar4;
  puVar2[0xc] = uVar5;
  puVar2[0xd] = uVar6;
  puVar2[0xe] = uVar6;
  puVar2[0xf] = uVar7;
  puVar2[0x10] = 0xf;
  *(undefined2 *)(puVar2 + 0x11) = 0x5f;
  *(undefined2 *)((int)puVar2 + 0x46) = 0xb4;
  *(undefined1 *)(puVar2 + 0x12) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x49) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x4a) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x4b) = 0x1e;
  *(undefined1 *)(puVar2 + 0x13) = 0xf;
  puVar2 = DAT_005c56ac;
  DAT_005c56ac[1] = s_HintGlasses_00_005c56b0;
  *puVar2 = uVar9;
  puVar2 = DAT_005c56c4;
  DAT_005c56c4[2] = DAT_005c56c4 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_2c = &DAT_005c56c8;
  local_34 = s_NpcFortuneGirl_005c56d8;
  local_30 = uVar9;
  local_38 = uVar9;
  func_0019B51C(DAT_005c56f0,DAT_005c56ec,*DAT_005c56e8,(int)&local_38,DAT_005c56c4,&local_30,0);
  puVar2 = DAT_005c56f8;
  puVar10 = DAT_005c56f8 + 3;
  DAT_005c56f8[1] = 5;
  puVar2[2] = puVar10;
  *puVar2 = 0;
  local_1c = &DAT_005c56fc;
  local_24 = s_NpcShopManFortuneUra_005c570c;
  local_20 = uVar9;
  local_28 = uVar9;
  uVar9 = func_0019B51C(DAT_005c572c,DAT_005c5728,*DAT_005c5724,(int)&local_28,DAT_005c56f8,
                        &local_20,0);
  return CONCAT44(DAT_005c56f4,uVar9);
}

