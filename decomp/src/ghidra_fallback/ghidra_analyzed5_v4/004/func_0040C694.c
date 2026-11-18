#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);

// USA 0040C694 <- EU 0040C674 (Ghidra, non-matching)

undefined4 func_0040C694(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x44);
    iVar6 = *(int *)(param_1 + 0x1c);
    uVar7 = (uint)*(byte *)(param_1 + 0x5d);
    if (uVar7 != 0) {
      iVar5 = 0;
      do {
        iVar2 = iVar4 * 0x280 * iVar5;
        iVar1 = iVar5 * 4;
        uVar7 = uVar7 - 1;
        iVar5 = iVar5 + 1;
        *(uint *)(param_1 + iVar1 + 0x24) = iVar2 + (iVar6 + 0x1fU & 0xffffffe0);
      } while (uVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    func_001164F4(*(undefined4 **)(param_1 + 0x1c),*(uint *)(param_1 + 0x20));
    uVar7 = (uint)*(byte *)(param_1 + 0x5d);
    if (uVar7 != 0) {
      iVar4 = 0;
      do {
        iVar6 = iVar4 * 4;
        uVar7 = uVar7 - 1;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(param_1 + iVar6 + 0x34) = 0;
      } while (uVar7 != 0);
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

