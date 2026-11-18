#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004BC7BC(int param_1);
extern int func_004BDA28(int *param_1);
extern int func_004C01E4(undefined4 *param_1);
extern int func_004C1418(int *param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int func_00635180(int param_1);
extern int func_0068A4B4(float *param_1,float *param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int DAT_004dba7c;
extern float DAT_004dba80;
extern float DAT_004dba84;
extern float DAT_004dba88;
extern float DAT_004dba8c;
extern float DAT_004dba90;

// USA 004DB994 <- EU 004DB96C (Ghidra, non-matching)
// GLOBAL DAT_004dba7c int
// GLOBAL DAT_004dba80 float
// GLOBAL DAT_004dba84 float
// GLOBAL DAT_004dba88 float
// GLOBAL DAT_004dba8c float
// GLOBAL DAT_004dba90 float

void func_004DB994(int *param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  func_004C1418(param_1,1);
  func_004BDA28(param_1);
  func_004C01E4(param_1);
  func_00115C70(&local_2c,(float *)(param_1 + 0x267),(float *)(param_1 + 0xf4));
  local_38 = local_2c;
  uStack_34 = uStack_28;
  uStack_30 = uStack_24;
  iVar1 = func_0068C690(&local_38);
  fVar3 = DAT_004dba80;
  func_0051D2F4(param_1 + 0xfa,iVar1,DAT_004dba7c,0x7fffffff,DAT_004dba80);
  func_0068C794((float *)(param_1 + 0xf5),ALBW_AS_F32(param_1[0x26c]),fVar3,DAT_004dba88,DAT_004dba84);
  local_2c = ALBW_AS_F32((param_1[0xfa] - iVar1));
  iVar1 = func_0058E2B8((int *)&local_2c);
  fVar3 = DAT_004dba90;
  fVar2 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_004dba8c;
  param_1[0x268] = param_1[0xf5];
  fVar3 = fVar3 - fVar2;
  iVar1 = func_0068A4B4((float *)(param_1 + 0xf4),(float *)(param_1 + 0x267),
                        ALBW_AS_F32(param_1[0x20d]) * fVar3 * fVar3);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 0x9bd) = 4;
    param_1[0x261] = 0;
    func_00635180((int)param_1);
    func_004BC7BC((int)param_1);
  }
  return;
}

