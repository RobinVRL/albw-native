#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float DAT_0042ced8;
extern float DAT_0042cedc;

// USA 0042CBE4 <- EU 0042CBC4 (Ghidra, non-matching)
// GLOBAL DAT_0042ced8 float
// GLOBAL DAT_0042cedc float

undefined4 func_0042CBE4(int param_1,float *param_2,int param_3,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  func_00115D70(&local_24,(float *)(param_1 + 0x58),DAT_0042ced8);
  local_24 = local_24 + fparam_0;
  local_20 = local_20 + fparam_0;
  local_1c = local_1c + fparam_0;
  func_00115C70(&local_48,param_2,(float *)(param_1 + 4));
  fVar1 = DAT_0042cedc;
  fVar2 = *(float *)(param_1 + 100) * local_48 + *(float *)(param_1 + 0x70) * fStack_44 +
          *(float *)(param_1 + 0x7c) * fStack_40;
  fVar3 = *(float *)(param_1 + 0x68) * local_48 + *(float *)(param_1 + 0x74) * fStack_44 +
          *(float *)(param_1 + 0x80) * fStack_40;
  fVar4 = *(float *)(param_1 + 0x6c) * local_48 + *(float *)(param_1 + 0x78) * fStack_44 +
          *(float *)(param_1 + 0x84) * fStack_40;
  if (DAT_0042cedc <= fVar2) {
    local_34 = local_24;
    fVar6 = local_24 - fVar2;
  }
  else {
    fVar6 = local_24 + fVar2;
    local_34 = -local_24;
  }
  if (fVar6 < DAT_0042cedc) {
    return 0;
  }
  if (DAT_0042cedc <= fVar3) {
    local_30 = local_20;
    fVar7 = local_20 - fVar3;
  }
  else {
    fVar7 = local_20 + fVar3;
    local_30 = -local_20;
  }
  if (fVar7 < DAT_0042cedc) {
    return 0;
  }
  if (DAT_0042cedc <= fVar4) {
    local_2c = local_1c;
    fVar5 = local_1c - fVar4;
  }
  else {
    local_2c = -local_1c;
    fVar5 = local_1c + fVar4;
  }
  if (fVar5 < DAT_0042cedc) {
    return 0;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (fVar6 == fVar7) {
    if (fVar6 == fVar5) {
      *(float *)(param_3 + 0x1c) = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
      *(float *)(param_3 + 0x10) = local_34;
      *(float *)(param_3 + 0x14) = local_30;
      *(float *)(param_3 + 0x18) = local_2c;
      goto LAB_0042ce74;
    }
    if (fVar5 < fVar6) goto LAB_0042ce38;
    *(float *)(param_3 + 0x1c) = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
    *(float *)(param_3 + 0x10) = local_34;
    *(float *)(param_3 + 0x14) = local_30;
  }
  else {
    if (fVar6 != fVar5) {
      if (fVar7 == fVar5) {
        if (fVar7 <= fVar6) {
          local_34 = DAT_0042cedc;
          *(float *)(param_3 + 0x1c) = DAT_0042cedc;
          *(float *)(param_3 + 0x10) = fVar2;
          *(float *)(param_3 + 0x14) = local_30;
          *(float *)(param_3 + 0x18) = local_2c;
          goto LAB_0042ce74;
        }
LAB_0042ce58:
        local_2c = DAT_0042cedc;
        local_30 = DAT_0042cedc;
        *(float *)(param_3 + 0x1c) = fVar6;
        *(float *)(param_3 + 0x10) = local_34;
        *(float *)(param_3 + 0x14) = fVar3;
        *(float *)(param_3 + 0x18) = fVar4;
      }
      else {
        if (fVar6 <= fVar7) {
          if (fVar6 <= fVar5) goto LAB_0042ce58;
        }
        else if (fVar7 <= fVar5) goto LAB_0042ce08;
LAB_0042ce38:
        local_34 = DAT_0042cedc;
        local_30 = DAT_0042cedc;
        *(float *)(param_3 + 0x1c) = fVar5;
        *(float *)(param_3 + 0x10) = fVar2;
        *(float *)(param_3 + 0x14) = fVar3;
        *(float *)(param_3 + 0x18) = local_2c;
      }
      goto LAB_0042ce74;
    }
    if (fVar5 <= fVar7) {
      local_30 = DAT_0042cedc;
      *(float *)(param_3 + 0x1c) = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
      *(float *)(param_3 + 0x10) = local_34;
      *(float *)(param_3 + 0x14) = fVar3;
      *(float *)(param_3 + 0x18) = local_2c;
      goto LAB_0042ce74;
    }
LAB_0042ce08:
    local_34 = DAT_0042cedc;
    *(float *)(param_3 + 0x1c) = fVar7;
    *(float *)(param_3 + 0x10) = fVar2;
    *(float *)(param_3 + 0x14) = local_30;
  }
  local_2c = fVar1;
  *(float *)(param_3 + 0x18) = fVar4;
LAB_0042ce74:
  func_00115DC8(&local_34);
  local_34 = -local_34;
  local_2c = -local_2c;
  local_30 = -local_30;
  func_00115CE4((float *)(param_3 + 4),(float *)(param_1 + 100),&local_34);
  func_00115CE4((float *)(param_3 + 0x10),(float *)(param_1 + 100),(float *)(param_3 + 0x10));
  func_00115C54((float *)(param_3 + 0x10),(float *)(param_3 + 0x10),(float *)(param_1 + 4));
  return 1;
}

