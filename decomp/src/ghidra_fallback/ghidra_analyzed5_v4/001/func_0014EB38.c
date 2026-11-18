#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern undefined4 DAT_0014eb88;

// USA 0014EB38 <- EU 0014EB38 (Ghidra, non-matching)
// GLOBAL DAT_0014eb88 undefined4

void func_0014EB38(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define fStack_10 (*(float *)(albw_frame + 0x0))
  #define fStack_c (*(float *)(albw_frame + 0x4))
  func_00115154(&fStack_10,&fStack_c,*(uint *)(param_1 + 1000));
  *(float *)(param_1 + 0x374) = fStack_10;
  uVar1 = DAT_0014eb88;
  *(float *)(param_1 + 0x37c) = fStack_c;
  *(undefined4 *)(param_1 + 0x378) = uVar1;
  *(float *)(param_1 + 0x380) = fStack_c;
  *(undefined4 *)(param_1 + 900) = uVar1;
  *(float *)(param_1 + 0x388) = -fStack_10;
  return;
}

