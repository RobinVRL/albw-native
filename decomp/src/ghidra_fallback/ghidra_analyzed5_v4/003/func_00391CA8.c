#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int DAT_00391cc4;

// GLOBAL DAT_00391cc4 int
// USA 00391CA8 <- EU 00391C88 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_00391CA8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00391cc4 + 0x54;
  *param_1 = DAT_00391cc4;
  param_1[200] = iVar1;
  func_002E1B70(param_1 + 0x105);
  func_002E1B70(param_1 + 0x103);
  return func_001510A4(param_1);
}

