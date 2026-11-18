#include "ghidra_types.h"

extern int func_00660CE8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00275518;

// USA 002754B0 <- EU 002754D8 (Ghidra, non-matching)
// GLOBAL DAT_00275518 undefined4

undefined4 func_002754B0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x04') {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  uVar1 = DAT_00275518;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return func_00660CE8((undefined4 *)(param_1 + 100),4);
}

