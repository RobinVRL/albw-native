#include "ghidra_types.h"


// USA 003E180C <- EU 003E17EC (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void * func_003E180C(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    do {
      puVar2 = (undefined4 *)puVar1[1];
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
    *param_1 = 0;
  }
  return param_1;
}

