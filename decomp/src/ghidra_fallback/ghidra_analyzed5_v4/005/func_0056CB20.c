#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B8D4(int param_1);

// USA 0056CB20 <- EU 0056CAF8 (Ghidra, non-matching)

undefined4 func_0056CB20(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  if (iVar1 != 0) {
    return func_0056B8D4(iVar1);
  }
  return 0;
}

