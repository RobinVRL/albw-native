#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EDD04(undefined4 *param_1);
extern int DAT_0039bf18;

// USA 0039BF14 <- EU 0039BEF0 (Ghidra, non-matching)
// GLOBAL DAT_0039bf18 int

undefined4 func_0039BF14(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0039bf18;
  *param_1 = DAT_0039bf18;
  param_1[200] = iVar1 + 0x54;
  puVar2 = func_004EDD04(param_1 + 0x10d);
  return func_001510A4(puVar2 + -0x10d);
}

