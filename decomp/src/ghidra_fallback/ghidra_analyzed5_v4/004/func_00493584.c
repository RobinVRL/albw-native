#include "ghidra_types.h"


// USA 00493584 <- EU 0049355C (Ghidra, non-matching)

int func_00493584(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int in_r3;
  uint uVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  if (-1 < param_2) {
    in_r3 = *(int *)(param_1 + 0x34);
    bVar3 = in_r3 == param_2;
  }
  if (!bVar3 && (-1 < param_2 && param_2 <= in_r3)) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x38) + param_2 * 0x10 + 8);
    if (param_3 != (uint *)0x0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x38) + param_2 * 0x10 + 0xc);
      if (uVar1 < uVar2) {
        return 0;
      }
      param_3[1] = uVar1 - uVar2;
      *param_3 = uVar2;
    }
    return *(int *)(param_1 + 0x3c) + uVar2;
  }
  return 0;
}

