#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001db4e0;

// USA 001DB4B8 <- EU 001DB4B8 (Ghidra, non-matching)
// GLOBAL DAT_001db4e0 int

undefined4 func_001DB4B8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001db4e0;
  *param_1 = DAT_001db4e0;
  param_1[200] = iVar1 + 100;
  puVar2 = func_004EE540(param_1 + 0x111);
  return func_001510A4(puVar2 + -0x111);
}

