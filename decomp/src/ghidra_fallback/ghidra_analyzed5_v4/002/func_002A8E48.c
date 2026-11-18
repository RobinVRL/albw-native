#include "ghidra_types.h"

extern undefined4 DAT_002a8e7c;
extern float DAT_002a8e80;
extern undefined4 DAT_002a8e84;
extern undefined4 DAT_002a8e88;

// USA 002A8E48 <- EU 002A8E24 (Ghidra, non-matching)
// GLOBAL DAT_002a8e7c undefined4
// GLOBAL DAT_002a8e80 float
// GLOBAL DAT_002a8e84 undefined4
// GLOBAL DAT_002a8e88 undefined4

undefined4 func_002A8E48(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002a8e7c;
  *(undefined1 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = uVar1;
  uVar1 = DAT_002a8e84;
  *(float *)(param_1 + 0x8e8) = *(float *)(param_1 + 0x3d4) + DAT_002a8e80;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  uVar1 = DAT_002a8e88;
  *(undefined4 *)(param_1 + 0x904) = 100;
  *(undefined4 *)(param_1 + 0x908) = uVar1;
  *(undefined4 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(param_1 + 1000);
  return (undefined4)param_1;
}

