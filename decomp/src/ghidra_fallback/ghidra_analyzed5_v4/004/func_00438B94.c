#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00438B94 <- EU 00438B74 (Ghidra, non-matching)

undefined4 func_00438B94(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + *(char *)(param_1 + 0xcc) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0xe4) + *(char *)(param_1 + 0xcc) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0xdc) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0xdc)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 200) + 1;
  *(int *)(param_1 + 200) = iVar2;
  if (*(int *)(param_1 + 0xd8) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0xd8),1,fparam_0);
  }
  return 0;
}

