#include "ghidra_types.h"

extern int func_004A4980(int param_1,uint param_2,float fparam_0);

// USA 0038A85C <- EU 0038A838 (Ghidra, non-matching)

undefined4 func_0038A85C(int param_1,int param_2)

{
  *(int *)(param_1 + 0x7c) = param_2;
  if (*(int *)(param_1 + 0x78) != param_2) {
    *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 2;
    return func_004A4980(*(int *)(param_1 + 0x74),0,*(float *)(param_1 + 400));
  }
  return 0;
}

