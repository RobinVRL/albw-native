#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_001223e0;

// USA 001223BC <- EU 001223BC (Ghidra, non-matching)
// GLOBAL DAT_001223e0 undefined4

undefined4 * func_001223BC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_001223e0;
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

