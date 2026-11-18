#include "ghidra_types.h"

extern undefined4 DAT_003e0118;
extern undefined4 DAT_003e011c;
extern undefined4 DAT_003e0120;

// USA 003E00A8 <- EU 003E0088 (Ghidra, non-matching)
// GLOBAL DAT_003e0118 undefined4
// GLOBAL DAT_003e011c undefined4
// GLOBAL DAT_003e0120 undefined4

undefined4 * func_003E00A8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = DAT_003e011c;
  *param_1 = DAT_003e0118;
  param_1[1] = 0xfa;
  uVar2 = DAT_003e0120;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x10000;
  iVar3 = 4;
  param_1[0x13] = 0;
  *(undefined1 *)((int)param_1 + 0x55) = 4;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  iVar5 = 0;
  do {
    iVar3 = iVar3 + -1;
    param_1[iVar5 + 7] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar3 != 0);
  uVar4 = (uint)*(byte *)((int)param_1 + 0x55);
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      uVar4 = uVar4 - 1;
      param_1[iVar5 + 0xb] = 0;
      iVar5 = iVar5 + 1;
    } while (uVar4 != 0);
  }
  return param_1;
}

