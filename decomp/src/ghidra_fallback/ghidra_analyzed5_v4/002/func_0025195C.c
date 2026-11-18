#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 0025195C <- EU 00251984 (Ghidra, non-matching)

undefined4 func_0025195C(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x42c) + *(char *)(param_1 + 0x414) * 8 + 4);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x42c) + *(char *)(param_1 + 0x414) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(*(int *)(param_1 + 0x424) + ((int)uVar1 >> 1)));
  }
  (*pcVar2)((int)(*(int *)(param_1 + 0x424)) + ((int)uVar1 >> 1));
  iVar3 = *(int *)(param_1 + 0x410) + 1;
  *(int *)(param_1 + 0x410) = iVar3;
  if (*(int *)(param_1 + 0x420) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x420),1,fparam_0);
  }
  return 0;
}

