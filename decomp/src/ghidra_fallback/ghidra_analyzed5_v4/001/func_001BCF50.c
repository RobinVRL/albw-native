#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001bcf74;

// USA 001BCF50 <- EU 001BCF50 (Ghidra, non-matching)
// GLOBAL DAT_001bcf74 int

undefined4 func_001BCF50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001bcf74;
  *param_1 = DAT_001bcf74;
  param_1[200] = iVar1 + 0x5c;
  puVar2 = func_004EE540(param_1 + 0x104);
  return func_001510A4(puVar2 + -0x104);
}

