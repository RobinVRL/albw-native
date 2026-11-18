#include "ghidra_types.h"


// USA 00427AF0 <- EU 00427AD0 (Ghidra, non-matching)

void * func_00427AF0(int param_1,float fparam_0)

{
  int iVar1;
  
  if ((uint)*(byte *)(param_1 + 0x80) < *(uint *)(param_1 + 0x4c)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x80) * 4);
  }
  else {
    iVar1 = 0;
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (*(float *)(iVar1 + 8) != fparam_0) {
    *(float *)(iVar1 + 8) = fparam_0;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfd;
  return (void *)param_1;
}

