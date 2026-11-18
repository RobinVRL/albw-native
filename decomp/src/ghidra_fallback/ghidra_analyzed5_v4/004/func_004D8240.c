#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float DAT_004d8294;
extern float DAT_004d8298;

// USA 004D8240 <- EU 004D8218 (Ghidra, non-matching)
// GLOBAL DAT_004d8294 float
// GLOBAL DAT_004d8298 float

void func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  func_00115154(&local_28,&local_24,param_3);
  local_20 = DAT_004d8294;
  local_1c[0] = DAT_004d8298;
  if (param_2 != 0) {
    func_00115154(&local_20,local_1c,param_2);
  }
  *param_1 = fparam_0 * local_1c[0] * local_28;
  param_1[1] = -(fparam_0 * local_20);
  param_1[2] = fparam_0 * local_1c[0] * local_24;
  return;
}

