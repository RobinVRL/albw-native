#include "ghidra_types.h"

extern undefined4 *DAT_004d7508;
extern undefined4 DAT_004d750c;

// USA 004D74E0 <- EU 004D74B8 (Ghidra, non-matching)
// GLOBAL DAT_004d7508 undefined4 *
// GLOBAL DAT_004d750c undefined4

undefined4 func_004D74E0(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = DAT_004d7508;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(undefined1 **)(param_1 + 0x20) = param_1;
  uVar2 = DAT_004d750c;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0xffff;
  return (undefined4)param_1;
}

