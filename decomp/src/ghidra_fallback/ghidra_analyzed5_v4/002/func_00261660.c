#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_002616b4;
extern undefined4 *DAT_002616b8;

// USA 00261660 <- EU 00261688 (Ghidra, non-matching)
// GLOBAL DAT_002616b4 undefined4
// GLOBAL DAT_002616b8 undefined4 *

undefined4 * func_00261660(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_002616b8;
  *param_1 = DAT_002616b4;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

