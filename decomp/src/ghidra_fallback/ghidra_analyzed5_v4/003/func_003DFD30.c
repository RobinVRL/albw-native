#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);

// USA 003DFD30 <- EU 003DFD10 (Ghidra, non-matching)

undefined4 func_003DFD30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x56) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x3c);
    iVar6 = *(int *)(param_1 + 0x14);
    uVar5 = (uint)*(byte *)(param_1 + 0x55);
    if (uVar5 != 0) {
      iVar7 = 0;
      do {
        iVar2 = iVar4 * 0x280 * iVar7;
        iVar1 = iVar7 * 4;
        uVar5 = uVar5 - 1;
        iVar7 = iVar7 + 1;
        *(uint *)(param_1 + iVar1 + 0x1c) = iVar2 + (iVar6 + 0x1fU & 0xffffffe0);
      } while (uVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    func_001164F4(*(undefined4 **)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    uVar5 = (uint)*(byte *)(param_1 + 0x55);
    if (uVar5 != 0) {
      iVar4 = 0;
      do {
        iVar6 = iVar4 * 4;
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(param_1 + iVar6 + 0x2c) = 0;
      } while (uVar5 != 0);
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

