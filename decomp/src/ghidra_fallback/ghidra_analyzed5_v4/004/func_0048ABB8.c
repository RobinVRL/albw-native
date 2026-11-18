#include "ghidra_types.h"

extern undefined4 DAT_0048ac10;
extern int *DAT_0048ac14;
extern int *DAT_0048ac18;
extern undefined4 DAT_0048ac1c;
extern undefined4 DAT_0048ac20;
extern undefined4 DAT_0048ac24;

// USA 0048ABB8 <- EU 0048AB90 (Ghidra, non-matching)
// GLOBAL DAT_0048ac10 undefined4
// GLOBAL DAT_0048ac14 int *
// GLOBAL DAT_0048ac18 int *
// GLOBAL DAT_0048ac1c undefined4
// GLOBAL DAT_0048ac20 undefined4
// GLOBAL DAT_0048ac24 undefined4

undefined4 func_0048ABB8(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = DAT_0048ac14;
  uVar1 = DAT_0048ac10;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = DAT_0048ac20;
  uVar1 = DAT_0048ac1c;
  iVar4 = *piVar2;
  if (iVar4 == 0) {
    iVar4 = *DAT_0048ac18;
  }
  param_1[4] = iVar4;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  param_1[8] = uVar3;
  param_1[9] = uVar3;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar1;
  uVar3 = DAT_0048ac24;
  param_1[0xe] = uVar1;
  param_1[0xf] = 0;
  param_1[0x10] = uVar3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return (undefined4)param_1;
}

