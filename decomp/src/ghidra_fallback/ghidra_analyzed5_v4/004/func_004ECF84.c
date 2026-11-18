#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 004ECF84 <- EU 004ECF5C (Ghidra, non-matching)

int func_004ECF84(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x584) + *(char *)(param_1 + 0x56c) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x584) + *(char *)(param_1 + 0x56c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x57c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x57c)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x568) + 1;
  *(int *)(param_1 + 0x568) = iVar2;
  if (*(int *)(param_1 + 0x578) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x578),1,fparam_0);
  }
  return param_1;
}

