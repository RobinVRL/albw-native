#include "ghidra_types.h"


// USA 003F8518 <- EU 003F84F8 (Ghidra, non-matching)

undefined4 func_003F8518(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4bc) == -1 && *(int *)(param_1 + 0x4b8) == -1) {
    iVar2 = *(int *)(*(int *)(param_2 + 0xd8) + 0x34);
    if (iVar2 == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + iVar2 * 4 + 0x4c0);
    }
    return uVar1;
  }
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0x4b8) * 4 + 0x4c0);
}

