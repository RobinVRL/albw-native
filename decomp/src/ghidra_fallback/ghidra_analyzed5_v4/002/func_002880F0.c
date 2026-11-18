#include "ghidra_types.h"

extern undefined4 DAT_0028815c;
extern undefined4 DAT_00288160;

// USA 002880F0 <- EU 00288118 (Ghidra, non-matching)
// GLOBAL DAT_0028815c undefined4
// GLOBAL DAT_00288160 undefined4

undefined4 func_002880F0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0028815c;
  *(undefined1 *)(param_1 + 0x427) = 1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar2 = DAT_00288160;
  *(undefined4 *)(param_1 + 0x504) = 0x50;
  *(undefined4 *)(param_1 + 0x508) = uVar2;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x514) = uVar1;
  *(undefined1 *)(param_1 + 0x530) = 1;
  return (undefined4)param_1;
}

