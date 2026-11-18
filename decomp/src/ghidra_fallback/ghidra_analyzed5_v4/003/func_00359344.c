#include "ghidra_types.h"


// USA 00359344 <- EU 00359320 (Ghidra, non-matching)

int func_00359344(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (uVar3 < *(uint *)(param_1 + 0x10)) {
        iVar2 = *(int *)(param_1 + 0xc) + uVar3;
        if (*(int *)(param_1 + 8) <= iVar2) {
          iVar2 = iVar2 - *(int *)(param_1 + 8);
        }
        piVar1 = (int *)(*(int *)(param_1 + 4) + iVar2 * 4);
      }
      else {
        piVar1 = *(int **)(param_1 + 4);
      }
      piVar1 = *(int **)(param_1 + 0x58 + *piVar1 * 4);
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

