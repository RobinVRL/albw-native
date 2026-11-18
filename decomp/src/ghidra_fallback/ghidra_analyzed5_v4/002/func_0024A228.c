#include "ghidra_types.h"

extern int func_0024ADF4(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_0065F7E8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0024a40c;
extern float DAT_0024a410;
extern float DAT_0024a414;
extern float DAT_0024a418;
extern int DAT_0024a41c;
extern int *DAT_0024a420;
extern float DAT_0024a424;
extern float DAT_0024a428;
extern float DAT_0024a42c;
extern int *DAT_0024a430;

// USA 0024A228 <- EU 0024A228 (Ghidra, non-matching)
// GLOBAL DAT_0024a40c float
// GLOBAL DAT_0024a410 float
// GLOBAL DAT_0024a414 float
// GLOBAL DAT_0024a418 float
// GLOBAL DAT_0024a41c int
// GLOBAL DAT_0024a420 int *
// GLOBAL DAT_0024a424 float
// GLOBAL DAT_0024a428 float
// GLOBAL DAT_0024a42c float
// GLOBAL DAT_0024a430 int *

undefined4 func_0024A228(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fparam_0;
  
  piVar1 = DAT_0024a420;
  fparam_0 = DAT_0024a418;
  fVar5 = DAT_0024a414;
  fVar4 = DAT_0024a410;
  if (*(int *)(param_1 + 0x448) == 0) {
    fVar3 = *(float *)(param_1 + 0x3e0);
    if ((int)ALBW_AS_U32(fVar3) < DAT_0024a41c) {
      fVar3 = fVar3 + DAT_0024a40c;
      *(float *)(param_1 + 0x3e0) = fVar3;
    }
    if (*(char *)(*piVar1 + 0x18) == '\a' || *(char *)(*piVar1 + 0x18) == '%') {
      *(float *)(param_1 + 0x3e0) = fVar3 * DAT_0024a428;
    }
    else if (*(float *)(param_1 + 0xc) + DAT_0024a424 <= *(float *)(param_1 + 0x3d4)) {
      func_0024ADF4(param_1,1,fparam_0,fVar4);
      *(undefined4 *)(param_1 + 0x448) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x448) == 1) {
    if ((uint)ALBW_AS_U32(*(float *)(param_1 + 0x3e0)) < (uint)ALBW_AS_U32(DAT_0024a42c)) {
      *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0024a40c;
    }
    if (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc) + fVar5) {
      func_0024ADF4(param_1,0,fparam_0,fVar4);
      *(undefined4 *)(param_1 + 0x448) = 0;
    }
  }
  iVar2 = func_0051E6D0(*DAT_0024a430,(float *)(param_1 + 0x3d0),fVar5);
  if (iVar2 != 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x32) == 0) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  fVar4 = *(float *)(iVar2 + 0x14);
  fVar5 = *(float *)(iVar2 + 0xc);
  if (*(float *)(iVar2 + 8) < fVar5) {
    if ((fVar5 < fVar4) && (fVar5 < fVar4)) goto LAB_0024a3e8;
    if (fVar4 < fparam_0) {
      return 0;
    }
  }
  else if (fVar4 <= fVar5) {
    return 0;
  }
  if (*(float *)(iVar2 + 8) < fVar4) {
    return 0;
  }
LAB_0024a3e8:
  *(float *)(param_1 + 0x3dc) = fparam_0;
  *(float *)(param_1 + 0x3e0) = fparam_0;
  *(float *)(param_1 + 0x3e4) = fparam_0;
  return func_0065F7E8((undefined4 *)(param_1 + 0x41c),4);
}

