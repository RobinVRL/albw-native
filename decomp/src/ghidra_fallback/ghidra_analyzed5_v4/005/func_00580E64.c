#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 00580E64 <- EU 00580E3C (Ghidra, non-matching)

int func_00580E64(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar3 = param_1 + 0x54;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar3 != 0) {
    func_0010EEE0(iVar3);
  }
  return iVar2 - iVar1;
}

