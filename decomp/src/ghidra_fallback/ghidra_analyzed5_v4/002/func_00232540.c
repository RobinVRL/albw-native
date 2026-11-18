#include "ghidra_types.h"

extern int func_0012C9C4(undefined4 *param_1);
extern undefined4 DAT_00232568;

// USA 00232540 <- EU 00232540 (Ghidra, non-matching)
// GLOBAL DAT_00232568 undefined4

undefined4 * func_00232540(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0012C9C4(param_1);
  uVar1 = DAT_00232568;
  puVar2[7] = 0;
  *puVar2 = uVar1;
  puVar2[6] = puVar2[6] | 4;
  return puVar2;
}

