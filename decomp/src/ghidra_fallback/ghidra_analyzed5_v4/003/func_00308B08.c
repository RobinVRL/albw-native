#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_005027C4();
extern int DAT_00308b28;
extern int DAT_00308b2c;

// USA 00308B08 <- EU 00308AE4 (Ghidra, non-matching)
// GLOBAL DAT_00308b28 int
// GLOBAL DAT_00308b2c int

undefined4 func_00308B08(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00308b28;
  param_1[200] = DAT_00308b28 + 0x54;
  iVar1 = DAT_00308b2c;
  *param_1 = iVar2;
  param_1[0x116] = iVar1;
  func_002E1B70(param_1 + 0x141);
  iVar2 = func_005027C4(param_1 + 0x116);
  return func_001510A4((int *)(iVar2 + -0x458));
}

