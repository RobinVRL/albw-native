#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_003615ac;
extern undefined4 *DAT_003615b0;

// USA 003615A4 <- EU 00361580 (Ghidra, non-matching)
// GLOBAL DAT_003615ac undefined4
// GLOBAL DAT_003615b0 undefined4 *

undefined4 * func_003615A4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_003615b0;
  *param_1 = DAT_003615ac;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

