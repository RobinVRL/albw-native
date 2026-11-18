#include "ghidra_types.h"


// USA 0010AD90 <- EU 0010AD90 (Ghidra, non-matching)

undefined4 * func_0010AD90(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  do {
    puVar3 = (uint *)*param_1;
    uVar2 = *puVar3;
    if (0xe < (uVar2 & 0xff)) {
      uVar2 = 0;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 & 0xff;
  *param_1 = 0;
  return param_1;
}

