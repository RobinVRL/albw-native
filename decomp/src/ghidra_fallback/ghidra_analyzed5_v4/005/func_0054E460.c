#include "ghidra_types.h"

extern float func_00275FEC(int param_1,undefined4 param_2,uint param_3,uint param_4);
extern int *DAT_0054e498;

// USA 0054E460 <- EU 0054E438 (Ghidra, non-matching)
// GLOBAL DAT_0054e498 int *

float func_0054E460(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float fparam_0,
                   float fparam_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  if (*DAT_0054e498 == 0) {
    fVar1 = ALBW_AS_F32(param_2[1]);
  }
  else {
    local_20 = *param_2;
    uStack_18 = param_2[2];
    local_1c = ALBW_AS_F32(param_2[1]) + fparam_0;
    local_14 = *param_2;
    uStack_c = param_2[2];
    local_10 = ALBW_AS_F32(param_2[1]) - fparam_1;
    fVar1 = func_00275FEC(*DAT_0054e498,&local_20,(uint)&local_14,param_3);
  }
  return fVar1;
}

