#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 005802E8 <- EU 005802C0 (Ghidra, non-matching)

undefined4 func_005802E8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar2 = param_1 + 0x54;
  }
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 = iVar1 - *(int *)(param_1 + 0x84),
      iVar1 != (param_1 + 0x78) - *(int *)(param_1 + 0x84);
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x84) + 4)) {
  }
  if (iVar2 != 0) {
    return func_0010EEE0(iVar2);
  }
  return 0;
}

