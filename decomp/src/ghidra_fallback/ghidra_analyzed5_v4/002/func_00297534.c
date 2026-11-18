#include "ghidra_types.h"


// USA 00297534 <- EU 0029755C (Ghidra, non-matching)

void func_00297534(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x38))[2];
  piVar1 = piVar2 + **(int **)(param_1 + 0x38);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    iVar3 = *piVar2;
    *(undefined1 *)(iVar3 + 0x49) = 1;
    *(undefined1 *)(iVar3 + 0x4a) = 1;
    *(undefined1 *)(iVar3 + 0x4b) = 0;
  }
  return;
}

