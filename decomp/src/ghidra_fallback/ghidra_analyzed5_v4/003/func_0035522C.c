#include "ghidra_types.h"

extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float DAT_003552dc;
extern float DAT_003552e0;

// USA 0035522C <- EU 00355208 (Ghidra, non-matching)
// GLOBAL DAT_003552dc float
// GLOBAL DAT_003552e0 float

void func_0035522C(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  fVar1 = DAT_003552dc;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x200;
  *(undefined4 *)(param_1 + 0xaa4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xaa8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xaac) = *(undefined4 *)(param_1 + 0x3d8);
  fVar2 = DAT_003552e0;
  *(float *)(param_1 + 0xaa8) = *(float *)(param_1 + 0xaa8) + fVar1;
  *(float *)(param_1 + 0xaac) = *(float *)(param_1 + 0xaac) + fVar2;
  *(undefined1 *)(param_1 + 0x9bc) = 2;
  *(undefined4 **)(param_1 + 0x8f0) = (undefined4 *)(param_1 + 0xaa4);
  func_0036C058(param_1 + 0x8c8,0xffffffff,0xffffffff,0);
  func_004FABDC(param_1,0xd,0xffffffff,0);
  func_004FAB60(param_1,0,0);
  if (*(char *)(param_1 + 0x650) == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5a8);
  }
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x90000;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb | 0x200;
  uVar4 = 0;
  if (*(char *)(param_1 + 0x652) != '\0') {
    do {
      uVar5 = uVar4 + 1;
      *(undefined1 *)(((int *)(param_1 + 0x5a8))[uVar4 + 0x1c] + 0x61) = 0;
      uVar4 = uVar5;
    } while (uVar5 < *(byte *)(param_1 + 0x652));
  }
  return;
}

