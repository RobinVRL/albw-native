#include "ghidra_types.h"

extern int func_0012F8E8(int param_1,undefined4 param_2);
extern int *DAT_004ce090;

// USA 004CE008 <- EU 004CDFE0 (Ghidra, non-matching)
// GLOBAL DAT_004ce090 int *

void func_004CE008(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 1) {
    uVar1 = *(uint *)(param_1 + 0x164) & 0xfffffffb;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x164) | 4;
  }
  *(uint *)(param_1 + 0x164) = uVar1;
  if (param_2 != 0) {
    uVar1 = 0;
    iVar3 = *DAT_004ce090;
    if (0 < *(int *)(param_1 + 0x5c)) {
      do {
        if (uVar1 < *(uint *)(param_1 + 0x5c)) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 100) + uVar1 * 4);
        }
        else {
          uVar2 = 0;
        }
        func_0012F8E8(iVar3,uVar2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x5c));
    }
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0x68)) {
      do {
        if (uVar1 < *(uint *)(param_1 + 0x68)) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x70) + uVar1 * 4);
        }
        else {
          uVar2 = 0;
        }
        func_0012F8E8(iVar3,uVar2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x68));
    }
  }
  return;
}

