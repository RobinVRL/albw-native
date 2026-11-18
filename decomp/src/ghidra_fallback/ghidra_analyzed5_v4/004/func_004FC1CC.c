#include "ghidra_types.h"

extern int func_004FC798(int param_1,int param_2,undefined1 *param_3,float fparam_0);
extern float DAT_004fc1d8;

// USA 004FC1CC <- EU 004FC1A4 (Ghidra, non-matching)
// GLOBAL DAT_004fc1d8 float

undefined4 func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0)

{
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 (*(byte *)(albw_frame + 0x8))
  #define uStack_7 (*(undefined3 *)(albw_frame + 0x9))
  if (fparam_0 < DAT_004fc1d8) {
    param_3 = param_3 | 4;
  }
  (*(undefined4 *)&local_8) = CONCAT31((int3)((uint)in_r3 >> 8),param_3);
  return func_004FC798(param_1 + 0x5a8,param_2,&local_8,fparam_0);
}

