#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int *DAT_00542de0;
extern float DAT_00542de4;
extern float DAT_00542de8;

// USA 00542D84 <- EU 00542D5C (Ghidra, non-matching)
// GLOBAL DAT_00542de0 int *
// GLOBAL DAT_00542de4 float
// GLOBAL DAT_00542de8 float

bool func_00542D84(int param_1)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 ((float *)(albw_frame + 0xc))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 (*(float *)(albw_frame + 0x20))
  #define local_c (*(float *)(albw_frame + 0x24))
  pfVar1 = *(float **)(*DAT_00542de0 + 0x1c);
  local_14 = *pfVar1;
  local_10 = pfVar1[1];
  local_c = pfVar1[2];
  func_00115C70(&local_14,&local_14,(float *)(param_1 + 0x3d0));
  func_004D80A4(local_24,*(uint *)(param_1 + 0xa20),DAT_00542de4);
  return local_14 * local_24[0] + local_10 * DAT_00542de8 + local_c * local_1c < DAT_00542de8;
}

