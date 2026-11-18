#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00260e50;
extern undefined4 *DAT_00260e54;

// USA 00260DFC <- EU 00260E24 (Ghidra, non-matching)
// GLOBAL DAT_00260e50 undefined4
// GLOBAL DAT_00260e54 undefined4 *

undefined4 * func_00260DFC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00260e54;
  *param_1 = DAT_00260e50;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

