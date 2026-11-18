#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004a1588;
extern undefined4 *DAT_004a158c;

// USA 004A1568 <- EU 004A1540 (Ghidra, non-matching)
// GLOBAL DAT_004a1588 undefined4
// GLOBAL DAT_004a158c undefined4 *

undefined4 func_004A1568(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004a158c;
  *param_1 = DAT_004a1588;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

