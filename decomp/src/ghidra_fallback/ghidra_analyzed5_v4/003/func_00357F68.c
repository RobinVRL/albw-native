#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_00358034;
extern float DAT_00358038;
extern float DAT_0035803c;

// USA 00357F68 <- EU 00357F44 (Ghidra, non-matching)
// GLOBAL DAT_00358034 float
// GLOBAL DAT_00358038 float
// GLOBAL DAT_0035803c float

void func_00357F68(int param_1,float *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fparam_0;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  local_30 = *(float *)(param_1 + 0x95c);
  uStack_2c = *(undefined4 *)(param_1 + 0x960);
  local_28 = *(float *)(param_1 + 0x964);
  fparam_0 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  puVar1 = (uint *)func_0058A7D4();
  fVar5 = local_30 - DAT_00358034;
  fVar6 = (local_30 + DAT_00358034) - fVar5;
  fVar4 = DAT_00358034;
  uVar2 = func_00111A64(puVar1);
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  local_30 = fVar3 * DAT_00358038 * fVar6 + fVar5;
  fVar3 = DAT_00358038;
  puVar1 = (uint *)func_0058A7D4();
  fVar5 = local_28 - fVar4;
  fVar6 = (local_28 + fVar4) - fVar5;
  uVar2 = func_00111A64(puVar1);
  fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  local_28 = fVar4 * fVar3 * fVar6 + fVar5;
  func_00115C70(&local_30,&local_30,(float *)(param_1 + 0x3d0));
  uVar2 = func_004904CC(local_30,local_28);
  func_004D80A4(param_2,uVar2,fparam_0);
  param_2[1] = DAT_0035803c;
  return;
}

