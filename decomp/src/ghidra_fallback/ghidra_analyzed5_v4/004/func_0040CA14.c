#include "ghidra_types.h"

extern undefined4 DAT_0040ca90;
extern undefined4 DAT_0040ca94;
extern undefined4 DAT_0040ca98;

// USA 0040CA14 <- EU 0040C9F4 (Ghidra, non-matching)
// GLOBAL DAT_0040ca90 undefined4
// GLOBAL DAT_0040ca94 undefined4
// GLOBAL DAT_0040ca98 undefined4

undefined4 * func_0040CA14(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  param_1[1] = 0;
  uVar1 = DAT_0040ca90;
  param_1[2] = 0;
  param_1[3] = 0xfa;
  *param_1 = uVar1;
  uVar1 = DAT_0040ca98;
  param_1[4] = DAT_0040ca94;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x10000;
  param_1[0x15] = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 4;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  uVar3 = (uint)*(byte *)((int)param_1 + 0x5d);
  iVar2 = 0;
  do {
    uVar3 = uVar3 - 1;
    param_1[iVar2 + 9] = 0;
    iVar2 = iVar2 + 1;
  } while (uVar3 != 0);
  uVar3 = (uint)*(byte *)((int)param_1 + 0x5d);
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      uVar3 = uVar3 - 1;
      param_1[iVar2 + 0xd] = 0;
      iVar2 = iVar2 + 1;
    } while (uVar3 != 0);
  }
  return param_1;
}

