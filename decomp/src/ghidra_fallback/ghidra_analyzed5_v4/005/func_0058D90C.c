#include "ghidra_types.h"


// USA 0058D90C <- EU 0058D8E4 (Ghidra, non-matching)

undefined4 func_0058D90C(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((*(short *)(param_1 + 0x58) == 3) && (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if ((!bVar3 || cVar1 != '\0') && (*(int *)(*(int *)(iVar2 + 0x78) + 0x14c) != 2)) {
      return 1;
    }
  }
  return 0;
}

