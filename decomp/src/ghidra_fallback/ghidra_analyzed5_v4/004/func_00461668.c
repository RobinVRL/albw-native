#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00461668 <- EU 00461640 (Ghidra, non-matching)

undefined4 func_00461668(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x6c) + *(char *)(param_1 + 0x54) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x6c) + *(char *)(param_1 + 0x54) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 100) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 100)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar2;
  if (*(int *)(param_1 + 0x60) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x60),1,fparam_0);
  }
  return 0;
}

