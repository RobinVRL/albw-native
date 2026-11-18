#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_002e7248;
extern int DAT_002e724c;

// USA 002E7220 <- EU 002E71FC (Ghidra, non-matching)
// GLOBAL DAT_002e7248 int
// GLOBAL DAT_002e724c int

undefined4 func_002E7220(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002e7248;
  *param_1 = DAT_002e7248;
  param_1[200] = iVar1 + 0x84;
  func_0036D0E0(param_1 + 0x231);
  func_0036D0E0(param_1 + 0x230);
  func_0036D0E0(param_1 + 0x22f);
  iVar1 = DAT_002e724c;
  *param_1 = DAT_002e724c;
  param_1[200] = iVar1 + 0x84;
  return func_001510A4(param_1);
}

