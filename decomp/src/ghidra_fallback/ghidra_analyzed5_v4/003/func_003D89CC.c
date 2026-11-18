#include "ghidra_types.h"


// USA 003D89CC <- EU 003D89AC (Ghidra, non-matching)

void * func_003D89CC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
LAB_003d89b4:
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    do {
      if (*(char *)(param_2 + uVar4) != '\0') {
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + uVar4 * 4);
        for (iVar2 = *(int *)(iVar1 + 0xc); iVar2 != iVar1 + 8; iVar2 = *(int *)(iVar2 + 4)) {
          if ((*(char *)(iVar2 + 0xc) == '\x01') &&
             (iVar3 = *(int *)(*(int *)(iVar2 + 8) + 0x14), *(char *)(param_2 + iVar3) == '\0')) {
            *(undefined1 *)(param_2 + iVar3) = 1;
            goto LAB_003d89b4;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  return (void *)param_1;
}

