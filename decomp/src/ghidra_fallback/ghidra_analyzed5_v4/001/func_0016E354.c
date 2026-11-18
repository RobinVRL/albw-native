#include "ghidra_types.h"

extern int func_004D0804(uint param_1,int *param_2);
extern int func_00566C34(int param_1,int param_2,int param_3);

// USA 0016E354 <- EU 0016E354 (Ghidra, non-matching)

void func_0016E354(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    piVar6 = (int *)(param_1 + 0xc + iVar7 * 0xc);
    uVar4 = 0;
    piVar6[2] = -1;
    if (piVar6[1] != 0) {
      do {
        puVar5 = (ushort *)(*piVar6 + uVar4 * 0x154);
        func_00566C34(*(int *)(param_1 + 8),uVar4 & 0xffff,(int)puVar5);
        uVar4 = uVar4 + 1;
        *puVar5 = *puVar5 | 0x100;
      } while (uVar4 < (uint)piVar6[1]);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0xf8)) {
    do {
      uVar3 = *(uint *)(param_1 + 0xf8);
      puVar2 = (undefined4 *)(param_1 + 0xf8);
      if (uVar4 < uVar3) {
        uVar1 = *(uint *)(param_1 + 0xfc);
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0xfc);
        uVar1 = uVar3;
      }
      iVar7 = uVar4 * 0x2c;
      if (uVar4 < uVar3) {
        puVar2 = (undefined4 *)(uVar1 + uVar4 * 4);
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x34) + iVar7) + 0xd0) = *puVar2;
    } while ((int)uVar4 < *(int *)(param_1 + 0xf8));
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    for (iVar7 = *(int *)(param_1 + 200); iVar7 != param_1 + 0xc4; iVar7 = *(int *)(iVar7 + 4)) {
      func_004D0804(*(uint *)(iVar7 + 8),param_2);
    }
  }
  return;
}

