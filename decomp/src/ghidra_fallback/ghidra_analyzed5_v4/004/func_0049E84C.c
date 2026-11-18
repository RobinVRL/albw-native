#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0049e86c;
extern undefined4 *DAT_0049e870;

// USA 0049E84C <- EU 0049E824 (Ghidra, non-matching)
// GLOBAL DAT_0049e86c undefined4
// GLOBAL DAT_0049e870 undefined4 *

undefined4 func_0049E84C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0049e870;
  *param_1 = DAT_0049e86c;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

