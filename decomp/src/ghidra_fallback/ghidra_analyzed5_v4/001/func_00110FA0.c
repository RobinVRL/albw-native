#include "ghidra_types.h"


// USA 00110FA0 <- EU 00110FA0 (Ghidra, non-matching)

int func_00110FA0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x18);
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1 + 0x1c) + 1;
      iVar2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) * 0x48;
      *(int *)(param_1 + 0x1c) = iVar4;
      if (iVar3 <= iVar4) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      if (*(int *)(iVar2 + 0x1c) == 0) {
        return iVar2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return 0;
}

