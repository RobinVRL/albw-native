#include "ghidra_types.h"

extern int *DAT_004b08d0;

// USA 004B086C <- EU 004B0844 (Ghidra, non-matching)
// GLOBAL DAT_004b08d0 int *

void func_004B086C(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *DAT_004b08d0;
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar3 + 0x18b4);
    *(undefined1 *)(iVar3 + 0x2403) = 1;
    iVar1 = *piVar4;
    while ((0 < iVar1 && (0 < iVar1))) {
      *piVar4 = iVar1 + -1;
      puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x18bc) + (iVar1 + -1) * 4);
      if ((puVar2 != (undefined4 *)0x0) && (puVar2[2] == 0x2d || puVar2[2] == 0x35)) {
        (**(code **)*puVar2)(puVar2,iVar3);
      }
      iVar1 = *piVar4;
    }
  }
  return;
}

