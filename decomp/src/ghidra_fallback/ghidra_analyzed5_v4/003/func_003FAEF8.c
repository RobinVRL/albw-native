#include "ghidra_types.h"

extern undefined4 DAT_003faf50;

// USA 003FAEF8 <- EU 003FAED8 (Ghidra, non-matching)
// GLOBAL DAT_003faf50 undefined4

void func_003FAEF8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = DAT_003faf50;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      *(undefined4 *)(*param_1 + uVar4 * 0x20 + 8) = uVar3;
      iVar1 = uVar4 * 0x20;
      *(undefined4 *)(uVar4 * 0x20 + 0xc + *param_1) = uVar3;
      iVar2 = uVar4 * 0x20;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*param_1 + iVar2) = 0;
      *(undefined4 *)(*param_1 + iVar1 + 4) = 0;
    } while (uVar4 < (uint)param_1[1]);
    return;
  }
  return;
}

