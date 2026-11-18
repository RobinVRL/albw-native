#include "ghidra_types.h"


// USA 00542AB4 <- EU 00542A8C (Ghidra, non-matching)

bool func_00542AB4(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  
  bVar1 = *(uint *)(param_1 + 0x268) < *(uint *)(param_1 + 0x26c);
  if (bVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x27c);
    *param_3 = *(undefined4 *)(param_1 + 0x278);
  }
  return bVar1;
}

