#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_00513d84;
extern undefined4 DAT_00513d88;

// USA 00513D68 <- EU 00513D40 (Ghidra, non-matching)
// GLOBAL DAT_00513d84 float
// GLOBAL DAT_00513d88 undefined4

float func_00513D68(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_14 ((float *)(albw_frame + 0xc))
  func_004D80A4(&fStack_20,*(uint *)(param_1 + 1000),DAT_00513d84);
  local_1c = DAT_00513d88;
  func_00115C54(local_14,(float *)(param_1 + 0x3d0),&fStack_20);
  return local_14[0];
}

