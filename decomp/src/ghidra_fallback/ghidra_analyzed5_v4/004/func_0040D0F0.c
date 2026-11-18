#include "ghidra_types.h"


// USA 0040D0F0 <- EU 0040D0D0 (Ghidra, non-matching)

void * func_0040D0F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x10e) != '\0') {
    *(undefined1 *)(param_1 + 0x10e) = 0;
    iVar1 = 0;
    if (*(char *)(param_1 + 0x10d) != '\0') {
      do {
        iVar2 = param_1 + iVar1 * 4;
        iVar3 = param_1 + iVar1 * 8;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        *(undefined4 *)(iVar2 + 0x54) = 0;
        *(undefined4 *)(iVar3 + 100) = 0;
        *(undefined4 *)(iVar3 + 0x68) = 0;
        *(undefined4 *)(iVar2 + 0x84) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x10d));
    }
  }
  return (void *)param_1;
}

