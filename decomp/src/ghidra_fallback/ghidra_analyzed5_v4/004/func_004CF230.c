#include "ghidra_types.h"


// USA 004CF230 <- EU 004CF208 (Ghidra, non-matching)

void * func_004CF230(int param_1,undefined1 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x16a) = param_2;
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      bVar1 = *(byte *)(param_1 + 0x16a);
      if (uVar2 < *(uint *)(param_1 + 0x5c)) {
        iVar3 = *(int *)(*(int *)(param_1 + 100) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      uVar2 = uVar2 + 1;
      *(byte *)(iVar3 + 0x87) = bVar1;
      *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0xf807ffff | (uint)bVar1 << 0x13;
    } while ((int)uVar2 < *(int *)(param_1 + 0x5c));
  }
  return (void *)param_1;
}

