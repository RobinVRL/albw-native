#include "ghidra_types.h"


// USA 0029753C <- EU 00297564 (Ghidra, non-matching)

void func_0029753C(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[2];
  piVar1 = piVar2 + *param_1;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    iVar3 = *piVar2;
    *(undefined1 *)(iVar3 + 0x49) = 1;
    *(undefined1 *)(iVar3 + 0x4a) = 1;
    *(undefined1 *)(iVar3 + 0x4b) = 0;
  }
  return;
}

