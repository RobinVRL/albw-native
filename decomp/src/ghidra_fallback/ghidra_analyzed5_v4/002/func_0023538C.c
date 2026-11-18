#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_002353b4;

// USA 0023538C <- EU 0023538C (Ghidra, non-matching)
// GLOBAL DAT_002353b4 int

undefined4 func_0023538C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002353b4;
  *param_1 = DAT_002353b4;
  param_1[200] = iVar1 + 0x54;
  func_0036D0E0(param_1 + 0x151);
  return func_001510A4(param_1);
}

