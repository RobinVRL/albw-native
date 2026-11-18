#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_003cd55c;
extern undefined *DAT_003cd560;

// USA 003CD524 <- EU 003CD500 (Ghidra, non-matching)
// GLOBAL DAT_003cd55c undefined *
// GLOBAL DAT_003cd560 undefined *

int func_003CD524(int param_1)

{
  int iVar1;
  
  iVar1 = func_00100118(param_1 + 1,DAT_003cd55c,1,3);
  iVar1 = func_00100118(iVar1 + 3,DAT_003cd560,1,3);
  iVar1 = func_00100118(iVar1 + 6,DAT_003cd55c,1,3);
  iVar1 = func_00100118(iVar1 + 3,DAT_003cd560,1,3);
  return iVar1 + -0xd;
}

