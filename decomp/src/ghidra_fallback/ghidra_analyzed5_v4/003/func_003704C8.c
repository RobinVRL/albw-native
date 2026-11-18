#include "ghidra_types.h"

extern undefined4 *DAT_0037052c;
extern undefined4 DAT_00370530;
extern int DAT_00370534;

// USA 003704C8 <- EU 003704A4 (Ghidra, non-matching)
// GLOBAL DAT_0037052c undefined4 *
// GLOBAL DAT_00370530 undefined4
// GLOBAL DAT_00370534 int

undefined4 func_003704C8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  puVar1 = DAT_0037052c;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  param_1[7] = *puVar1;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  param_1[10] = *puVar1;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  param_1[0xd] = *puVar1;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  param_1[0x10] = *puVar1;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  iVar2 = DAT_00370534;
  uVar3 = DAT_00370530;
  *param_1 = DAT_00370530;
  param_1[1] = uVar3;
  param_1[2] = uVar3;
  param_1[3] = *(undefined4 *)(iVar2 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return (undefined4)param_1;
}

