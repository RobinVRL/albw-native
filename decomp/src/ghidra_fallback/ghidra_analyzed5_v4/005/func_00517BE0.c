#include "ghidra_types.h"

extern int func_004A3700(int param_1);

// USA 00517BE0 <- EU 00517BB8 (Ghidra, non-matching)

void func_00517BE0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar5 = (int)*(short *)(param_1 + 0xce0) - 1;
  if (10 < uVar5) {
    uVar5 = 10;
  }
  if (uVar5 != 0) {
    do {
      iVar3 = param_1 + uVar4 * 0x24;
      iVar1 = *(int *)(iVar3 + 0x420);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(iVar3 + 0x424))) {
        puVar2 = (uint *)(iVar1 + 0x3c);
        uVar6 = *puVar2;
        *(uint *)(iVar1 + 0x3c) = uVar6 & 0xfffffffb;
        *(uint *)(iVar1 + 0x3c) = uVar6 & 0xffffffbb;
        *puVar2 = *puVar2 | 8;
        func_004A3700(iVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  iVar1 = *(int *)(param_1 + 0xc84);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0xc88))) {
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar1);
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}

