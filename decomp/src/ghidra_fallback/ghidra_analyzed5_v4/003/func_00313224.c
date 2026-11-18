#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern float DAT_0031328c;
extern int DAT_00313290;

// USA 00313224 <- EU 00313200 (Ghidra, non-matching)
// GLOBAL DAT_0031328c float
// GLOBAL DAT_00313290 int

void func_00313224(int *param_1)

{
  float *pfVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
  param_1[0x285] = param_1[0xf4];
  param_1[0x286] = param_1[0xf5];
  param_1[0x287] = param_1[0xf6];
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(local_18,pfVar1,(float *)(param_1 + 0xf4));
  uVar2 = func_004904CC(local_18[0],local_10);
  func_004D8054((float *)(param_1 + 0x285),uVar2,DAT_0031328c);
  param_1[0x20d] = DAT_00313290;
  *(undefined2 *)(param_1 + 0x28c) = 0x78;
  return;
}

