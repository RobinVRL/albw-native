#include "ghidra_types.h"

extern float DAT_002d3c9c;
extern float DAT_002d3ca0;
extern float DAT_002d3ca4;
extern undefined4 DAT_002d3ca8;
extern undefined4 DAT_002d3cac;

// USA 002D3C74 <- EU 002D3C50 (Ghidra, non-matching)
// GLOBAL DAT_002d3c9c float
// GLOBAL DAT_002d3ca0 float
// GLOBAL DAT_002d3ca4 float
// GLOBAL DAT_002d3ca8 undefined4
// GLOBAL DAT_002d3cac undefined4

undefined4 func_002D3C74(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = DAT_002d3cac;
  uVar1 = DAT_002d3ca8;
  fVar3 = DAT_002d3c9c;
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar3 = DAT_002d3ca0;
  }
  *(float *)(param_1 + 0x10) = fVar3 * DAT_002d3ca4;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x39) = 0;
  return (undefined4)param_1;
}

