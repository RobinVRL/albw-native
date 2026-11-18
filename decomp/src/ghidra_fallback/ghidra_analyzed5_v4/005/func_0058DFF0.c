#include "ghidra_types.h"

extern int func_00532C78(int param_1);

// USA 0058DFF0 <- EU 0058DFC8 (Ghidra, non-matching)

undefined4 func_0058DFF0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0xf0);
  cVar1 = *(char *)(iVar2 + 0xd);
  bVar3 = cVar1 == '\x03';
  if (bVar3) {
    cVar1 = *(char *)(iVar2 + 0xe);
  }
  if ((bVar3 && cVar1 == '\x03') &&
     (((*(char *)(iVar2 + 0x9c) != '\x0e' || (bVar3 = func_00532C78(iVar2 + 0x74), bVar3)) ||
      (bVar3 = func_00532C78(iVar2 + 0x80), bVar3)))) {
    return 1;
  }
  return 0;
}

