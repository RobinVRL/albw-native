#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0023b760;

// USA 0023B74C <- EU 0023B74C (Ghidra, non-matching)
// GLOBAL DAT_0023b760 int

undefined4 func_0023B74C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0023b760 + 0x54;
  *param_1 = DAT_0023b760;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

