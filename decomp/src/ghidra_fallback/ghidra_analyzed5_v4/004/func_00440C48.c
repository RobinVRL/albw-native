#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00440C48 <- EU 00440C28 (Ghidra, non-matching)

undefined4 func_00440C48(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa8) + *(char *)(param_1 + 0x90) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0xa8) + *(char *)(param_1 + 0x90) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0xa0) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0xa0)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x8c) + 1;
  *(int *)(param_1 + 0x8c) = iVar2;
  if (*(int *)(param_1 + 0x9c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x9c),1,fparam_0);
  }
  return 0;
}

