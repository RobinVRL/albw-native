#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float DAT_00341264;
extern undefined4 DAT_00341268;

// USA 00341240 <- EU 0034121C (Ghidra, non-matching)
// GLOBAL DAT_00341264 float
// GLOBAL DAT_00341268 undefined4

void func_00341240(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  local_20 = DAT_00341264;
  uStack_1c = DAT_00341268;
  local_18 = DAT_00341264;
  func_00115C54(&local_14,(float *)(*(int *)(param_1 + 0x24) + 0x3d0),&local_20);
  *(float *)(param_1 + 0x504) = local_14;
  *(undefined4 *)(param_1 + 0x508) = uStack_10;
  *(undefined4 *)(param_1 + 0x50c) = uStack_c;
  return;
}

