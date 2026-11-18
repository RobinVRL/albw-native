#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_0042dd10;
extern float DAT_0042dd14;

// USA 0042DA98 <- EU 0042DA78 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// GLOBAL DAT_0042dd10 float
// GLOBAL DAT_0042dd14 float

float func_0042DA98(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                   float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(float *)(albw_frame + 0x0))
  #define local_9c (*(float *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define fStack_6c (*(float *)(albw_frame + 0x34))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define fStack_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define fStack_58 (*(float *)(albw_frame + 0x48))
  #define fStack_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_30 (*(float *)(albw_frame + 0x70))
  #define local_2c (*(float *)(albw_frame + 0x74))
  #define local_28 (*(float *)(albw_frame + 0x78))
  func_00115C70(&local_a0,param_2,param_1);
  local_30 = local_a0;
  local_2c = local_9c;
  local_28 = local_98;
  func_00115C70(&local_a0,param_4,param_3);
  local_74 = local_a0;
  local_70 = local_9c;
  fStack_6c = local_98;
  func_00115C70(&local_a0,param_1,param_3);
  local_68 = local_a0;
  local_64 = local_9c;
  fStack_60 = local_98;
  fVar8 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
  fVar1 = local_74 * local_74 + local_70 * local_70 + fStack_6c * fStack_6c;
  fVar9 = local_30 * local_74 + local_2c * local_70 + local_28 * fStack_6c;
  fVar11 = local_30 * local_a0 + local_2c * local_9c + local_28 * local_98;
  fVar10 = local_74 * local_a0 + local_70 * local_9c + fStack_6c * local_98;
  fVar5 = fVar8 * fVar1 - fVar9 * fVar9;
  fVar2 = fVar10;
  fVar4 = DAT_0042dd10;
  fVar6 = DAT_0042dd14;
  fVar7 = fVar1;
  if (0x33ffffff < (int)ALBW_AS_U32(fVar5)) {
    fVar3 = fVar9 * fVar10 - fVar1 * fVar11;
    fVar6 = fVar5;
    if ((DAT_0042dd10 <= fVar3) &&
       (fVar2 = fVar8 * fVar10 - fVar9 * fVar11, fVar4 = fVar3, fVar7 = fVar5, fVar5 < fVar3)) {
      fVar2 = fVar10 + fVar9;
      fVar4 = fVar5;
      fVar7 = fVar1;
    }
  }
  if (DAT_0042dd10 <= fVar2) {
    if (fVar2 <= fVar7) goto LAB_0042dc2c;
    fVar11 = fVar9 - fVar11;
    fVar2 = fVar7;
  }
  else {
    fVar11 = -fVar11;
    fVar2 = DAT_0042dd10;
  }
  fVar4 = DAT_0042dd10;
  if ((DAT_0042dd10 <= fVar11) && (fVar4 = fVar6, fVar11 <= fVar8)) {
    fVar4 = fVar11;
    fVar6 = fVar8;
  }
LAB_0042dc2c:
  fVar11 = fVar4;
  if (fVar4 <= DAT_0042dd10) {
    fVar11 = -fVar4;
  }
  fVar1 = DAT_0042dd10;
  if (0x33ffffff < (int)ALBW_AS_U32(fVar11)) {
    fVar1 = fVar4 / fVar6;
  }
  fVar11 = fVar2;
  if (fVar2 <= DAT_0042dd10) {
    fVar11 = -fVar2;
  }
  fVar4 = DAT_0042dd10;
  if (0x33ffffff < (int)ALBW_AS_U32(fVar11)) {
    fVar4 = fVar2 / fVar7;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fVar1;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar4;
  }
  func_00115D70(&local_98,&local_30,fVar1);
  local_3c = local_98;
  uStack_38 = uStack_94;
  uStack_34 = uStack_90;
  func_00115C54(&local_98,&local_68,&local_3c);
  local_50 = local_98;
  uStack_4c = uStack_94;
  uStack_48 = uStack_90;
  func_00115D70(&local_a0,&local_74,fVar4);
  local_5c = local_a0;
  fStack_58 = local_9c;
  fStack_54 = local_98;
  func_00115C70(&local_a0,&local_50,&local_5c);
  return local_a0 * local_a0 + local_9c * local_9c + local_98 * local_98;
}

