#include "ghidra_types.h"

extern int func_003CC288(int param_1,float *param_2,float fparam_0);
extern float func_003FBEE8(int param_1,undefined4 param_2,int param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3,float fparam_4);

// USA 00564B90 <- EU 00564B68 (Ghidra, non-matching)

void func_00564B90(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x210];
  #define afStack_210 ((float *)(albw_frame + 0x0))
  puVar1 = (undefined1 *)(*(int *)(param_2 + 8) + (param_3 & 0xffff) * 0x218);
  fparam_0 = func_003FBEE8((int)afStack_210,(uint)*(byte *)(param_1 + 0x28),param_4,
                           *(float *)(param_1 + 0x30),*(float *)(param_1 + 0x34),
                           *(float *)(param_1 + 0x38),*(float *)(param_2 + 0x58),
                           *(float *)(param_2 + 0x5c));
  func_003CC288((int)puVar1,afStack_210,fparam_0);
  puVar1[2] = *(undefined1 *)(param_1 + 0x2c);
  puVar1[3] = *(undefined1 *)(param_1 + 0x2d);
  puVar1[4] = *(undefined1 *)(param_1 + 0x2e);
  *puVar1 = 1;
  puVar1[1] = *(byte *)(param_1 + 0x29) & 1;
  return;
}

