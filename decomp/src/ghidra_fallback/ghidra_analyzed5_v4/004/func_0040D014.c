#include "ghidra_types.h"


// USA 0040D014 <- EU 0040CFF4 (Ghidra, non-matching)

bool func_0040D014(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    *(int *)(iVar1 + 0x30) = param_2;
    *(undefined4 *)(iVar1 + 0x34) = param_3;
  }
  return param_2 != 0;
}

