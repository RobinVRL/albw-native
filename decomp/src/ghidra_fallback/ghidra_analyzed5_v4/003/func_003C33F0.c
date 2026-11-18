#include "ghidra_types.h"


// USA 003C33F0 <- EU 003C33CC (Ghidra, non-matching)

void * func_003C33F0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = param_1;
    iVar1 = param_1;
    if (uVar2 < 3) {
      iVar3 = param_1 + uVar2 * 0x24;
      iVar1 = param_1 + uVar2 * 0x24;
    }
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 8);
  } while ((int)uVar2 < 3);
  return (void *)param_1;
}

