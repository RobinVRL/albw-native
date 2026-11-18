#include "ghidra_types.h"

extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00356db8;

// USA 00356D80 <- EU 00356D5C (Ghidra, non-matching)
// GLOBAL DAT_00356db8 int *

undefined4 func_00356D80(int param_1)

{
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x9f8) < *(uint *)(param_1 + 0x9fc)) {
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) + 1;
    return 0;
  }
  if (*DAT_00356db8 != 0) {
    return func_00666318((undefined4 *)(param_1 + 0xa5c),2);
  }
  return 0;
}

