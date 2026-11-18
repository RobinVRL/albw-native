#include "ghidra_types.h"


// USA 004FD038 <- EU 004FD010 (Ghidra, non-matching)

void * func_004FD038(int param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0xaa) != '\0') {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(*(int *)(param_1 + iVar1 + 0x70) + 0x61) = param_2;
    } while (uVar2 < *(byte *)(param_1 + 0xaa));
  }
  return (void *)param_1;
}

