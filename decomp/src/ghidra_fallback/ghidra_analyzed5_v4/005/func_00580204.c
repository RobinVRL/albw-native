#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 00580204 <- EU 005801DC (Ghidra, non-matching)

undefined4 func_00580204(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar2 = param_1 + 0x54;
  }
  for (iVar1 = *(int *)(param_1 + 0x8c); iVar1 = iVar1 - *(int *)(param_1 + 0x94),
      iVar1 != (param_1 + 0x88) - *(int *)(param_1 + 0x94);
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x94) + 4)) {
  }
  if (iVar2 != 0) {
    return func_0010EEE0(iVar2);
  }
  return 0;
}

