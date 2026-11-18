#include "ghidra_types.h"


// USA 003CC1E4 <- EU 003CC1C0 (Ghidra, non-matching)

undefined4 * func_003CC1E4(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_2 & 0xf) != 0) && (uVar3 = 4 - ((param_2 << 0x1c) >> 0x1e), 0 < (int)uVar3)) {
    puVar1 = param_1 + -1;
    if ((uVar3 & 1) != 0) {
      *param_1 = 0;
      puVar1 = param_1;
    }
    for (iVar2 = (int)uVar3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
    param_1 = param_1 + uVar3;
  }
  return param_1;
}

