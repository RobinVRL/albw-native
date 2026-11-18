#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float DAT_00359548;
extern float DAT_0035954c;
extern int *DAT_00359550;
extern float DAT_00359554;
extern float DAT_00359558;
extern float DAT_0035955c;
extern float DAT_00359560;
extern float DAT_00359564;
extern undefined4 DAT_00359568;

// USA 00359454 <- EU 00359430 (Ghidra, non-matching)
// GLOBAL DAT_00359548 float
// GLOBAL DAT_0035954c float
// GLOBAL DAT_00359550 int *
// GLOBAL DAT_00359554 float
// GLOBAL DAT_00359558 float
// GLOBAL DAT_0035955c float
// GLOBAL DAT_00359560 float
// GLOBAL DAT_00359564 float
// GLOBAL DAT_00359568 undefined4

void func_00359454(int param_1,float *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  piVar1 = DAT_00359550;
  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = param_2[2];
  uVar6 = in_fpscr & 0xfffffff | (uint)(local_28 == DAT_00359548) << 0x1e;
  bVar4 = false;
  if (SUB41(uVar6 >> 0x1e,0)) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(local_24 == DAT_00359548) << 0x1e;
    bVar4 = SUB41(uVar6 >> 0x1e,0);
  }
  bVar5 = false;
  if (bVar4) {
    uVar6 = uVar6 & 0xfffffff | (uint)(local_20 == DAT_00359548) << 0x1e;
    bVar5 = SUB41(uVar6 >> 0x1e,0);
  }
  if (bVar5) {
    fVar9 = DAT_0035954c;
    fVar10 = DAT_00359554;
    uVar3 = func_00111A64((uint *)(*DAT_00359550 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
    local_28 = fVar7 * DAT_00359558 * fVar10 + fVar9;
    fVar7 = DAT_00359558;
    uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
    fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
    local_20 = fVar8 * fVar7 * fVar10 + fVar9;
    fVar9 = DAT_0035955c;
    fVar10 = DAT_00359560;
    uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
    fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
    local_24 = fVar8 * fVar7 * fVar10 + fVar9;
    func_00115DC8(&local_28);
  }
  func_00115DAC((float *)(param_1 + 0x18),&local_28,(float *)(param_1 + 0x18),DAT_00359564);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar2 = DAT_00359568;
  *(undefined4 *)(param_1 + 0x2c) = 0x1e;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

