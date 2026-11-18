#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_002b3898;
extern float DAT_002b389c;

// USA 002B3834 <- EU 002B3810 (Ghidra, non-matching)
// GLOBAL DAT_002b3898 float
// GLOBAL DAT_002b389c float

void func_002B3834(int param_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined8 *)(albw_frame + 0x4))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define afStack_1c ((float *)(albw_frame + 0x34))
  #define iStack_c (*(int *)(albw_frame + 0x44))
  iStack_c = param_1;
  func_00115C70(&local_50,afStack_1c,(float *)(param_1 + 0x3d0));
  local_3c = DAT_002b3898;
  local_38 = DAT_002b3898;
  local_34 = DAT_002b389c;
  fVar1 = DAT_002b3898;
  func_004D80A4(&local_3c,*(uint *)(param_1 + 0x95c),DAT_002b389c);
  if (fVar1 < local_50 * local_3c + ALBW_AS_F32(uStack_4c) * fVar1 +
              ALBW_AS_F32(((ulonglong)uStack_4c >> 0x20)) * local_34) {
    *(int *)(param_1 + 0x95c) = *(int *)(param_1 + 0x95c) + -0x80000000;
  }
  return;
}

