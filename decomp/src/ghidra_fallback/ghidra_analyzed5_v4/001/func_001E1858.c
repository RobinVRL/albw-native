#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_001e18a0;
extern int *DAT_001e18a4;

// USA 001E1858 <- EU 001E1858 (Ghidra, non-matching)
// GLOBAL DAT_001e18a0 undefined4
// GLOBAL DAT_001e18a4 int *

undefined4 * func_001E1858(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = DAT_001e18a4;
  *param_1 = DAT_001e18a0;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    func_0049116C((undefined4 *)(*piVar1 + 0x1fb4));
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

