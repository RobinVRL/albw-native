#include "ghidra_types.h"

extern undefined4 DAT_00387ce0;
extern undefined4 DAT_00387ce4;
extern undefined4 DAT_00387ce8;

// USA 00387CE4 <- EU 00387CC0 (Ghidra, non-matching)
// GLOBAL DAT_00387ce0 undefined4
// GLOBAL DAT_00387ce4 undefined4
// GLOBAL DAT_00387ce8 undefined4

undefined4 func_00387CE4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00387ce0;
  uVar2 = DAT_00387ce4;
  if (*(char *)(param_1 + 0xa2) == '\x01') {
    uVar2 = DAT_00387ce8;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return (undefined4)param_1;
}

