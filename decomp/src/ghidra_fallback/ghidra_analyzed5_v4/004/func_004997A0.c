#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);

// USA 004997A0 <- EU 00499778 (Ghidra, non-matching)

float func_004997A0(float *param_1,float *param_2,float fparam_0)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_00115C70(&local_1c,param_2,param_1);
  local_28 = local_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  func_00115D70(&local_28,&local_28,fparam_0);
  func_00115C54(&local_1c,param_1,&local_28);
  return local_1c;
}

