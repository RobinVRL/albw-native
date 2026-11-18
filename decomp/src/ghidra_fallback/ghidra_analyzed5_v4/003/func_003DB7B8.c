#include "ghidra_types.h"

extern uint DAT_003db7e0;

// USA 003DB7B8 <- EU 003DB798 (Ghidra, non-matching)
// GLOBAL DAT_003db7e0 uint

int func_003DB7B8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  uVar3 = (uint)((ulonglong)(uint)(*piVar1 * 1000) * (ulonglong)DAT_003db7e0 >> 0x2c);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if ((char)piVar1[3] == '\0') {
    iVar2 = 2;
  }
  else {
    iVar2 = 4;
  }
  return iVar2 * uVar3 * 0x280;
}

