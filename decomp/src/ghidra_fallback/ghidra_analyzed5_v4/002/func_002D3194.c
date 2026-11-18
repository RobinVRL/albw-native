#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern void func_002C1540(int param_1,float fparam_0);
extern int func_002C15CC(int param_1,float fparam_0);
extern int func_002D2648(int param_1,int param_2,int param_3,int *param_4,float fparam_0);
extern float func_002D28D0(undefined4 param_1,uint *param_2,uint param_3);
extern int func_002D2C80(int *param_1,int *param_2,int param_3);
extern float DAT_002d33ec;
extern float DAT_002d33f0;
extern float DAT_002d33f4;
extern float DAT_002d33f8;
extern float DAT_002d33fc;
extern float DAT_002d3400;

// USA 002D3194 <- EU 002D3170 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_002d33ec float
// GLOBAL DAT_002d33f0 float
// GLOBAL DAT_002d33f4 float
// GLOBAL DAT_002d33f8 float
// GLOBAL DAT_002d33fc float
// GLOBAL DAT_002d3400 float

void func_002D3194(int *param_1,undefined4 *param_2,int param_3,int *param_4,uint param_5,
                   float fparam_0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = DAT_002d33ec;
  param_2[0x19] = 0;
  fVar4 = fVar5;
  if (param_4 == (int *)0x0) {
    fVar4 = DAT_002d33f0;
  }
  param_2[0x1a] = param_1[2];
  piVar3 = param_4;
  func_002C1540(param_1[2],fVar4);
  fVar4 = fVar5;
  if (param_4 != (int *)0x0) {
    fVar4 = DAT_002d33f4;
  }
  fVar6 = DAT_002d33f4;
  func_002C15CC(param_1[2],fVar4);
  fVar4 = fVar6;
  if ((DAT_002d33f8 < fparam_0) && (fVar4 = fVar5, fparam_0 < DAT_002d33fc)) {
    fVar4 = (fVar5 * (fparam_0 - DAT_002d33f8)) / DAT_002d3400 + fVar6;
  }
  if (param_1[(uint)*(byte *)(param_1 + 9) * 10 + 10] != 0) {
    param_1[0x3b] = param_1[0x38];
    param_1[0x3c] = param_1[0x39];
    param_1[0x3d] = param_1[0x3a];
    iVar1 = param_1[(uint)*(byte *)(param_1 + 9) * 10 + 10];
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar1 + 0x80) = param_2[3];
    *(undefined4 *)(iVar1 + 0x84) = param_2[6];
    *(undefined4 *)(iVar1 + 0x88) = param_2[9];
    *(undefined4 *)(iVar1 + 0x8c) = *param_2;
    *(undefined4 *)(iVar1 + 0x90) = param_2[4];
    *(undefined4 *)(iVar1 + 0x94) = param_2[7];
    *(undefined4 *)(iVar1 + 0x98) = param_2[10];
    *(undefined4 *)(iVar1 + 0x9c) = param_2[1];
    *(undefined4 *)(iVar1 + 0xa0) = param_2[5];
    *(undefined4 *)(iVar1 + 0xa4) = param_2[8];
    *(undefined4 *)(iVar1 + 0xa8) = param_2[0xb];
    *(undefined4 *)(iVar1 + 0xac) = param_2[2];
    func_002D2648((int)param_1,(uint)*(byte *)(param_1 + 9),param_3,piVar3,fVar4);
    uVar2 = *(undefined4 *)(param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xc] + 0xc);
    *(float *)(*(int *)(param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xc] + 0x14) + 0x10) = fVar5;
    func_00169A80((int *)param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xc],uVar2,param_3,piVar3);
    uVar2 = 0;
    func_00168E9C((int *)param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xc],
                  param_1[(uint)*(byte *)(param_1 + 9) * 10 + 10],(int *)0x0);
    func_00169A80((int *)param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xd],extraout_r1,uVar2,piVar3);
    func_00168E9C((int *)param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xd],
                  param_1[(uint)*(byte *)(param_1 + 9) * 10 + 10],(int *)0x0);
    func_002D2C80(param_1,param_1 + (uint)*(byte *)(param_1 + 9) * 10 + 10,(int)param_4);
  }
  if (param_1[2] != 0) {
    fVar5 = func_002D28D0(param_1,(uint *)param_2[0x27],param_5);
    *(undefined1 *)(*(int *)(param_1[3] + 0x14) + 0x1c) = 0;
    *(float *)(*(int *)(param_1[3] + 0x14) + 0x10) = fVar6;
    uVar2 = *(undefined4 *)(param_1[3] + 0xc);
    iVar1 = *(int *)(param_1[3] + 0x14);
    if (*(float *)(iVar1 + 8) != fVar5) {
      uVar2 = 1;
      *(float *)(iVar1 + 8) = fVar5;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_00169A80((int *)param_1[3],uVar2,param_5,piVar3);
    func_00168E9C((int *)param_1[3],param_1[2],(int *)0x0);
    return;
  }
  return;
}

