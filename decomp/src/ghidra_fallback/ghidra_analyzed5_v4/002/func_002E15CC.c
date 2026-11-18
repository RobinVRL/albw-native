#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_002e18b8;
extern float DAT_002e18bc;
extern float DAT_002e18c0;
extern float DAT_002e18c4;
extern float DAT_002e18c8;
extern float DAT_002e18cc;
extern float *DAT_002e18d0;
extern float DAT_002e18d4;
extern float DAT_002e18d8;
extern float DAT_002e18dc;

// USA 002E15CC <- EU 002E15A8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_002e18b8 float
// GLOBAL DAT_002e18bc float
// GLOBAL DAT_002e18c0 float
// GLOBAL DAT_002e18c4 float
// GLOBAL DAT_002e18c8 float
// GLOBAL DAT_002e18cc float
// GLOBAL DAT_002e18d0 float *
// GLOBAL DAT_002e18d4 float
// GLOBAL DAT_002e18d8 float
// GLOBAL DAT_002e18dc float

/* WARNING: Removing unreachable block (ram,0x002e1694) */
/* WARNING: Removing unreachable block (ram,0x002e1698) */
/* WARNING: Removing unreachable block (ram,0x002e16a8) */
/* WARNING: Removing unreachable block (ram,0x002e16b4) */

void func_002E15CC(float *param_1,float *param_2,float *param_3,int param_4,int param_5,int param_6,
                  float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  fVar5 = DAT_002e18c0;
  local_60 = DAT_002e18bc;
  fVar2 = DAT_002e18b8;
  if (param_4 != 0) {
    fVar1 = param_1[7];
    fVar6 = DAT_002e18b8;
    if (fVar1 == 0.0) {
      fVar6 = DAT_002e18c0;
    }
    if ((uint)ALBW_AS_U32(fVar1) < 2) {
      fVar1 = 1.4013e-45;
    }
    fVar3 = (float)VectorUnsignedToFloat(ALBW_AS_U32(fVar1),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = param_1[6];
    fVar1 = DAT_002e18b8;
    if (fVar3 * DAT_002e18c4 <= DAT_002e18b8) {
      fVar1 = fVar3 * DAT_002e18c4;
    }
    fVar1 = (fVar6 - fVar4) * fVar1;
    if (fVar1 <= DAT_002e18c0) {
      fVar1 = -fVar1;
    }
    fVar3 = DAT_002e18c8;
    if ((DAT_002e18c8 <= fVar1) && (fVar3 = fVar1, DAT_002e18bc < fVar1)) {
      fVar3 = DAT_002e18bc;
    }
    fVar3 = fVar4 + fVar3;
    if ((fVar6 <= fVar3) || (fVar3 < fVar4)) {
      param_1[6] = fVar6;
    }
    else {
      param_1[6] = fVar3;
    }
  }
  if (param_6 != 0) {
    param_1[6] = fVar2;
  }
  if (fVar5 < param_1[6]) {
    local_5c = local_60;
    local_58 = local_60;
    local_54 = DAT_002e18cc;
    local_50 = DAT_002e18cc;
    local_4c = DAT_002e18cc;
    func_00115C70(&local_60,param_1,param_2);
    func_00115C70(&local_54,param_1 + 3,param_2);
    if (*DAT_002e18d0 < local_60) {
      local_60 = *DAT_002e18d0;
    }
    if (DAT_002e18d0[1] < local_5c) {
      local_5c = DAT_002e18d0[1];
    }
    if (DAT_002e18d0[2] < local_58) {
      local_58 = DAT_002e18d0[2];
    }
    if (local_54 <= *DAT_002e18d0) {
      local_54 = *DAT_002e18d0;
    }
    if (local_50 <= DAT_002e18d0[1]) {
      local_50 = DAT_002e18d0[1];
    }
    if (local_4c <= DAT_002e18d0[2]) {
      local_4c = DAT_002e18d0[2];
    }
    fVar2 = DAT_002e18d4;
    if (param_6 == 0) {
      local_48 = (local_60 + local_54) * DAT_002e18d4;
      local_44 = (local_5c + local_50) * DAT_002e18d4;
      fStack_40 = (local_58 + local_4c) * DAT_002e18d4;
    }
    else {
      func_00115C70(&local_48,param_1,param_2);
    }
    func_00115D70(&local_48,&local_48,param_1[6]);
    fVar6 = SQRT(local_48 * local_48 + local_44 * local_44 + fStack_40 * fStack_40);
    if (fVar5 < fVar6) {
      fVar1 = fVar6;
      if (param_6 == 0) {
        fVar1 = fVar6 - fVar2;
      }
      if (fVar5 < fVar1) {
        if (param_1[8] <= fVar1) {
          fVar1 = param_1[8];
        }
        func_00115D70(&local_48,&local_48,fVar1 / fVar6);
        func_00115C54(param_2,param_2,&local_48);
      }
      if ((param_6 == 0) && (fVar5 < fVar6 - DAT_002e18d8)) {
        fVar2 = (fVar6 - DAT_002e18d8) * DAT_002e18d8;
        if (DAT_002e18dc <= fVar2) {
          fVar2 = DAT_002e18dc;
        }
        *param_3 = *param_3 + fVar2;
      }
    }
  }
  if (param_5 != 0) {
    param_1[7] = 0.0;
    param_1[8] = fVar5;
  }
  return;
}

