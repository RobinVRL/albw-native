#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);

// USA 004363B4 <- EU 00436394 (Ghidra, non-matching)

void func_004363B4(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_00115D70(&local_1c,(float *)(param_1 + 4),*(float *)(param_1 + 0x1c));
  local_28 = local_1c;
  local_24 = uStack_18;
  local_20 = uStack_14;
  func_00115C54((float *)(param_1 + 0x10),(float *)(param_1 + 0x10),&local_28);
  *(float *)(param_1 + 4) = -*(float *)(param_1 + 4);
  *(float *)(param_1 + 8) = -*(float *)(param_1 + 8);
  *(float *)(param_1 + 0xc) = -*(float *)(param_1 + 0xc);
  return;
}

