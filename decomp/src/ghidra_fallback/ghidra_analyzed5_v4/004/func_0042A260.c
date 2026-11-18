#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0042BD5C(int param_1,float *param_2,float *param_3,int param_4,float fparam_0,float fparam_1);
extern float DAT_0042a55c;
extern float DAT_0042a560;
extern float DAT_0042a564;
extern float DAT_0042a568;
extern float *DAT_0042a56c;
extern float *DAT_0042a9c8;
extern float *DAT_0042a9cc;

// USA 0042A260 <- EU 0042A240 (Ghidra, non-matching)
// GLOBAL DAT_0042a55c float
// GLOBAL DAT_0042a560 float
// GLOBAL DAT_0042a564 float
// GLOBAL DAT_0042a568 float
// GLOBAL DAT_0042a56c float *
// GLOBAL DAT_0042a9c8 float *
// GLOBAL DAT_0042a9cc float *

undefined4 func_0042A260(int param_1,int param_2,int param_3)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(float *)(albw_frame + 0x0))
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define local_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define fStack_7c (*(float *)(albw_frame + 0x44))
  #define fStack_78 (*(float *)(albw_frame + 0x48))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define fStack_54 (*(float *)(albw_frame + 0x6c))
  #define fStack_50 (*(float *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(float *)(albw_frame + 0x80))
  #define local_3c (*(float *)(albw_frame + 0x84))
  #define local_38 (*(float *)(albw_frame + 0x88))
  func_00115C70(&local_c0,(float *)(param_1 + 4),(float *)(param_2 + 4));
  pfVar2 = (float *)(param_2 + 100);
  fVar10 = *(float *)(param_1 + 0x58);
  fVar7 = local_c0;
  fVar3 = local_bc;
  fVar11 = local_b8;
  func_00115D70(&local_70,(float *)(param_2 + 0x58),DAT_0042a55c);
  fVar8 = *pfVar2 * fVar7 + *(float *)(param_2 + 0x70) * fVar3 + *(float *)(param_2 + 0x7c) * fVar11
  ;
  if ((local_70 + fVar10 <= fVar8) || (fVar8 <= -(local_70 + fVar10))) {
    return 0;
  }
  fVar9 = *(float *)(param_2 + 0x68) * fVar7 + *(float *)(param_2 + 0x74) * fVar3 +
          *(float *)(param_2 + 0x80) * fVar11;
  if (local_6c + fVar10 <= fVar9) {
    return 0;
  }
  if (fVar9 <= -(local_6c + fVar10)) {
    return 0;
  }
  fVar7 = *(float *)(param_2 + 0x6c) * fVar7 + *(float *)(param_2 + 0x78) * fVar3 +
          *(float *)(param_2 + 0x84) * fVar11;
  if (local_68 + fVar10 <= fVar7) {
    return 0;
  }
  if (fVar7 <= -(local_68 + fVar10)) {
    return 0;
  }
  if (local_70 < fVar8) {
    local_8c = fVar8 - local_70;
  }
  else if (fVar8 < -local_70) {
    local_8c = local_70 + fVar8;
  }
  else {
    local_8c = DAT_0042a560;
  }
  if (local_6c < fVar9) {
    local_88 = fVar9 - local_6c;
  }
  else if (fVar9 < -local_6c) {
    local_88 = local_6c + fVar9;
  }
  else {
    local_88 = DAT_0042a560;
  }
  if (local_68 < fVar7) {
    local_84 = fVar7 - local_68;
  }
  else if (fVar7 < -local_68) {
    local_84 = local_68 + fVar7;
  }
  else {
    local_84 = DAT_0042a560;
  }
  fVar3 = local_8c * local_8c + local_88 * local_88 + local_84 * local_84;
  if (fVar10 * fVar10 <= fVar3) {
    return 0;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (DAT_0042a560 < fVar3) {
    fVar7 = DAT_0042a564 / SQRT(fVar3);
    *(float *)(param_3 + 0x1c) = fVar10 - SQRT(fVar3);
    func_00115D70(&local_b8,&local_8c,fVar7);
    local_9c = local_b8;
    local_98 = local_b4;
    local_94 = local_b0;
    func_00115CE4((float *)(param_3 + 4),pfVar2,&local_9c);
    func_00115D70(&local_b0,(float *)(param_3 + 4),*(float *)(param_1 + 0x58));
    local_80 = local_b0;
    fStack_7c = local_ac;
    fStack_78 = local_a8;
    func_00115C70(&local_b0,(float *)(param_1 + 4),&local_80);
    *(float *)(param_3 + 0x10) = local_b0;
    *(float *)(param_3 + 0x14) = local_ac;
    *(float *)(param_3 + 0x18) = local_a8;
    return 1;
  }
  fVar3 = DAT_0042a560;
  fVar11 = DAT_0042a564;
  func_00115C70(&local_b0,(float *)(param_2 + 4),(float *)(param_2 + 0x10));
  local_58 = local_b0;
  fStack_54 = local_ac;
  fStack_50 = local_a8;
  local_64 = *(float *)(param_1 + 0x10);
  uStack_60 = *(undefined4 *)(param_1 + 0x14);
  uStack_5c = *(undefined4 *)(param_1 + 0x18);
  func_00115C54(&local_64,&local_64,&local_58);
  func_00115C70(&local_b0,(float *)(param_1 + 4),&local_64);
  local_98 = local_b0;
  local_94 = local_ac;
  local_90 = local_a8;
  fVar12 = SQRT(local_b0 * local_b0 + local_ac * local_ac + local_a8 * local_a8);
  if (fVar3 < fVar12) {
    local_98 = local_b0 / fVar12;
    local_94 = local_ac / fVar12;
    local_90 = local_a8 / fVar12;
    local_4c = local_64;
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    fVar4 = DAT_0042a568;
    local_40 = local_98;
    local_3c = local_94;
    local_38 = local_90;
    func_00115D70(&local_40,&local_40,*(float *)(param_1 + 0x58));
    func_00115C70(&local_4c,&local_4c,&local_40);
    cVar1 = func_0042BD5C(param_2,&local_4c,&local_98,param_3,*(float *)(param_1 + 0x58) + fVar12,
                          *(float *)(param_1 + 0x58));
    if (cVar1 != '\0') {
      func_00115C70(&local_c0,(float *)(param_3 + 0x10),(float *)(param_1 + 4));
      *(float *)(param_3 + 0x1c) =
           *(float *)(param_1 + 0x58) +
           local_c0 * *(float *)(param_3 + 4) + local_bc * *(float *)(param_3 + 8) +
           local_b8 * *(float *)(param_3 + 0xc);
      return 1;
    }
    fVar12 = fVar8;
    if (fVar8 <= fVar3) {
      fVar12 = -fVar8;
    }
    fVar5 = fVar9;
    if (fVar9 <= fVar3) {
      fVar5 = -fVar9;
    }
    fVar6 = fVar7;
    if (fVar7 <= fVar3) {
      fVar6 = -fVar7;
    }
    if (fVar12 / local_70 <= fVar5 / local_6c) {
      if (fVar6 / local_68 < fVar5 / local_6c) {
        if (fVar9 < fVar3) {
          fVar11 = fVar4;
        }
        func_00115D70(&local_c0,DAT_0042a9cc,fVar11);
        local_8c = local_c0;
        local_88 = local_bc;
        local_84 = local_b8;
        if (fVar9 <= fVar3) {
          fVar9 = -fVar9;
        }
        local_70 = local_6c - fVar9;
        goto LAB_0042a8c8;
      }
      if (fVar7 < fVar3) {
        fVar11 = fVar4;
      }
      func_00115D70(&local_b4,DAT_0042a9c8,fVar11);
      local_84 = local_ac;
      local_8c = local_b4;
      local_88 = local_b0;
      if (fVar7 <= fVar3) goto LAB_0042a834;
    }
    else {
      if (fVar6 / local_68 < fVar12 / local_70) {
        if (fVar8 < fVar3) {
          fVar11 = fVar4;
        }
        func_00115D70(&local_b8,DAT_0042a56c,fVar11);
        local_8c = local_b8;
        local_88 = local_b4;
        local_84 = local_b0;
        if (fVar8 <= fVar3) {
          fVar8 = -fVar8;
        }
        local_70 = local_70 - fVar8;
        goto LAB_0042a8c8;
      }
      if (fVar7 < fVar3) {
        fVar11 = fVar4;
      }
      func_00115D70(&local_b4,DAT_0042a9c8,fVar11);
      local_8c = local_b4;
      local_88 = local_b0;
      local_84 = local_ac;
      if (fVar7 <= fVar3) {
LAB_0042a834:
        fVar7 = -fVar7;
        local_8c = local_b4;
        local_88 = local_b0;
      }
    }
    local_70 = local_68 - fVar7;
    local_b4 = local_8c;
    local_b0 = local_88;
LAB_0042a8c8:
    *(float *)(param_3 + 0x1c) = fVar10 + local_70;
    func_00115CE4((float *)(param_3 + 4),pfVar2,&local_8c);
    func_00115D70(&local_b8,(float *)(param_3 + 4),*(float *)(param_1 + 0x58));
    local_80 = local_b8;
    fStack_7c = local_b4;
    fStack_78 = local_b0;
    func_00115C70(&local_b8,(float *)(param_1 + 4),&local_80);
    *(float *)(param_3 + 0x10) = local_b8;
    *(float *)(param_3 + 0x14) = local_b4;
    *(float *)(param_3 + 0x18) = local_b0;
    return 1;
  }
  fVar12 = fVar8;
  if (fVar8 <= fVar3) {
    fVar12 = -fVar8;
  }
  fVar4 = fVar9;
  if (fVar9 <= fVar3) {
    fVar4 = -fVar9;
  }
  fVar5 = fVar7;
  if (fVar7 <= fVar3) {
    fVar5 = -fVar7;
  }
  if (fVar12 / local_70 <= fVar4 / local_6c) {
    if (fVar5 / local_68 < fVar4 / local_6c) {
      if (fVar9 < fVar3) {
        fVar11 = DAT_0042a568;
      }
      func_00115D70(&local_c0,DAT_0042a9cc,fVar11);
      local_8c = local_c0;
      local_88 = local_bc;
      local_84 = local_b8;
      if (fVar9 <= fVar3) {
        fVar9 = -fVar9;
      }
      local_70 = local_6c - fVar9;
      goto LAB_0042a63c;
    }
    if (fVar7 < fVar3) {
      fVar11 = DAT_0042a568;
    }
    func_00115D70(&local_80,DAT_0042a9c8,fVar11);
    local_8c = local_80;
    local_88 = fStack_7c;
    local_84 = fStack_78;
    if (fVar7 <= fVar3) goto LAB_0042a5a8;
  }
  else {
    if (fVar5 / local_68 < fVar12 / local_70) {
      if (fVar8 < fVar3) {
        fVar11 = DAT_0042a568;
      }
      func_00115D70(&local_80,DAT_0042a56c,fVar11);
      local_8c = local_80;
      local_88 = fStack_7c;
      local_84 = fStack_78;
      if (fVar8 <= fVar3) {
        fVar8 = -fVar8;
      }
      local_70 = local_70 - fVar8;
      goto LAB_0042a63c;
    }
    if (fVar7 < fVar3) {
      fVar11 = DAT_0042a568;
    }
    func_00115D70(&local_80,DAT_0042a9c8,fVar11);
    local_8c = local_80;
    local_88 = fStack_7c;
    local_84 = fStack_78;
    if (fVar7 <= fVar3) {
LAB_0042a5a8:
      fVar7 = -fVar7;
    }
  }
  local_70 = local_68 - fVar7;
LAB_0042a63c:
  *(float *)(param_3 + 0x1c) = fVar10 + local_70;
  func_00115CE4((float *)(param_3 + 4),pfVar2,&local_8c);
  func_00115D70(&local_a4,(float *)(param_3 + 4),*(float *)(param_1 + 0x58));
  local_b0 = local_a4;
  local_ac = ALBW_AS_F32(uStack_a0);
  local_a8 = local_9c;
  func_00115C70(&local_a4,(float *)(param_1 + 4),&local_b0);
  *(float *)(param_3 + 0x10) = local_a4;
  *(undefined4 *)(param_3 + 0x14) = uStack_a0;
  *(float *)(param_3 + 0x18) = local_9c;
  return 1;
}

