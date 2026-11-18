#include "ghidra_types.h"

extern int func_0029E18C(int param_1,uint param_2);

// USA 0034B918 <- EU 0034B8F4 (Ghidra, non-matching)

undefined4 func_0034B918(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  func_0029E18C(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = extraout_r1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x74);
  }
  if (iVar1 != 0 && iVar3 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar3 + 0x6c) = uVar4;
    *(undefined4 *)(iVar3 + 0x70) = uVar5;
    *(undefined4 *)(iVar3 + 0x74) = uVar6;
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 2;
      uVar7 = uVar2 & 0xffff;
      uVar2 = uVar2 + 1;
      *(undefined2 *)(iVar3 + 0x60 + uVar7 * 2) = *(undefined2 *)(param_1 + 0x12 + iVar1);
    } while (uVar2 != 4);
  }
  return *(undefined4 *)(param_1 + 0xc);
}

