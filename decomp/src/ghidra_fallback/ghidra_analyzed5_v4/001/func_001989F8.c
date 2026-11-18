#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 001989F8 <- EU 001989F8 (Ghidra, non-matching)

undefined4 func_001989F8(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8 + 4);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(*(int *)(param_1 + 0x434) + ((int)uVar1 >> 1)));
  }
  (*pcVar2)((int)(*(int *)(param_1 + 0x434)) + ((int)uVar1 >> 1));
  iVar3 = *(int *)(param_1 + 0x420) + 1;
  *(int *)(param_1 + 0x420) = iVar3;
  if (*(int *)(param_1 + 0x430) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x430),1,fparam_0);
  }
  return 0;
}

