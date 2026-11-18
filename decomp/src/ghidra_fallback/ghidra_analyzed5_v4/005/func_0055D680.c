#include "ghidra_types.h"

extern int func_00532C78(int param_1);
extern int func_0058124C(int param_1);

// USA 0055D680 <- EU 0055D658 (Ghidra, non-matching)

undefined4 func_0055D680(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 900) == 0) && (bVar1 = func_0058124C(0), !bVar1)) ||
     (bVar1 = func_00532C78(param_1 + 0x3c), bVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

