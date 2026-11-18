#include "ghidra_types.h"

extern int func_00490C38(int param_1);
extern int func_004A1520();
extern undefined4 DAT_00490ca4;

// USA 00490CA8 <- EU 00490C80 (Ghidra, non-matching)
// GLOBAL DAT_00490ca4 undefined4

undefined4 * func_00490CA8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00490ca4;
  func_00490C38((int)param_1);
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

