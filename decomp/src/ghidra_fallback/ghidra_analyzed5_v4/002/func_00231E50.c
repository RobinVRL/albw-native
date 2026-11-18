#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00231E50 <- EU 00231E50 (Ghidra, non-matching)

undefined4 func_00231E50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint in_fpscr;
  float fparam_0;
  
  iVar1 = *(int *)(param_1 + 0x1ec);
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x68) + *(char *)(iVar1 + 0x50) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(iVar1 + 0x68) + *(char *)(iVar1 + 0x50) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(iVar1 + 0x60) + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(iVar1 + 0x60)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(iVar1 + 0x4c) + 1;
  *(int *)(iVar1 + 0x4c) = iVar3;
  if (*(int *)(iVar1 + 0x5c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(iVar1 + 0x5c),1,fparam_0);
  }
  return 0;
}

