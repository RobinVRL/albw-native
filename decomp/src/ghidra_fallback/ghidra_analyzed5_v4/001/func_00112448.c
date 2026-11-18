#include "ghidra_types.h"


// USA 00112448 <- EU 00112448 (Ghidra, non-matching)

int func_00112448(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *(int *)(param_1 + 0x440) + 1U & *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x440) = uVar1;
    if (*(int *)(*(int *)(param_1 + 0x14) + uVar1 * 0x288 + 4) == 0) {
      iVar2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x440) * 0x288;
      *param_2 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x18));
  *param_2 = 0;
  return 0;
}

