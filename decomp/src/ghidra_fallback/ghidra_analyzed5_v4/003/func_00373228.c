#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);

// USA 00373228 <- EU 00373204 (Ghidra, non-matching)

undefined4 func_00373228(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  
  uVar4 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar4 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar4 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar4 >> 1));
  iVar1 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar1;
  if (*(int *)(param_1 + 0x970) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fVar6);
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x9a8) + *(char *)(param_1 + 0x990) * 8);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x9a8) + *(char *)(param_1 + 0x990) * 8 + 4);
  piVar5 = (int *)(*(int *)(param_1 + 0x9a0) + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *piVar5);
  }
  (*(code *)*piVar2)(piVar5);
  iVar1 = *(int *)(param_1 + 0x98c) + 1;
  *(int *)(param_1 + 0x98c) = iVar1;
  if (*(int *)(param_1 + 0x99c) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x99c),1,fVar6);
  }
  return func_004BC8D8(param_1);
}

