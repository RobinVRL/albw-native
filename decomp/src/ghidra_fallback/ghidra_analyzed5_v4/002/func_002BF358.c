#include "ghidra_types.h"

extern int func_002BF3B0(int param_1);
extern int func_002C00A8(int param_1);

// USA 002BF358 <- EU 002BF334 (Ghidra, non-matching)

void func_002BF358(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  
  *(undefined1 *)(param_1 + 0x44c) = 1;
  uVar1 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar1 < 4) {
      piVar2 = piVar2 + uVar1;
    }
    uVar1 = uVar1 + 1;
    iVar3 = *piVar2;
    *(undefined1 *)(iVar3 + 0xb5) = 1;
    puVar4 = (ushort *)(*(int *)(iVar3 + 0x14) + 0x16);
    *puVar4 = *puVar4 & 0xffbf;
  } while ((int)uVar1 < 4);
  func_002BF3B0(*(int *)(param_1 + 0x11c));
  iVar3 = *(int *)(param_1 + 0x120);
  *(undefined1 *)(iVar3 + 0x5c) = 0;
  func_002C00A8(*(int *)(iVar3 + 0x14));
  puVar4 = (ushort *)(*(int *)(iVar3 + 0x14) + 0x16);
  *puVar4 = *puVar4 & 0xffbf;
  return;
}

