#include "ghidra_types.h"

extern int func_003D0FA4(int *param_1);
extern int func_004A1520();
extern undefined4 DAT_00152cd4;

// USA 00152CB4 <- EU 00152CB8 (Ghidra, non-matching)
// GLOBAL DAT_00152cd4 undefined4

undefined4 * func_00152CB4(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = DAT_00152cd4;
  piVar1 = func_003D0FA4(param_1 + 8);
  puVar2 = func_004A1520(piVar1 + -8);
  return puVar2;
}

