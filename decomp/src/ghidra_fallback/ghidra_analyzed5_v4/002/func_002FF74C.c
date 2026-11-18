#include "ghidra_types.h"


// USA 002FF74C <- EU 002FF728 (Ghidra, non-matching)

void * func_002FF74C(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    *(int *)(param_1 + 0x184) = param_2;
  }
  uVar2 = *(uint *)(param_1 + 0x178);
  uVar1 = 0;
  if (0 < (int)uVar2) {
    do {
      if (uVar1 < uVar2) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 == param_2) {
        return (void *)param_1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar2);
  }
  if ((int)uVar2 < *(int *)(param_1 + 0x17c)) {
    *(int *)(*(int *)(param_1 + 0x180) + uVar2 * 4) = param_2;
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
  }
  bVar4 = param_3 == 0;
  if (bVar4) {
    param_3 = *(int *)(param_1 + 0x184);
  }
  if (bVar4 && param_3 == 0) {
    *(int *)(param_1 + 0x184) = param_2;
  }
  return (void *)param_1;
}

