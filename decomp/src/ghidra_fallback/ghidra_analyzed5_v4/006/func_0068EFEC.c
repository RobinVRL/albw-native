#include "ghidra_types.h"


// USA 0068EFEC <- EU 0068EFC4 (Ghidra, non-matching)

void func_00583B90(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x3d0);
    param_2[1] = *(undefined4 *)(param_1 + 0x3d4);
    param_2[2] = *(undefined4 *)(param_1 + 0x3d8);
    param_2[1] = ALBW_AS_U32(ALBW_AS_F32(param_2[1]) + *(float *)(param_1 + 0x838));
  }
  return;
}

