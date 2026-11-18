#include "ghidra_types.h"

extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int *DAT_00539a7c;

// USA 00539A98 <- EU 00539A70 (Ghidra, non-matching)
// GLOBAL DAT_00539a7c int *

bool func_00539A98(undefined4 param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = func_005822A0(*DAT_00539a7c,param_2,param_3);
  return bVar1;
}

