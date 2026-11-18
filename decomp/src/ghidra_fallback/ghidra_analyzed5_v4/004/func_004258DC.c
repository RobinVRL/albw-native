#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 004258DC <- EU 004258BC (Ghidra, non-matching)

undefined4 func_004258DC(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x54) + *(char *)(param_1 + 0x3c) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x54) + *(char *)(param_1 + 0x3c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x4c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x4c)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar2;
  if (*(int *)(param_1 + 0x48) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x48),1,fparam_0);
  }
  return 0;
}

