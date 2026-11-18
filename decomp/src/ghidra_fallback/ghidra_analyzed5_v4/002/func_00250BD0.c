#include "ghidra_types.h"

extern int func_002507E0(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00250BD0 <- EU 00250BF8 (Ghidra, non-matching)

void func_00250BD0(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x430) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x430)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x41c) + 1;
  *(int *)(param_1 + 0x41c) = iVar2;
  if (*(int *)(param_1 + 0x42c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x42c),1,fparam_0);
  }
  func_002507E0(param_1);
  *(int *)(param_1 + 0x4a4) = *(int *)(param_1 + 0x4a4) + 1;
  return;
}

