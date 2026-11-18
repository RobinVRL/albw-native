#include "ghidra_types.h"

extern int func_004BDA28(int *param_1);
extern int func_004C01E4(undefined4 *param_1);
extern int func_004C1418(int *param_1,int param_2);
extern int func_00634834(int param_1,int param_2,undefined1 param_3);
extern int func_0068A4B4(float *param_1,float *param_2,float fparam_0);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_004db90c;
extern float DAT_004db910;
extern float DAT_004db914;
extern float DAT_004db918;
extern float DAT_004db91c;
extern int DAT_004db920;

// USA 004DB864 <- EU 004DB83C (Ghidra, non-matching)
// GLOBAL DAT_004db90c float
// GLOBAL DAT_004db910 float
// GLOBAL DAT_004db914 float
// GLOBAL DAT_004db918 float
// GLOBAL DAT_004db91c float
// GLOBAL DAT_004db920 int

undefined4 func_004DB864(int *param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  func_004C1418(param_1,1);
  func_004BDA28(param_1);
  func_004C01E4(param_1);
  func_0068C794((float *)(param_1 + 0xf5),ALBW_AS_F32(param_1[0x26c]),DAT_004db914,DAT_004db910,
                DAT_004db90c);
  iVar2 = DAT_004db920;
  fVar5 = DAT_004db91c;
  uVar3 = param_1[0x26a] + 0xb60b60;
  param_1[0x26a] = uVar3;
  pfVar1 = (float *)(iVar2 + (uVar3 >> 0x18) * 0x10);
  fVar4 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (*pfVar1 + pfVar1[1] * fVar4 * fVar5) * DAT_004db918;
  param_1[0x26b] = (int)ALBW_AS_U32(fVar5);
  fVar5 = ALBW_AS_F32(param_1[0xf5]) + fVar5;
  param_1[0xf5] = (int)ALBW_AS_U32(fVar5);
  param_1[0x268] = (int)ALBW_AS_U32(fVar5);
  iVar2 = func_0068A4B4((float *)(param_1 + 0xf4),(float *)(param_1 + 0x267),ALBW_AS_F32(param_1[0x20d]));
  if (iVar2 != 0) {
    *(undefined1 *)((int)param_1 + 0x9bd) = 1;
    return func_00634834((int)param_1,8,0);
  }
  return 0;
}

