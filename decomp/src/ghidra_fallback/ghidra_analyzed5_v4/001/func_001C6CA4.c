#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_001c6ccc;

// USA 001C6CA4 <- EU 001C6CA4 (Ghidra, non-matching)
// GLOBAL DAT_001c6ccc int

undefined4 func_001C6CA4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001c6ccc;
  *param_1 = DAT_001c6ccc;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x10f);
  return func_001510A4(puVar2 + -0x10f);
}

