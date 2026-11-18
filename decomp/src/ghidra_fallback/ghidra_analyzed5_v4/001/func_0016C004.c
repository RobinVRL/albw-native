#include "ghidra_types.h"

extern int func_0016BCBC(int param_1,float *param_2,float *param_3,int *param_4);

// USA 0016C004 <- EU 0016C004 (Ghidra, non-matching)

void func_0016C004(int param_1,int *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(int *)(albw_frame + 0x1c))
  #define local_10 (*(int *)(albw_frame + 0x20))
  local_28 = ALBW_AS_F32(param_2[0x8b]);
  iStack_24 = param_2[0x8c];
  iStack_20 = param_2[0x8d];
  iStack_1c = param_2[0x8e];
  local_18 = ALBW_AS_F32(param_2[0x6a]);
  local_14 = param_2[0x6e];
  local_10 = param_2[0x72];
  func_0016BCBC(param_1,&local_28,&local_18,param_2);
  param_2[0x8b] = (int)ALBW_AS_U32(local_28);
  param_2[0x8c] = iStack_24;
  param_2[0x8d] = iStack_20;
  param_2[0x8e] = iStack_1c;
  return;
}

