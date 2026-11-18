#include "ghidra_types.h"


// USA 004FD068 <- EU 004FD040 (Ghidra, non-matching)

void * func_004FD068(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    do {
      iVar2 = *(int *)(param_1 + uVar1 * 0xc);
      if (iVar2 != 0) {
        uVar3 = *(uint *)(iVar2 + 0x164);
        *(uint *)(iVar2 + 0x164) = uVar3 | 0x4000;
        *(uint *)(iVar2 + 0x164) = uVar3 & 0xfff7ffff | 0x4000;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0xa8));
  }
  return (void *)param_1;
}

