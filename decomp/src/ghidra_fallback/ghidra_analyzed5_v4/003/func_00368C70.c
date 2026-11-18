#include "ghidra_types.h"

extern int DAT_00368cc4;

// USA 00368C70 <- EU 00368C4C (Ghidra, non-matching)
// GLOBAL DAT_00368cc4 int

void * func_00368C70(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0xa4);
  iVar5 = *(int *)(param_1 + 0xa8);
  iVar3 = 0;
  if (iVar4 != 0) {
    do {
      iVar6 = *(int *)(param_1 + 0xa8);
      uVar1 = *(undefined1 *)(iVar5 + iVar3 * 0x148 + DAT_00368cc4);
      iVar2 = 0;
      if (iVar4 != 0) {
        do {
          if (iVar2 != iVar3) {
            *(undefined1 *)(iVar6 + iVar2 * 0x148 + 0x143) = uVar1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar4);
  }
  return (void *)param_1;
}

