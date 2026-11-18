#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_001e265c;
extern int *DAT_001e2660;

// USA 001E2618 <- EU 001E2618 (Ghidra, non-matching)
// GLOBAL DAT_001e265c undefined4
// GLOBAL DAT_001e2660 int *

undefined4 * func_001E2618(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = DAT_001e2660;
  *param_1 = DAT_001e265c;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    func_0049116C((undefined4 *)(*piVar1 + 0x30));
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

