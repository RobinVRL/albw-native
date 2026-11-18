#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0026ef04;

// USA 0026EEA8 <- EU 0026EED0 (Ghidra, non-matching)
// GLOBAL DAT_0026ef04 undefined4

undefined4 * func_0026EEA8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0026ef04;
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

