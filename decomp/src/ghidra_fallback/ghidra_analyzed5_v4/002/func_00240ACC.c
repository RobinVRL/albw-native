#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00240af4;

// USA 00240ACC <- EU 00240ACC (Ghidra, non-matching)
// GLOBAL DAT_00240af4 int

undefined4 func_00240ACC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00240af4;
  *param_1 = DAT_00240af4;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x10e);
  return func_001510A4(puVar2 + -0x10e);
}

