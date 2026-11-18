#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0053ED74(int param_1);

// USA 002D8408 <- EU 002D83E4 (Ghidra, non-matching)

void func_002D8408(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define fStack_1c (*(float *)(albw_frame + 0x24))
  #define fStack_18 (*(float *)(albw_frame + 0x28))
  iVar1 = func_0053ED74(*(int *)(param_1 + 0x4c));
  local_2c = *(float *)(iVar1 + 0xc);
  local_28 = *(undefined4 *)(iVar1 + 0x1c);
  local_24 = *(undefined4 *)(iVar1 + 0x2c);
  func_00115C70(&local_20,&local_2c,*(float **)(param_1 + 0x30));
  local_38 = -local_20;
  fStack_30 = -fStack_18;
  fStack_34 = -fStack_1c;
  func_00115C54(&local_20,&local_38,param_3);
  *param_2 = local_20;
  param_2[1] = fStack_1c;
  param_2[2] = fStack_18;
  return;
}

