#include "ghidra_types.h"


// USA 00255120 <- EU 00255148 (Ghidra, non-matching)

void func_00255120(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)*(char *)(*param_1 + 0x6b1);
  if (((((iVar1 < 0) || (4 < iVar1 - 0x12U)) || (piVar2 = param_1 + iVar1, piVar2[10] == 0)) ||
      (piVar2[0x25] != 5)) &&
     (((iVar1 = (int)*(char *)(*param_1 + 0x6a5), iVar1 < 0 || (4 < iVar1 - 0x12U)) ||
      ((piVar2 = param_1 + iVar1, piVar2[10] == 0 || (piVar2[0x25] != 5)))))) {
    iVar1 = 0x12;
    while (((4 < iVar1 - 0x12U || (param_1[iVar1 + 10] == 0)) || (param_1[iVar1 + 0x25] != 5))) {
      iVar1 = iVar1 + 1;
      if (0x16 < iVar1) {
        return;
      }
    }
    param_1[iVar1 + 0x25] = 0;
    return;
  }
  piVar2[0x25] = 0;
  return;
}

