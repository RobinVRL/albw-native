#include "ghidra_types.h"

extern uint DAT_00172478;

// USA 0017244C <- EU 0017244C (Ghidra, non-matching)
// GLOBAL DAT_00172478 uint

void * func_0017244C(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_00172478;
  if (param_2 < 1000) {
    uVar2 = param_2 + *(int *)(param_1 + 0x2cc);
    *(uint *)(param_1 + 0x2cc) = uVar2;
    if (999 < uVar2) {
      uVar2 = uVar1;
    }
    *(uint *)(param_1 + 0x2cc) = uVar2;
  }
  else {
    *(uint *)(param_1 + 0x2cc) = DAT_00172478;
  }
  return (void *)param_1;
}

