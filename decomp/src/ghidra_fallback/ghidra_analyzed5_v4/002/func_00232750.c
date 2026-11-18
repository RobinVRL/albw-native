#include "ghidra_types.h"


// USA 00232750 <- EU 00232750 (Ghidra, non-matching)

int * func_00232750(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined1 *)(iVar1 + 0xc1) = 0;
    *param_1 = 0;
  }
  uVar2 = 0;
  if (0 < param_1[1]) {
    do {
      if (uVar2 < (uint)param_1[1]) {
        iVar1 = *(int *)(param_1[3] + uVar2 * 4);
      }
      else {
        iVar1 = 0;
      }
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 + 0xb0) = 0;
      *(undefined1 *)(iVar1 + 0xc0) = 0;
    } while ((int)uVar2 < param_1[1]);
  }
  param_1[1] = 0;
  return param_1;
}

