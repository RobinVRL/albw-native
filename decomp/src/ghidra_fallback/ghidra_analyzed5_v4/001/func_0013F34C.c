#include "ghidra_types.h"

extern int func_0013FC48(int param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 DAT_0013f424;

// USA 0013F34C <- EU 0013F34C (Ghidra, non-matching)
// GLOBAL DAT_0013f424 undefined4

/* WARNING: Removing unreachable block (ram,0x0013f1fc) */
/* WARNING: Removing unreachable block (ram,0x0013f204) */
/* WARNING: Removing unreachable block (ram,0x0013f214) */

void func_0013F34C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 0x521) = 1;
  uVar1 = DAT_0013f424;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined1 *)(param_1 + 0x51d) = 0;
  func_004CF478(*(int *)(param_1 + 0x410),0);
  *(undefined1 *)(*(int *)(param_1 + 0x418) + 0x61) = 0;
  func_00151148(*(int *)(param_1 + 0x414),0);
  uVar4 = *(int *)(param_1 + 0x4f8) + 1;
  *(uint *)(param_1 + 0x4f8) = uVar4;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x40c) + 0x20);
  if (uVar4 == uVar5) {
    func_0013FC48(param_1);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x40c) + 0x28);
    if ((iVar3 == 0 || uVar5 <= uVar4) || (iVar3 = *(int *)(iVar3 + uVar4 * 4), iVar3 == 0)) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(iVar3 + 0x48);
    }
  }
  if (*(int *)(param_1 + 0x508) == 2) {
    iVar3 = *(int *)(param_1 + 0x4ec);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x4f0))) {
      iVar2 = *(int *)(iVar3 + 0x20);
      if ((iVar2 != 0) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
        *(undefined1 *)(iVar2 + 0x280) = 1;
      }
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
    }
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  return;
}

