#include "ghidra_types.h"

extern int func_003B2718(int *param_1);

// USA 003AC318 <- EU 003AC2F4 (Ghidra, non-matching)

bool func_003AC318(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  piVar1 = param_1 + 0x14f;
  if (piVar2 != piVar1) {
    param_1[0x173] = *(int *)(*param_1 + 0xb10);
    param_1[1] = (int)piVar1;
    func_003B2718(piVar1);
  }
  return piVar2 != piVar1;
}

