#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00473724 <- EU 004736FC (Ghidra, non-matching)

undefined4 func_00473724(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x88) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x88)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x74) + 1;
  *(int *)(param_1 + 0x74) = iVar2;
  if (*(int *)(param_1 + 0x84) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x84),1,fparam_0);
  }
  return 0;
}

