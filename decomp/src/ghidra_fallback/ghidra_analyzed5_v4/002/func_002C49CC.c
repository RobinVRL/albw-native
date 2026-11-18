#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_002c49d0;

// USA 002C49CC <- EU 002C49A8 (Ghidra, non-matching)
// GLOBAL DAT_002c49d0 int

undefined4 func_002C49CC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002c49d0;
  *param_1 = DAT_002c49d0;
  param_1[200] = iVar1 + 0x54;
  func_0036D0E0(param_1 + 0x151);
  return func_001510A4(param_1);
}

