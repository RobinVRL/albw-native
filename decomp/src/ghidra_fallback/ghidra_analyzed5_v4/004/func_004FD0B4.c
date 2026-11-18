#include "ghidra_types.h"


// USA 004FD0B4 <- EU 004FD08C (Ghidra, non-matching)

void func_004FD0B4(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  uVar2 = 0;
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) & 0xffdfffff;
  if (*(char *)(param_1 + 0x650) != '\0') {
    do {
      iVar1 = *(int *)(param_1 + 0x5a8 + uVar2 * 0xc);
      if (iVar1 != 0) {
        uVar4 = *(uint *)(iVar1 + 0x164);
        *(uint *)(iVar1 + 0x164) = uVar4 | 0x4000;
        *(uint *)(iVar1 + 0x164) = uVar4 & 0xfff7ffff | 0x4000;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x650));
  }
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) & 0xffdfffff;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x650) != '\0') {
    do {
      piVar3 = (int *)(param_1 + 0x5a8 + uVar2 * 0xc);
      if ((((*(byte *)(piVar3 + 1) & 2) != 0) || ((*(byte *)(piVar3 + 1) & 8) != 0)) &&
         (iVar1 = *piVar3, iVar1 != 0)) {
        uVar4 = *(uint *)(iVar1 + 0x164);
        *(uint *)(iVar1 + 0x164) = uVar4 | 0x4000;
        *(uint *)(iVar1 + 0x164) = uVar4 & 0xfffeffff | 0x4000;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x650));
  }
  return;
}

