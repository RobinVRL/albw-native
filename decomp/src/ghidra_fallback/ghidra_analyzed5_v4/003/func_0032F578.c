#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0032F488(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);

// USA 0032F578 <- EU 0032F554 (Ghidra, non-matching)

undefined4 func_0032F578(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  float *pfVar4;
  uint in_fpscr;
  float fparam_0;
  
  pfVar4 = (float *)(*(char *)(param_1 + 0x8c0) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x8d8) + (int)pfVar4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x8d8) + *(char *)(param_1 + 0x8c0) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x8d0)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x8bc) + 1;
  *(int *)(param_1 + 0x8bc) = iVar2;
  if (*(int *)(param_1 + 0x8cc) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x8cc),1,fparam_0);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  func_0032F488(param_1);
  return func_004F5BD8(param_1,(uint *)0x0,(int **)0x0,pfVar4);
}

