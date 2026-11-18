#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EDD04(undefined4 *param_1);
extern int DAT_001372b0;

// USA 00137288 <- EU 00137288 (Ghidra, non-matching)
// GLOBAL DAT_001372b0 int

undefined4 func_00137288(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_001372b0;
  *param_1 = DAT_001372b0;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EDD04(param_1 + 0x10d);
  return func_001510A4(puVar2 + -0x10d);
}

