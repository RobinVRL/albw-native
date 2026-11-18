#include "ghidra_types.h"


// USA 004FD130 <- EU 004FD108 (Ghidra, non-matching)

void * func_004FD130(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    do {
      piVar2 = (int *)(param_1 + uVar1 * 0xc);
      if ((((param_2 == 0) && ((*(byte *)(piVar2 + 1) & 2) != 0)) ||
          ((*(byte *)(piVar2 + 1) & 8) != 0)) && (iVar3 = *piVar2, iVar3 != 0)) {
        uVar4 = *(uint *)(iVar3 + 0x164);
        *(uint *)(iVar3 + 0x164) = uVar4 | 0x4000;
        *(uint *)(iVar3 + 0x164) = uVar4 & 0xfffeffff | 0x4000;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0xa8));
  }
  return (void *)param_1;
}

