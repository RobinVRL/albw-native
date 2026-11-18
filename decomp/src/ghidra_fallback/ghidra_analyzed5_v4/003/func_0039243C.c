#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_001510A4();
extern int DAT_00392454;
extern undefined *DAT_00392458;

// USA 0039243C <- EU 00392418 (Ghidra, non-matching)
// GLOBAL DAT_00392454 int
// GLOBAL DAT_00392458 undefined *

undefined4 func_0039243C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00392454;
  param_1[200] = DAT_00392454 + 0x54;
  *param_1 = iVar1;
  func_00100950((int)(param_1 + 0x11b),DAT_00392458,0x60,2);
  return func_001510A4(param_1);
}

