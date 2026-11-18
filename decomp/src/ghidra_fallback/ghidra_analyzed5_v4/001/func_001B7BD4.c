#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_001b7c1c;
extern undefined4 *DAT_001b7c20;

// USA 001B7BD4 <- EU 001B7BD4 (Ghidra, non-matching)
// GLOBAL DAT_001b7c1c undefined4
// GLOBAL DAT_001b7c20 undefined4 *

undefined4 func_001B7BD4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_001b7c20;
  *param_1 = DAT_001b7c1c;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

