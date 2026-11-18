#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_001510A4();
extern int DAT_0029a754;
extern undefined *DAT_0029a758;

// USA 0029A73C <- EU 0029A718 (Ghidra, non-matching)
// GLOBAL DAT_0029a754 int
// GLOBAL DAT_0029a758 undefined *

undefined4 func_0029A73C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0029a754;
  param_1[200] = DAT_0029a754 + 0x54;
  *param_1 = iVar1;
  func_00100950((int)(param_1 + 0x161),DAT_0029a758,0x60,5);
  return func_001510A4(param_1);
}

