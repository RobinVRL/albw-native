#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0029e3e0;
extern undefined4 *DAT_0029e3e4;

// USA 0029E3BC <- EU 0029E398 (Ghidra, non-matching)
// GLOBAL DAT_0029e3e0 undefined4
// GLOBAL DAT_0029e3e4 undefined4 *

undefined4 func_0029E3BC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0029e3e4;
  *param_1 = DAT_0029e3e0;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

