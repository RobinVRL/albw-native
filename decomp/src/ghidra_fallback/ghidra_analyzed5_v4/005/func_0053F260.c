#include "ghidra_types.h"

extern int func_005594D0(int param_1);

// USA 0053F260 <- EU 0053F238 (Ghidra, non-matching)

undefined4 func_0053F260(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((*(short *)(*(int *)(param_1 + 0x14) + 0x42) == 0x74) &&
     (bVar1 = func_005594D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48)), bVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

