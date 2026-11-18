#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float DAT_004d7e80;
extern float DAT_004d7e84;

// USA 004D7E0C <- EU 004D7DE4 (Ghidra, non-matching)
// GLOBAL DAT_004d7e80 float
// GLOBAL DAT_004d7e84 float

void func_004D7E0C(float *param_1,uint param_2,uint param_3)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 ((float *)(albw_frame + 0xc))
  func_00115154(&local_20,&local_18,param_3);
  fVar1 = DAT_004d7e80;
  local_1c = DAT_004d7e80;
  local_14[0] = DAT_004d7e84;
  *param_1 = local_18;
  param_1[3] = fVar1;
  param_1[6] = -local_20;
  if (param_2 != 0) {
    func_00115154(&local_1c,local_14,param_2);
  }
  param_1[1] = local_1c * local_20;
  param_1[4] = local_14[0];
  param_1[5] = -local_1c;
  param_1[2] = local_14[0] * local_20;
  param_1[7] = local_1c * local_18;
  param_1[8] = local_14[0] * local_18;
  #define local_18 (*(return local_1c * *)(albw_frame + 0x8))
}

