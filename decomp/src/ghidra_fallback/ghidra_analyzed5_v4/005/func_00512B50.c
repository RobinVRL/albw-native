#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00512b50;

// USA 00512B50 <- EU 00512B28 (Ghidra, non-matching)
// GLOBAL DAT_00512b50 int

undefined4 func_00512B50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00512b50;
  *param_1 = DAT_00512b50;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EE540(param_1 + 0x105);
  return func_001510A4(puVar2 + -0x105);
}

