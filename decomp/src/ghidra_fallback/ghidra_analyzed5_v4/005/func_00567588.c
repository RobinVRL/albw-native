#include "ghidra_types.h"

extern int func_0068FDFC(int param_1,int *param_2,int *param_3,int *param_4,float *param_5,float fparam_0, float fparam_1);

// USA 00567588 <- EU 00567560 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *

undefined4 func_00567588(int param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  float in_s1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define iStack_14 (*(int *)(albw_frame + 0x1c))
  #define piStack_10 (*(int * *)(albw_frame + 0x20))
  #define piStack_c (*(int * *)(albw_frame + 0x24))
  #define piStack_8 (*(int * *)(albw_frame + 0x28))
  local_24 = ALBW_AS_F32(*param_5);
  iStack_14 = param_1;
  piStack_10 = param_2;
  piStack_c = param_3;
  piStack_8 = param_4;
  return func_0068FDFC(param_1,param_2,param_3,param_4,&local_28,local_24,in_s1);
}

