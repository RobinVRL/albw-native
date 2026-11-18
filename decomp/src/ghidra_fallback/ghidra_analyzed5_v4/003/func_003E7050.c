#include "ghidra_types.h"

extern undefined4 DAT_003e70a0;
extern undefined4 DAT_003e70a4;

// USA 003E7050 <- EU 003E7030 (Ghidra, non-matching)
// GLOBAL DAT_003e70a0 undefined4
// GLOBAL DAT_003e70a4 undefined4

void * func_003E7050(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = DAT_003e70a0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  uVar2 = DAT_003e70a4;
  *(undefined4 *)(param_1 + 0x230) = uVar1;
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x264) = uVar1;
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  *(undefined4 *)(param_1 + 0x26c) = uVar1;
  do {
    iVar5 = iVar4 + 1;
    uVar3 = uVar3 + 2;
    *(undefined4 *)(param_1 + iVar4 * 4 + 0x10) = 0;
    iVar4 = iVar4 + 2;
    *(undefined4 *)(param_1 + iVar5 * 4 + 0x10) = 0;
  } while (uVar3 < 0x10);
  return (void *)param_1;
}

