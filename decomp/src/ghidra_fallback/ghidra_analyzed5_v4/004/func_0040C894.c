#include "ghidra_types.h"


// USA 0040C894 <- EU 0040C874 (Ghidra, non-matching)

void * func_0040C894(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x5d);
    if (uVar2 != 0) {
      iVar3 = 0;
      do {
        iVar1 = iVar3 * 4;
        uVar2 = uVar2 - 1;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + iVar1 + 0x24) = 0;
      } while (uVar2 != 0);
    }
  }
  return (void *)param_1;
}

