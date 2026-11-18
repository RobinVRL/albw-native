#include "ghidra_types.h"


// USA 00368C3C <- EU 00368C18 (Ghidra, non-matching)

void func_00368C3C(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  iVar1 = *(int *)(param_1 + 0xa8);
  iVar3 = 0;
  if (iVar2 != 0) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined1 *)(iVar1 + iVar3 * 0x148 + 0x145) = param_2;
      iVar3 = iVar4;
    } while (iVar4 != iVar2);
  }
  return;
}

