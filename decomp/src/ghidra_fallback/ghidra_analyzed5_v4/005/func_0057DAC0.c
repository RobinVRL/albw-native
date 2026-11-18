#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);

// USA 0057DAC0 <- EU 0057DA98 (Ghidra, non-matching)

void func_0057DAC0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  if (((*(float *)(param_1 + 0x34) == *(float *)(param_1 + 0x40)) &&
      (*(float *)(param_1 + 0x38) == *(float *)(param_1 + 0x44))) &&
     (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x48))) {
    return;
  }
  local_48 = *(float *)(param_1 + 0x34);
  local_44 = *(float *)(param_1 + 0x38);
  local_40 = *(float *)(param_1 + 0x3c);
  func_00115C70(&local_48,&local_48,(float *)(param_1 + 0x40));
  func_00115DC8(&local_48);
  func_00115E10(&local_2c,(float *)(param_1 + 0x4c),&local_48);
  func_00115DC8(&local_2c);
  func_00115E10(&local_38,&local_48,&local_2c);
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x38);
  fVar3 = *(float *)(param_1 + 0x3c);
  *param_2 = local_2c;
  param_2[1] = local_28;
  param_2[2] = local_24;
  param_2[3] = -(local_2c * fVar1 + local_28 * fVar2 + local_24 * fVar3);
  param_2[4] = local_38;
  param_2[5] = local_34;
  param_2[6] = local_30;
  param_2[7] = -(local_38 * fVar1 + local_34 * fVar2) + -(local_30 * fVar3);
  param_2[8] = local_48;
  param_2[9] = local_44;
  param_2[10] = local_40;
  param_2[0xb] = -(local_48 * fVar1 + local_44 * fVar2) + -(local_40 * fVar3);
  return;
}

