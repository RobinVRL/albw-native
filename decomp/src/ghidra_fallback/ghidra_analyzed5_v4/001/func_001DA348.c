#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_001da3dc;

// USA 001DA348 <- EU 001DA348 (Ghidra, non-matching)
// GLOBAL DAT_001da3dc float

undefined4 func_001DA348(int param_1,float *param_2,float *param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint in_fpscr;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define afStack_34 ((float *)(albw_frame + 0x1c))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *param_2 = *param_3;
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  func_00115154(&local_38,afStack_34,*(uint *)(param_1 + 1000));
  local_2c = local_38 * DAT_001da3dc;
  local_24 = afStack_34[0] * DAT_001da3dc;
  uStack_28 = *(undefined4 *)(param_1 + 0x43c);
  if (param_4 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  func_00115D70(&local_20,&local_2c,fVar2);
  local_48 = local_20;
  uStack_44 = uStack_1c;
  uStack_40 = uStack_18;
  return func_00115C54(param_2,param_2,&local_48);
}

