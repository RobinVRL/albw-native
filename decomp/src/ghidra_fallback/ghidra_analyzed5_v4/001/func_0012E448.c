#include "ghidra_types.h"


// USA 0012E448 <- EU 0012E448 (Ghidra, non-matching)

void func_0012E448(int param_1)

{
  int iVar1;
  uint in_r1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x1844);
  if (iVar1 != 0) {
    bVar2 = *(char *)(iVar1 + 0xd) == '\0';
    if (bVar2) {
      in_r1 = (uint)*(byte *)(iVar1 + 0xe);
    }
    if (bVar2 && in_r1 == 0) {
      *(undefined1 *)(iVar1 + 0xe) = 1;
    }
  }
  return;
}

