#include "ghidra_types.h"


// USA 00407C04 <- EU 00407BE4 (Ghidra, non-matching)

undefined4 func_00407C04(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0xc] != 0) {
    if (*param_1 < param_1[0xc]) {
      return 1;
    }
    iVar2 = param_1[4];
    if (iVar2 != 0x104) {
      iVar2 = (uint)*(byte *)(iVar2 + -0x6b) + *(int *)(iVar2 + -0xb4);
      if ((char)param_1[0x16] == '\0') {
        iVar1 = UnsignedSaturate(iVar2,7);
        UnsignedDoesSaturate(iVar2,7);
        if (iVar1 <= param_2) {
          return 1;
        }
      }
      else {
        iVar1 = UnsignedSaturate(iVar2,7);
        UnsignedDoesSaturate(iVar2,7);
        if (iVar1 < param_2) {
          return 1;
        }
      }
    }
  }
  return 0;
}

