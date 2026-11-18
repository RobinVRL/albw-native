#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern float *DAT_00227370;

// USA 0022731C <- EU 0022731C (Ghidra, non-matching)
// GLOBAL DAT_00227370 float *

undefined4 func_0022731C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  func_00115C54(&local_18,(float *)(param_1 + 0x3d0),DAT_00227370);
  *(float *)(param_1 + 0x704) = local_18;
  *(undefined4 *)(param_1 + 0x708) = uStack_14;
  *(undefined4 *)(param_1 + 0x70c) = uStack_10;
  *(undefined1 *)(param_1 + 0x580) = 2;
  *(float **)(param_1 + 0x4b4) = (float *)(param_1 + 0x704);
  return func_0036BFD0(param_1 + 0x48c,0xffffffff,0xffffffff);
}

