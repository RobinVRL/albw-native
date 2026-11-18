#include "ghidra_types.h"


// USA 00537AD4 <- EU 00537AAC (Ghidra, non-matching)

int func_00537AD4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = 0x12;
  do {
    if (((iVar1 - 0x12U < 5) && (iVar3 = param_1 + iVar1 * 4, *(int *)(iVar3 + 0x28) != 0)) &&
       (*(int *)(iVar3 + 0x94) == 5)) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x17);
  return iVar2;
}

