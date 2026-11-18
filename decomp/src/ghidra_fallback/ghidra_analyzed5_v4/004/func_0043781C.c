#include "ghidra_types.h"


// USA 0043781C <- EU 004377FC (Ghidra, non-matching)

void func_0043781C(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x94);
  uVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      if (uVar3 < uVar1) {
        iVar2 = *(int *)(*(int *)(param_2 + 0x9c) + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_0043781C(param_1,iVar2);
      uVar3 = uVar3 + 1;
      *param_1 = *param_1 + 1;
      uVar1 = *(uint *)(param_2 + 0x94);
    } while ((int)uVar3 < (int)uVar1);
  }
  return;
}

