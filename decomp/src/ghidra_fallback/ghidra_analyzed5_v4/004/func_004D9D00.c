#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_004d9cfc;

// USA 004D9D00 <- EU 004D9CD8 (Ghidra, non-matching)
// GLOBAL DAT_004d9cfc int

undefined4 func_004D9D00(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004d9cfc;
  *param_1 = DAT_004d9cfc;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x110);
  return func_001510A4(puVar2 + -0x110);
}

