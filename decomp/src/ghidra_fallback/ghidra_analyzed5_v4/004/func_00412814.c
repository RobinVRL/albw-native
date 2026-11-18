#include "ghidra_types.h"

extern int func_004128D8(int param_1);

// USA 00412814 <- EU 004127F4 (Ghidra, non-matching)

undefined4 func_00412814(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[3] != 0) {
    if (*param_1 < param_1[3]) {
      return 1;
    }
    iVar1 = func_004128D8((int)param_1);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x50) + (uint)*(byte *)(iVar1 + 0x99);
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      if (iVar1 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}

