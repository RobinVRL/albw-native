#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);

// USA 004D9508 <- EU 004D94E0 (Ghidra, non-matching)

undefined4 func_004D9508(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x7a4) + *(char *)(param_1 + 0x78c) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x7a4) + *(char *)(param_1 + 0x78c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x79c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x79c)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x788) + 1;
  *(int *)(param_1 + 0x788) = iVar2;
  if (*(int *)(param_1 + 0x798) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x798),1,fparam_0);
  }
  return func_004CEAF0(*(int *)(param_1 + 0x7b0));
}

