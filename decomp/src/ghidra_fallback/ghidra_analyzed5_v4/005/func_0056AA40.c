#include "ghidra_types.h"


// USA 0056AA40 <- EU 0056AA18 (Ghidra, non-matching)

undefined4 func_0056AA40(int param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = *(uint **)(param_1 + 8);
  uVar3 = 0;
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 <= param_3) ||
       (puVar2 = (undefined4 *)((int)puVar1 + puVar1[param_3 * 2 + 2]), puVar2 == (undefined4 *)0x0)
       ) {
      return 0;
    }
    uVar3 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar3;
    uVar3 = 1;
  }
  return uVar3;
}

