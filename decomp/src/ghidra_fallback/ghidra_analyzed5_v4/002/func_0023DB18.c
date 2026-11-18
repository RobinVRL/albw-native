#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0023db40;

// USA 0023DB18 <- EU 0023DB18 (Ghidra, non-matching)
// GLOBAL DAT_0023db40 int

undefined4 func_0023DB18(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0023db40;
  *param_1 = DAT_0023db40;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x106);
  return func_001510A4(puVar2 + -0x106);
}

