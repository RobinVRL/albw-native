#include "ghidra_types.h"

extern undefined4 DAT_00405970;
extern undefined4 DAT_00405974;

// USA 00405910 <- EU 004058F0 (Ghidra, non-matching)
// GLOBAL DAT_00405970 undefined4
// GLOBAL DAT_00405974 undefined4

undefined4 func_00405910(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  uVar1 = DAT_00405970;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar2 = DAT_00405974;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0xff;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xef) = 0xff;
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return (undefined4)param_1;
}

