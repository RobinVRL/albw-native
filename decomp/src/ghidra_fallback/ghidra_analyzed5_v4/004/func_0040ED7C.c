#include "ghidra_types.h"

extern int func_0040D8C8(int param_1);
extern int DAT_0040ee10;

// USA 0040ED7C <- EU 0040ED5C (Ghidra, non-matching)
// GLOBAL DAT_0040ee10 int

void func_0040ED7C(int param_1)

{
  ushort uVar1;
  
  func_0040D8C8(param_1);
  uVar1 = *(ushort *)(DAT_0040ee10 + param_1);
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x29f4) < *(int *)(param_1 + 0x29f0))) {
    *(int *)(param_1 + 0x29f4) = *(int *)(param_1 + 0x29f4) + 1;
  }
  if (((uVar1 >> 1 & 1) != 0) && (*(int *)(param_1 + 0x2a04) < *(int *)(param_1 + 0x2a00))) {
    *(int *)(param_1 + 0x2a04) = *(int *)(param_1 + 0x2a04) + 1;
  }
  if (((uVar1 >> 2 & 1) != 0) && (*(int *)(param_1 + 0x2a14) < *(int *)(param_1 + 0x2a10))) {
    *(int *)(param_1 + 0x2a14) = *(int *)(param_1 + 0x2a14) + 1;
  }
  if (((int)((uint)(uVar1 >> 2) << 0x1e) < 0) &&
     (*(int *)(param_1 + 0x2a24) < *(int *)(param_1 + 0x2a20))) {
    *(int *)(param_1 + 0x2a24) = *(int *)(param_1 + 0x2a24) + 1;
  }
  return;
}

