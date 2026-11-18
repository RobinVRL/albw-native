#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_002C00A8(int param_1);

// USA 00455818 <- EU 004557F0 (Ghidra, non-matching)

undefined4 func_00455818(int param_1)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  
  func_00231448(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x6c);
  if (cVar1 == '\0') {
    return 0;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
  if (cVar1 == '\x02') {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x9c);
    *(int *)(iVar2 + 4) = iVar4;
  }
  else {
    if (cVar1 != '\x03') {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0xa0);
    *(int *)(iVar2 + 4) = iVar4;
  }
  if (iVar4 == 0) {
    uVar3 = *(ushort *)(iVar2 + 0x16) & 0xffbf;
  }
  else {
    uVar3 = *(ushort *)(iVar2 + 0x16) | 0x40;
  }
  *(ushort *)(iVar2 + 0x16) = uVar3;
  return func_002C00A8(*(int *)(param_1 + 0x14));
}

