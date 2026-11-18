#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00495050;
extern undefined4 *DAT_00495054;

// USA 00495030 <- EU 00495008 (Ghidra, non-matching)
// GLOBAL DAT_00495050 undefined4
// GLOBAL DAT_00495054 undefined4 *

undefined4 func_00495030(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00495054;
  *param_1 = DAT_00495050;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

