#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);

// USA 001A5F4C <- EU 001A5F4C (Ghidra, non-matching)

void func_001A5F4C(int param_1,int param_2)

{
  if (param_2 != 3) {
    return;
  }
  func_004FC07C(param_1,5,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_1 + 0x3d8);
  return;
}

