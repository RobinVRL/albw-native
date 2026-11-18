#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0028d5a4;

// USA 0028D570 <- EU 0028D598 (Ghidra, non-matching)
// GLOBAL DAT_0028d5a4 undefined4

undefined4 * func_0028D570(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0028d5a4;
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

