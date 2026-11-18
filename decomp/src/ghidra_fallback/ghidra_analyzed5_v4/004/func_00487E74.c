#include "ghidra_types.h"


// USA 00487E74 <- EU 00487E4C (Ghidra, non-matching)

void func_00487E74(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x89);
  uVar3 = 0;
  if (4 < uVar2) {
    uVar2 = 4;
  }
  if (uVar2 != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x13c + iVar1) + 0x79) = 1;
    } while (uVar3 != uVar2);
  }
  return;
}

