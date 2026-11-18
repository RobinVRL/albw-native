#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00196330(int param_1,undefined4 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0019652c;
extern int *DAT_00196530;
extern float DAT_00196534;
extern float DAT_00196538;
extern float DAT_0019653c;

// USA 00196450 <- EU 00196450 (Ghidra, non-matching)
// GLOBAL DAT_0019652c float
// GLOBAL DAT_00196530 int *
// GLOBAL DAT_00196534 float
// GLOBAL DAT_00196538 float
// GLOBAL DAT_0019653c float

void func_00196450(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  func_00196330(param_1,3);
  piVar1 = DAT_00196530;
  local_28 = DAT_0019652c;
  *(undefined4 *)(param_1 + 0x444) = 0;
  local_24 = local_28;
  local_20 = local_28;
  fVar6 = DAT_00196534;
  uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
  fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  local_28 = fVar4 * DAT_00196538 * fVar6 + DAT_0019653c + local_28;
  fVar4 = DAT_00196538;
  fVar7 = DAT_0019653c;
  uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
  fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  local_20 = fVar5 * fVar4 * fVar6 + fVar7 + local_20;
  func_00115C70(&local_28,&local_28,(float *)(param_1 + 0x3d0));
  iVar3 = func_0068C690(&local_28);
  *(int *)(param_1 + 0x45c) = iVar3;
  uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
  *(int *)(param_1 + 0x448) = (int)((ulonglong)uVar2 * 100 >> 0x20) + 0x32;
  return;
}

