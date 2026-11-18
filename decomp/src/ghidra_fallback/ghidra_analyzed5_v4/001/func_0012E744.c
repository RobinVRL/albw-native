#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0012e78c;
extern undefined4 *DAT_0012e790;

// USA 0012E744 <- EU 0012E744 (Ghidra, non-matching)
// GLOBAL DAT_0012e78c undefined4
// GLOBAL DAT_0012e790 undefined4 *

undefined4 func_0012E744(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0012e790;
  *param_1 = DAT_0012e78c;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

