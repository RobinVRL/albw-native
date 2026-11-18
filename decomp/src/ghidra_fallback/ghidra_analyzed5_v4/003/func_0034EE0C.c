#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float DAT_0034ef84;
extern float DAT_0034ef88;

// USA 0034EE0C <- EU 0034EDE8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_0034ef84 float
// GLOBAL DAT_0034ef88 float

float func_0034EE0C(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float *)(albw_frame + 0x0))
  #define fStack_ac (*(float *)(albw_frame + 0x4))
  #define fStack_a8 (*(float *)(albw_frame + 0x8))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define fStack_9c (*(float *)(albw_frame + 0x14))
  #define fStack_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define fStack_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define fStack_78 (*(float *)(albw_frame + 0x38))
  #define fStack_74 (*(float *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define fStack_6c (*(float *)(albw_frame + 0x44))
  #define fStack_68 (*(float *)(albw_frame + 0x48))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define local_4c (*(float *)(albw_frame + 0x64))
  #define fStack_48 (*(float *)(albw_frame + 0x68))
  #define fStack_44 (*(float *)(albw_frame + 0x6c))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define fStack_3c (*(float *)(albw_frame + 0x74))
  #define fStack_38 (*(float *)(albw_frame + 0x78))
  func_00115C70(&local_94,param_5,param_4);
  func_00115C70(&local_88,param_3,param_5);
  func_00115C70(&local_5c,param_4,param_3);
  fVar3 = local_88 * local_5c + fStack_84 * local_58 + local_80 * local_54;
  fVar1 = local_94 * local_88 + local_90 * fStack_84 + local_8c * local_80;
  fVar2 = local_5c * local_94 + local_58 * local_90 + local_54 * local_8c;
  fVar6 = -fVar3;
  fVar5 = fVar2 * fVar1;
  fVar4 = fVar3 * fVar2;
  fVar7 = -fVar1;
  fVar2 = -fVar2;
  fparam_0 = fVar5 + fVar1 * fVar3;
  fVar8 = fparam_0 + fVar4;
  func_00115D70(&local_40,param_3,fVar1 * fVar3 + fVar4);
  local_7c = local_40;
  fStack_78 = fStack_3c;
  fStack_74 = fStack_38;
  func_00115D70(&local_40,param_4,fVar4 + fVar5);
  local_b0 = local_40;
  fStack_ac = fStack_3c;
  fStack_a8 = fStack_38;
  func_00115D70(&local_40,param_5,fparam_0);
  local_4c = local_40;
  fStack_48 = fStack_3c;
  fStack_44 = fStack_38;
  func_00115C54(&local_40,&local_7c,&local_b0);
  local_a0 = local_40;
  fStack_9c = fStack_3c;
  fStack_98 = fStack_38;
  func_00115C54(&local_40,&local_a0,&local_4c);
  local_70 = local_40;
  fStack_6c = fStack_3c;
  fStack_68 = fStack_38;
  func_00115D88(&local_40,&local_70,fVar8 * DAT_0034ef84);
  fVar1 = DAT_0034ef88;
  *param_2 = local_40;
  param_2[1] = fStack_3c;
  param_2[2] = fStack_38;
  return SQRT(((fVar6 + fVar2) * (fVar2 + fVar7) * (fVar7 + fVar6)) / fVar8) * fVar1;
}

