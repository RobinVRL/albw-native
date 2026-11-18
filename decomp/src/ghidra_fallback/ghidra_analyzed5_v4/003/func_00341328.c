#include "ghidra_types.h"

extern undefined4 DAT_003413b0;
extern undefined4 DAT_003413b4;

// USA 00341328 <- EU 00341304 (Ghidra, non-matching)
// GLOBAL DAT_003413b0 undefined4
// GLOBAL DAT_003413b4 undefined4

undefined4 func_00341328(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_003413b0;
  *(undefined4 *)(param_1 + 0x4d0) = DAT_003413b0;
  *(undefined1 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x4e0);
  uVar2 = DAT_003413b4;
  *(undefined4 *)(param_1 + 0x4d8) = DAT_003413b4;
  *(undefined4 *)(param_1 + 0x4dc) = uVar2;
  *(undefined4 *)(param_1 + 0x4e0) = uVar2;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = uVar2;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x510) = uVar2;
  *(undefined4 *)(param_1 + 0x514) = uVar2;
  *(undefined4 *)(param_1 + 0x518) = uVar2;
  *(undefined1 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x51c) = uVar2;
  *(undefined4 *)(param_1 + 0x520) = uVar2;
  *(undefined4 *)(param_1 + 0x524) = uVar2;
  *(undefined1 *)(param_1 + 0x529) = 0;
  *(undefined1 *)(param_1 + 0x52a) = 0;
  *(undefined1 *)(param_1 + 0x166) = 1;
  *(undefined4 *)(param_1 + 0x4fc) = uVar1;
  *(undefined4 *)(param_1 + 0x500) = uVar1;
  *(undefined1 *)(param_1 + 0x52c) = 0;
  *(undefined1 *)(param_1 + 0x52d) = 0;
  *(undefined4 *)(param_1 + 0x530) = uVar1;
  *(undefined4 *)(param_1 + 0x538) = 0;
  return (undefined4)param_1;
}

