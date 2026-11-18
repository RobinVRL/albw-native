#include "ghidra_types.h"

extern int *DAT_0014a3d4;

// USA 0014A354 <- EU 0014A354 (Ghidra, non-matching)
// GLOBAL DAT_0014a3d4 int *

undefined4 func_0014A354(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(*(int *)(param_1 + uVar1 * 4 + 0x10) + 0x1e9) != '\0') {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xf);
  if (*(int *)(param_1 + 0x54) < 1) {
    (**(code **)(**(int **)(param_1 + 0x10 + param_2 * 4) + 0x68))(*(int **)(param_1 + 0x10 + param_2 * 4));
    *(uint *)(*(int *)(*DAT_0014a3d4 + 0x1c) + 0x168) =
         *(uint *)(*(int *)(*DAT_0014a3d4 + 0x1c) + 0x168) | 7;
    if (param_2 != 0xc) {
      return *(undefined4 *)(param_1 + param_2 * 4 + 0x10);
    }
  }
  return 0;
}

