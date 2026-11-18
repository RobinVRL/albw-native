#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_003a4c0c;

// USA 003A4C0C <- EU 003A4BE8 (Ghidra, non-matching)
// GLOBAL DAT_003a4c0c int

undefined4 func_003A4C0C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_003a4c0c;
  *param_1 = DAT_003a4c0c;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

