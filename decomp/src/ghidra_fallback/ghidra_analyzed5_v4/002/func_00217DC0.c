#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);

// USA 00217DC0 <- EU 00217DC0 (Ghidra, non-matching)

undefined4 func_00217DC0(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  float *pfVar4;
  uint in_fpscr;
  float fparam_0;
  
  pfVar4 = (float *)(*(char *)(param_1 + 0x8c4) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x8dc) + (int)pfVar4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x8dc) + *(char *)(param_1 + 0x8c4) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x8d4) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x8d4)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x8c0) + 1;
  *(int *)(param_1 + 0x8c0) = iVar2;
  if (*(int *)(param_1 + 0x8d0) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x8d0),1,fparam_0);
  }
  func_004F48F0(param_1);
  func_004F5BD8(param_1,(uint *)0x0,(int **)0x1,pfVar4);
  return 1;
}

