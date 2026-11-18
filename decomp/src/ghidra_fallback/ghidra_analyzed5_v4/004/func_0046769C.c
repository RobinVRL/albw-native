#include "ghidra_types.h"

extern int func_002BEE80(int param_1);

// USA 0046769C <- EU 00467674 (Ghidra, non-matching)

undefined4 func_0046769C(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  
  *(undefined1 *)(param_1 + 0x44c) = 0;
  uVar1 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar1 < 4) {
      piVar2 = piVar2 + uVar1;
    }
    iVar3 = *piVar2;
    *(undefined1 *)(iVar3 + 0xb5) = 0;
    if (*(char *)(iVar3 + 0x84) == '\0') {
      puVar4 = (ushort *)(*(int *)(iVar3 + 0x14) + 0x16);
      *puVar4 = *puVar4 | 0x40;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 4);
  func_002BEE80(*(int *)(param_1 + 0x11c));
  return func_002BEE80(*(int *)(param_1 + 0x120));
}

