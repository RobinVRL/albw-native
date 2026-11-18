#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B8D4(int param_1);

// USA 0056CB18 <- EU 0056CAF0 (Ghidra, non-matching)

undefined4 func_0056CB18(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0056AF9C(*(int *)(*(int *)(param_1 + 4) + 0x3c),param_2);
  if (iVar1 != 0) {
    uVar2 = func_0056B8D4(iVar1);
    return uVar2;
  }
  return 0;
}

