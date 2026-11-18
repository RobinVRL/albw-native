#include "ghidra_types.h"


// USA 00172010 <- EU 00172010 (Ghidra, non-matching)

void func_00172010(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x70);
  if (uVar3 != 9) {
    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2c8);
    if (*(int *)(param_1 + 0x2c4) == -1 && *(int *)(param_1 + 0x2c0) == -1) {
      *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x2c0) - *(int *)(param_1 + 0x2c8);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x2dc) = iVar1;
    }
    puVar2 = (undefined4 *)(param_1 + 0x224);
    if (uVar3 < 9) {
      puVar2 = puVar2 + uVar3 * 4;
    }
    (**(code **)*puVar2)(puVar2,2);
    *(undefined1 *)(param_1 + 0x70) = 9;
    *(undefined4 *)(param_1 + 0x2c0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffffd;
    *(undefined1 *)(param_1 + 0x2d4) = 2;
  }
  return;
}

