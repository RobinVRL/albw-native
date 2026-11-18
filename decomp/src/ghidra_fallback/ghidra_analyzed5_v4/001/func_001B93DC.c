#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_001b9408;
extern undefined4 *DAT_001b940c;

// USA 001B93DC <- EU 001B93DC (Ghidra, non-matching)
// GLOBAL DAT_001b9408 undefined4
// GLOBAL DAT_001b940c undefined4 *

undefined4 * func_001B93DC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_001b940c;
  *param_1 = DAT_001b9408;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

