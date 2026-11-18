#include "ghidra_types.h"


// USA 0056A244 <- EU 0056A21C (Ghidra, non-matching)

int func_0056A244(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + iVar2 * 0xc) != 0x6800) {
      iVar2 = iVar2 + 1;
      if ((int)(uint)*(ushort *)(param_1 + 0x10) <= iVar2) {
        return 0;
      }
    }
    iVar3 = param_1 + 0x14 + iVar2 * 0xc;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      iVar1 = iVar2 + param_1;
    }
  }
  return iVar1;
}

