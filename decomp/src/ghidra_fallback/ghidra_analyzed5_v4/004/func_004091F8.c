#include "ghidra_types.h"

extern undefined4 DAT_0040922c;

// USA 004091F8 <- EU 004091D8 (Ghidra, non-matching)
// GLOBAL DAT_0040922c undefined4

void func_004091F8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_0040922c;
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  puVar2[0xb] = DAT_0040922c;
  puVar2[10] = uVar1;
  puVar2[9] = uVar1;
  puVar2[8] = uVar1;
  puVar2[7] = uVar1;
  puVar2[6] = uVar1;
  puVar2[5] = uVar1;
  puVar2[4] = uVar1;
  puVar2[3] = uVar1;
  puVar2[2] = uVar1;
  puVar2[1] = uVar1;
  *puVar2 = uVar1;
  puVar2[0xf] = uVar1;
  puVar2[0x10] = uVar1;
  puVar2[0x11] = uVar1;
  *(undefined1 *)(puVar2 + 0x18) = 1;
  return;
}

