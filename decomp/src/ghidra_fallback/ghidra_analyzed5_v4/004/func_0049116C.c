#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00491150;

// USA 0049116C <- EU 00491144 (Ghidra, non-matching)
// GLOBAL DAT_00491150 undefined4

undefined4 * func_0049116C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00491150;
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

