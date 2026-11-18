#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int DAT_00421470;

// USA 00421454 <- EU 00421434 (Ghidra, non-matching)
// GLOBAL DAT_00421470 int

undefined4 func_00421454(int param_1)

{
  if (DAT_00421470 <=
      (int)ALBW_AS_U32(((*(float *)(*(int *)(**(int **)(param_1 + 0x1c) + 0x10) + 0x20) +
            *(float *)(*(int *)(param_1 + 0x44) + 0x40)) - *(float *)(param_1 + 0x48)))) {
    func_0012C718(param_1);
    return (undefined4)param_1;
  }
  return (undefined4)param_1;
}

