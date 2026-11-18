#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0068C690(float *param_1);
extern float DAT_0035f6ec;
extern float DAT_0035f6f0;
extern float DAT_0035f6f4;
extern float *DAT_0035f6f8;
extern float DAT_0035f6fc;
extern float DAT_0035f700;
extern float DAT_0035f704;
extern float *DAT_0035f708;

// USA 0035F5FC <- EU 0035F5D8 (Ghidra, non-matching)
// GLOBAL DAT_0035f6ec float
// GLOBAL DAT_0035f6f0 float
// GLOBAL DAT_0035f6f4 float
// GLOBAL DAT_0035f6f8 float *
// GLOBAL DAT_0035f6fc float
// GLOBAL DAT_0035f700 float
// GLOBAL DAT_0035f704 float
// GLOBAL DAT_0035f708 float *

void func_0035F5FC(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4)

{
  float fparam_0_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fparam_3_00;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((float *)(albw_frame + 0x8))
  fparam_0_00 = DAT_0035f6f0;
  fparam_3_00 = DAT_0035f6ec;
  uVar3 = *(uint *)(param_1 + 0x488);
  if (*(uint *)(param_1 + 0x484) < uVar3) {
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x4b4);
  if (uVar1 < *(uint *)(param_1 + 0x4b8)) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0x4b4) = uVar1;
  }
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x484);
  }
  fVar4 = fparam_3_00;
  if ((uVar3 != 0 && uVar1 != 0) && (fVar4 = fparam_0_00, uVar1 < uVar3)) {
    fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * *(float *)(param_1 + 0x48c);
  }
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3);
  local_28[0] = *DAT_0035f6f8;
  local_28[1] = DAT_0035f6f8[1];
  local_28[2] = DAT_0035f6f8[2];
  local_28[3] = DAT_0035f6f8[3];
  if (DAT_0035f6f4 < fVar5) {
    fVar5 = DAT_0035f6f4;
  }
  func_003E19E8(fparam_0_00,DAT_0035f6fc,local_28[(int)fVar5],fparam_3_00,fVar4);
  func_004D838C((float *)(param_1 + 0x4d8),DAT_0035f708,DAT_0035f704,fparam_3_00,DAT_0035f700);
  func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),(float *)(param_1 + 0x4d8));
  iVar2 = func_0068C690((float *)(param_1 + 0x3dc));
  *(int *)(param_1 + 1000) = iVar2;
  return;
}

