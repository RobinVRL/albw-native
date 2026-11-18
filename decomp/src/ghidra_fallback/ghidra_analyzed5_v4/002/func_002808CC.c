#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);

// USA 002808CC <- EU 002808F4 (Ghidra, non-matching)

void func_002808CC(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  func_00115C70(local_18,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
  *(float *)(param_1 + 0x3dc) = local_18[0];
  *(undefined4 *)(param_1 + 0x3e4) = local_10;
  return;
}

