#include "ghidra_types.h"

extern int func_002FD784(int *param_1,float *param_2,float *param_3,int param_4);

// USA 002923B0 <- EU 002923D8 (Ghidra, non-matching)

bool func_002923B0(int param_1,int param_2,float *param_3,float fparam_0)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(short *)(iVar1 + 0x42) == 0x5f) {
    *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(param_2 + 0x18);
    *(float *)(iVar1 + 0x8c) = fparam_0;
    iVar1 = func_002FD784(*(int **)(iVar1 + 0x70),(float *)param_2,param_3,0);
    return iVar1 != 0;
  }
  return false;
}

