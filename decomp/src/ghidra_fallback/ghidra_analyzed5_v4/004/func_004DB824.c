#include "ghidra_types.h"

extern int func_004BC7BC(int param_1);
extern undefined4 DAT_004db830;
extern undefined4 *DAT_004db834;
extern undefined4 DAT_004db838;

// USA 004DB824 <- EU 004DB7FC (Ghidra, non-matching)
// GLOBAL DAT_004db830 undefined4
// GLOBAL DAT_004db834 undefined4 *
// GLOBAL DAT_004db838 undefined4

undefined4 func_004DB824(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_004db834;
  *(undefined4 *)(param_1 + 0x3ac) = DAT_004db830;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(param_1 + 0x368) = *puVar1;
  *(undefined4 *)(param_1 + 0x36c) = uVar2;
  *(undefined4 *)(param_1 + 0x370) = uVar3;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(param_1 + 0x3d0) = *puVar1;
  *(undefined4 *)(param_1 + 0x3d4) = uVar2;
  *(undefined4 *)(param_1 + 0x3d8) = uVar3;
  *(undefined4 *)(param_1 + 0x834) = DAT_004db838;
  return func_004BC7BC(param_1);
}

