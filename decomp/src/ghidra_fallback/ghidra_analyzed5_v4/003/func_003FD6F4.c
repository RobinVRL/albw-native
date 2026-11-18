#include "ghidra_types.h"


// USA 003FD6F4 <- EU 003FD6D4 (Ghidra, non-matching)

int func_003FD6F4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    do {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 4);
      param_1 = iVar2;
    } while (iVar1 == iVar2 + 0x14);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  return iVar1 + -4;
}

