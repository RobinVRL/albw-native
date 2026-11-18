#include "ghidra_types.h"

extern undefined4 *DAT_0027bf98;
extern undefined4 DAT_0027bf9c;
extern undefined4 DAT_0027bfa0;

// USA 0027BF34 <- EU 0027BF5C (Ghidra, non-matching)
// GLOBAL DAT_0027bf98 undefined4 *
// GLOBAL DAT_0027bf9c undefined4
// GLOBAL DAT_0027bfa0 undefined4

undefined4 func_0027BF34(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  puVar1 = DAT_0027bf98;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar2 = DAT_0027bfa0;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(undefined1 **)(param_1 + 0x18) = param_1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = DAT_0027bf9c;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return (undefined4)param_1;
}

