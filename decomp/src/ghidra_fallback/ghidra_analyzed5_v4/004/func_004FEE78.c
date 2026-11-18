// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D134(int *param_1,uint param_2);
extern int func_00521184();
extern int func_0058A7D4(void);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float DAT_004fef9c;
extern float DAT_004fefa0;
extern float DAT_004fefa4;

// USA 004FEE78 <- EU 004FEE50 (Ghidra, non-matching)
// GLOBAL DAT_004fef9c float
// GLOBAL DAT_004fefa0 float
// GLOBAL DAT_004fefa4 float

void func_004FEE78(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c ((float *)(albw_frame + 0x4))
  uVar7 = func_0058AB74(param_1);
  if ((int)uVar7 == 0) {
    fVar6 = func_0058AA40(param_1);
    func_004FC07C(param_1,1,0xffffffff,0);
    func_004FB0A4(param_1,fVar6);
  }
  else {
    func_004FC07C(param_1,1,0xffffffff,0);
  }
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  fVar6 = DAT_004fef9c;
  iVar3 = (int)((ulonglong)uVar2 * 0x32 >> 0x20);
  iVar4 = iVar3 << 3;
  *(int *)(param_1 + 0x8ec) = iVar4;
  if (iVar3 == 0) {
    *(float *)(param_1 + 0x8f0) = fVar6;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8f0) = DAT_004fefa0 / fVar5;
  }
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  if (*(char *)(param_1 + 0x910) == '\0') {
    iVar4 = func_00521184(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x910) = 0;
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
    iVar4 = *(int *)(param_1 + 0x8e4) + (uVar2 >> 1) * -0x40000000;
  }
  *(int *)(param_1 + 0x8e0) = iVar4;
  func_0051D134((int *)(param_1 + 0x8e0),0x168);
  local_20 = fVar6;
  local_1c[0] = fVar6;
  func_00115154(local_1c,&local_20,*(uint *)(param_1 + 0x8e0));
  fVar6 = DAT_004fefa4;
  *(float *)(param_1 + 0x3dc) = local_1c[0] * DAT_004fefa4;
  *(float *)(param_1 + 0x3e4) = local_20 * fVar6;
  return;
}

