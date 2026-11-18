#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_0018fb9c;
extern float DAT_0018fba0;
extern undefined4 DAT_0018fba4;

// USA 0018FAD0 <- EU 0018FAD0 (Ghidra, non-matching)
// GLOBAL DAT_0018fb9c float
// GLOBAL DAT_0018fba0 float
// GLOBAL DAT_0018fba4 undefined4

undefined4 func_0018FAD0(int param_1)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define afStack_48 ((float *)(albw_frame + 0x8))
  #define local_18 (*(float *)(albw_frame + 0x38))
  #define local_14 (*(float *)(albw_frame + 0x3c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x40))
  *(float *)(param_1 + 0x3d0) = *(float *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x4d4);
  fVar1 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4cc);
  fVar2 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4d4);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2) * DAT_0018fb9c;
  if ((int)ALBW_AS_U32(fVar1) < 0x3f800000) {
    *(float *)(param_1 + 0x3d4) =
         *(float *)(param_1 + 0x4c4) +
         (*(float *)(param_1 + 0x4d0) - *(float *)(param_1 + 0x4c4)) * fVar1;
  }
  local_18 = DAT_0018fba0;
  local_14 = DAT_0018fba0;
  uStack_10 = DAT_0018fba4;
  func_00491E80(afStack_48,0,*(uint *)(param_1 + 1000),0);
  func_00115CA8(&local_18,afStack_48,&local_18);
  return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_18);
}

