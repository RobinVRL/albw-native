#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 00580270 <- EU 00580248 (Ghidra, non-matching)

int func_00580270(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar2 = param_1 + 0x54;
  }
  iVar3 = 0;
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 = iVar1 - *(int *)(param_1 + 0x84),
      iVar1 != (param_1 + 0x78) - *(int *)(param_1 + 0x84);
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x84) + 4)) {
    iVar3 = iVar3 + *(int *)(iVar1 + 8);
  }
  if (iVar2 != 0) {
    func_0010EEE0(iVar2);
  }
  return iVar3;
}

