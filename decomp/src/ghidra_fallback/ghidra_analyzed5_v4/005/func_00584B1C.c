#include "ghidra_types.h"

extern int *DAT_00584b68;

// USA 00584B1C <- EU 00584AF4 (Ghidra, non-matching)
// GLOBAL DAT_00584b68 int *

undefined4 func_00584B1C(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((-(uint)(*(int **)(param_1 + 0x44) != (int *)0x0) & param_2) == 0) ||
     (*(char *)(param_2 + 0x2d7) != '\0')) {
    return 0;
  }
  if (((*(uint *)(param_2 + 0x2e0) & 2) == 0) &&
     ((*DAT_00584b68 == 0 || (**(int **)(*DAT_00584b68 + 0x2c) != *(int *)(param_2 + 0x2cc))))) {
                    /* WARNING: Could not recover jumptable at 0x00584b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x2c))(*(int **)(param_1 + 0x44));
    return uVar1;
  }
  return 1;
}

