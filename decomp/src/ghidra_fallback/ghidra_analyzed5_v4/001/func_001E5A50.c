#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);

// USA 001E5A50 <- EU 001E5A50 (Ghidra, non-matching)

uint * func_001E5A50(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  if ((0 < (int)param_3) && (uVar1 = func_0010CEE0(param_3 * 4,param_2,4), uVar1 != 0)) {
    param_1[1] = uVar1;
    *param_1 = param_3;
  }
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1 & 1;
    if (uVar2 == 1) {
      *(undefined4 *)param_1[1] = 0;
    }
    uVar3 = (uint)(uVar2 == 1);
    for (; (int)uVar2 < (int)uVar1; uVar2 = uVar2 + 2) {
      *(undefined4 *)(param_1[1] + uVar3 * 4) = 0;
      *(undefined4 *)(param_1[1] + (uVar3 + 1) * 4) = 0;
      uVar3 = uVar3 + 2;
    }
  }
  param_1[3] = param_1[1];
  return param_1;
}

