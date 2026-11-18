#include "ghidra_types.h"


// USA 003E6D64 <- EU 003E6D44 (Ghidra, non-matching)

undefined4 func_003E6D64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar3 = *(int *)(param_1 + iVar1 * 4 + 0x10);
      if ((*(int *)(iVar3 + 0x20) == *(int *)(param_1 + 0xc)) && (*(int *)(iVar3 + 0xd4) != 0)) {
        if (iVar2 == param_2) {
          return *(undefined4 *)(param_1 + iVar1 * 4 + 0x10);
        }
        iVar2 = iVar2 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return 0;
}

