#include "ghidra_types.h"


// USA 00293D4C <- EU 00293D74 (Ghidra, non-matching)

void func_00293D4C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x20);
    for (iVar1 = *(int *)(param_1 + 0x18) - iVar2; iVar1 != (param_1 + 0x14) - iVar3;
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
      if ((*(uint *)(iVar1 + 0x38) & 0x200) != 0) {
        *(undefined1 *)(iVar1 + 0x6c) = 0;
      }
    }
  }
  return;
}

