#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00121df4;

// USA 00121DD0 <- EU 00121DD0 (Ghidra, non-matching)
// GLOBAL DAT_00121df4 undefined4

undefined4 * func_00121DD0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00121df4;
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

