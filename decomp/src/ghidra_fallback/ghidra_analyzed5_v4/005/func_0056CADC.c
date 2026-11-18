#include "ghidra_types.h"

extern int func_0056B1A0(int param_1,uint param_2);

// USA 0056CADC <- EU 0056CAB4 (Ghidra, non-matching)

int func_0056CADC(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (uVar2 = func_0056B1A0(*(int *)(param_1 + 0x3c),param_2), uVar2 != 0xffffffff)) {
    if (uVar2 == 0xffffffff) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x38) + *(int *)(*(int *)(param_1 + 0x38) + 4);
      if (iVar1 != 0) {
        iVar1 = iVar1 + *(int *)(iVar1 + uVar2 * 0xc + 8);
      }
    }
    return iVar1;
  }
  return 0;
}

