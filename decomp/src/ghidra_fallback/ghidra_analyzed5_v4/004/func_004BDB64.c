#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);

// USA 004BDB64 <- EU 004BDB3C (Ghidra, non-matching)

void func_004BDB64(int param_1,float *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  local_18 = *(float *)(param_1 + 0x3d0);
  uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
  local_14 = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x838);
  func_00115C70((float *)(param_1 + 0x8a0),param_2,&local_18);
  *(undefined1 *)(param_1 + 0x91a) = 1;
  return;
}

