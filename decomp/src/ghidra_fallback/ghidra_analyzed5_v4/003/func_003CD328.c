#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_003cd328;

// USA 003CD328 <- EU 003CD304 (Ghidra, non-matching)
// GLOBAL DAT_003cd328 undefined *

int func_003CD328(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = func_00100118((int)(param_1 + 1),DAT_003cd328,1,0xc);
  return iVar1 + -4;
}

