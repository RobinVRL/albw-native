#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00386FF4 <- EU 00386FD0 (Ghidra, non-matching)

undefined4 func_00386FF4(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  if (0 < *(short *)(param_1 + 0x134)) {
    *(short *)(param_1 + 0x134) = *(short *)(param_1 + 0x134) + -1;
  }
  if (0 < *(short *)(param_1 + 0x136)) {
    *(short *)(param_1 + 0x136) = *(short *)(param_1 + 0x136) + -1;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x24) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x24)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x20),1,fparam_0);
}

