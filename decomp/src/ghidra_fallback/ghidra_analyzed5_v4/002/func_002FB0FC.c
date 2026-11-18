#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_002fb114;
extern int DAT_002fb118;

// USA 002FB0FC <- EU 002FB0D8 (Ghidra, non-matching)
// GLOBAL DAT_002fb114 float
// GLOBAL DAT_002fb118 int

void func_002FB0FC(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  func_00115D70(&local_18,(float *)(param_1 + 0x374),DAT_002fb114);
  *(float *)(param_1 + 0x3dc) = local_18;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_14;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_10;
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(DAT_002fb118 + 0x1c);
  return;
}

