#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern undefined4 DAT_0014e4fc;

// USA 0014E4B0 <- EU 0014E4B0 (Ghidra, non-matching)
// GLOBAL DAT_0014e4fc undefined4

void func_0014E4B0(int param_1,uint param_2)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(float *)(albw_frame + 0x4))
  func_00115154(&local_10,&local_c,param_2);
  *(float *)(param_1 + 0x374) = local_10;
  uVar1 = DAT_0014e4fc;
  *(float *)(param_1 + 0x37c) = local_c;
  *(undefined4 *)(param_1 + 0x378) = uVar1;
  *(float *)(param_1 + 0x380) = local_c;
  *(undefined4 *)(param_1 + 900) = uVar1;
  *(float *)(param_1 + 0x388) = -local_10;
  return;
}

