#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int DAT_00434f44;

// USA 00434E18 <- EU 00434DF8 (Ghidra, non-matching)
// GLOBAL DAT_00434f44 int

void func_00434E18(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  pfVar2 = param_2 + 3;
  *(float *)(param_1 + 0x1c) = *param_2;
  *(float *)(param_1 + 0x20) = param_2[1];
  *(float *)(param_1 + 0x24) = param_2[2];
  *(float *)(param_1 + 0x28) = *param_3;
  *(float *)(param_1 + 0x2c) = param_3[1];
  *(float *)(param_1 + 0x30) = param_3[2];
  func_00115C70(&local_2c,pfVar2,param_2);
  local_38 = local_2c;
  local_34 = local_28;
  local_30 = local_24;
  func_00115E10((float *)(param_1 + 0x40),&local_38,param_3);
  func_00115DC8((float *)(param_1 + 0x40));
  func_00115C70(&local_2c,param_2 + 6,param_2);
  local_38 = local_2c;
  local_34 = local_28;
  local_30 = local_24;
  func_00115E10((float *)(param_1 + 0x34),param_3,&local_38);
  func_00115DC8((float *)(param_1 + 0x34));
  func_00115C70(&local_2c,pfVar2,param_2 + 6);
  local_38 = local_2c;
  local_34 = local_28;
  local_30 = local_24;
  func_00115E10((float *)(param_1 + 0x4c),param_3,&local_38);
  func_00115DC8((float *)(param_1 + 0x4c));
  func_00115C70(&local_2c,pfVar2,param_2);
  iVar1 = DAT_00434f44;
  *(float *)(param_1 + 0x60) =
       *(float *)(param_1 + 0x4c) * local_2c + *(float *)(param_1 + 0x50) * local_28 +
       *(float *)(param_1 + 0x54) * local_24;
  fVar3 = *(float *)(iVar1 + 4);
  *(float *)(param_1 + 0x58) = fVar3;
  *(float *)(param_1 + 0x5c) = fVar3 * fVar3;
  return;
}

