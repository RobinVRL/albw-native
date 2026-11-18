#include "ghidra_types.h"

extern int func_0058077C(int param_1,uint param_2);

// USA 00688818 <- EU 006887F0 (Ghidra, non-matching)

int func_00688818(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_0058077C(param_1 + 0x84,param_2);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -0x5c;
  }
  return iVar1;
}

