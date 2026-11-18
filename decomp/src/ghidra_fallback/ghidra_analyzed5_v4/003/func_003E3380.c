#include "ghidra_types.h"


// USA 003E3380 <- EU 003E3360 (Ghidra, non-matching)

undefined4 * func_003E3380(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  *param_1 = param_2;
  do {
    puVar3 = (uint *)*param_1;
    uVar2 = *puVar3;
    if (0xe < (uVar2 & 0xff)) {
      uVar2 = 0;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 & 0xff;
  return param_1;
}

