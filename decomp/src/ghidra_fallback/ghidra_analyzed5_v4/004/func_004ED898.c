#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001222A0(undefined4 *param_1,undefined4 param_2);
extern int func_00152078(undefined4 *param_1);
extern undefined4 *DAT_004ed994;
extern undefined4 DAT_004ed998;
extern undefined *DAT_004ed99c;

// USA 004ED898 <- EU 004ED870 (Ghidra, non-matching)
// GLOBAL DAT_004ed994 undefined4 *
// GLOBAL DAT_004ed998 undefined4
// GLOBAL DAT_004ed99c undefined *

undefined4 * func_004ED898(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x1f8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_001222A0(puVar3,param_1);
  }
  *(undefined4 **)(param_1 + 0x18) = puVar4;
  func_001119F4((undefined4 *)(param_1 + 0x1c),DAT_004ed994);
  func_001119F4((undefined4 *)(param_1 + 0x4c),DAT_004ed994);
  uVar1 = DAT_004ed998;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  puVar2 = DAT_004ed99c;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  iVar5 = func_00100118(param_1 + 0xa0,puVar2,4,8);
  puVar4 = (undefined4 *)func_00100118(iVar5 + 0x20,DAT_004ed99c,4,8);
  *(undefined1 *)((int)puVar4 + 0x21) = 0;
  *(undefined1 *)((int)puVar4 + 0x22) = 0;
  func_00152078(puVar4 + 9);
  uVar6 = 0;
  do {
    puVar3 = puVar4 + -8;
    if (uVar6 < 8) {
      puVar3 = puVar3 + uVar6;
    }
    uVar6 = uVar6 + 1;
    *puVar3 = 0;
  } while ((int)uVar6 < 8);
  uVar6 = 0;
  do {
    puVar3 = puVar4;
    if (uVar6 < 8) {
      puVar3 = puVar4 + uVar6;
    }
    uVar6 = uVar6 + 1;
    *puVar3 = 0;
  } while ((int)uVar6 < 8);
  return puVar4 + -0x30;
}

