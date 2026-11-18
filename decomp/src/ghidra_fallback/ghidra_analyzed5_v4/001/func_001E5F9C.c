#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001e5fc0;

// USA 001E5F9C <- EU 001E5F9C (Ghidra, non-matching)
// GLOBAL DAT_001e5fc0 int

undefined4 func_001E5F9C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001e5fc0;
  *param_1 = DAT_001e5fc0;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

