#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 0024F49C <- EU 0024F49C (Ghidra, non-matching)

undefined4 func_0024F49C(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x49c) + *(char *)(param_1 + 0x484) * 8 + 4);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x49c) + *(char *)(param_1 + 0x484) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(*(int *)(param_1 + 0x494) + ((int)uVar1 >> 1)));
  }
  (*pcVar2)((int)(*(int *)(param_1 + 0x494)) + ((int)uVar1 >> 1));
  iVar3 = *(int *)(param_1 + 0x480) + 1;
  *(int *)(param_1 + 0x480) = iVar3;
  if (*(int *)(param_1 + 0x490) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x490),1,fparam_0);
  }
  return 0;
}

