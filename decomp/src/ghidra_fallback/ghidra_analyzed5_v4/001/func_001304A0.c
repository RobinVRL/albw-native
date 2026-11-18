#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_001304e8;
extern undefined4 *DAT_001304ec;

// USA 001304A0 <- EU 001304A0 (Ghidra, non-matching)
// GLOBAL DAT_001304e8 undefined4
// GLOBAL DAT_001304ec undefined4 *

undefined4 func_001304A0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_001304ec;
  *param_1 = DAT_001304e8;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

