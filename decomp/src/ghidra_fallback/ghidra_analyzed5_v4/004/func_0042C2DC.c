#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float DAT_0042c6dc;
extern float DAT_0042c6e0;
extern undefined4 DAT_0042c6e4;

// USA 0042C2DC <- EU 0042C2BC (Ghidra, non-matching)
// GLOBAL DAT_0042c6dc float
// GLOBAL DAT_0042c6e0 float
// GLOBAL DAT_0042c6e4 undefined4

undefined4 func_0042C2DC(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define fStack_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(undefined4 *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define fStack_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define fStack_34 (*(float *)(albw_frame + 0x5c))
  #define fStack_30 (*(float *)(albw_frame + 0x60))
  func_00115C70(&local_7c,(float *)(param_1 + 4),(float *)(param_2 + 4));
  fVar4 = DAT_0042c6e0;
  fVar5 = DAT_0042c6dc;
  local_88 = local_7c;
  local_84 = local_78;
  local_80 = local_74;
  fVar2 = *(float *)(param_1 + 0x58);
  local_44 = *(float *)(param_2 + 100);
  fVar1 = local_7c * local_7c + local_74 * local_74;
  if ((fVar2 + local_44) * (fVar2 + local_44) <= fVar1) {
    return 0;
  }
  fVar3 = fVar2 + *(float *)(param_2 + 0x68);
  if (fVar3 <= local_78) {
    return 0;
  }
  if (local_78 <= -fVar3) {
    return 0;
  }
  fVar3 = local_78;
  if (local_78 <= DAT_0042c6dc) {
    fVar3 = -local_78;
  }
  fVar3 = fVar3 - *(float *)(param_2 + 0x68);
  if ((DAT_0042c6dc < fVar3) && (fVar2 * fVar2 <= (fVar1 - local_44 * local_44) + fVar3 * fVar3)) {
    return 0;
  }
  fVar1 = SQRT(fVar1);
  if (param_3 == 0) {
    return 1;
  }
  if (local_44 <= fVar1) {
    if (DAT_0042c6dc < fVar3) {
      local_48 = *(undefined4 *)(param_2 + 0x68);
      local_4c = (local_7c / fVar1) * local_44;
      local_44 = (local_74 / fVar1) * local_44;
      fVar5 = DAT_0042c6e0;
      func_00115C54(&local_4c,&local_4c,(float *)(param_2 + 4));
      func_00115C70(&local_58,(float *)(param_1 + 4),&local_4c);
      fVar4 = SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
      func_00115D70(&local_58,&local_58,fVar5 / fVar4);
      *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 0x58) - fVar4;
      *(float *)(param_3 + 4) = local_58;
      *(float *)(param_3 + 8) = local_54;
      *(float *)(param_3 + 0xc) = local_50;
      func_00115D70(&local_40,&local_58,*(float *)(param_3 + 0x1c));
      local_74 = local_40;
      local_70 = fStack_3c;
      local_6c = local_38;
      func_00115C54(&local_40,&local_74,(float *)(param_1 + 4));
      *(float *)(param_3 + 0x10) = local_40;
      *(float *)(param_3 + 0x14) = fStack_3c;
      *(float *)(param_3 + 0x18) = local_38;
      return 1;
    }
    local_88 = local_7c / fVar1;
    local_80 = local_74 / fVar1;
    local_84 = DAT_0042c6dc;
    *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 0x58) - (fVar1 - *(float *)(param_2 + 100));
    *(float *)(param_3 + 4) = local_88;
    *(float *)(param_3 + 8) = fVar5;
    *(float *)(param_3 + 0xc) = local_80;
    func_00115D70(&local_5c,&local_88,fVar1 - *(float *)(param_2 + 100));
    local_68 = local_5c;
    local_64 = local_58;
    fStack_60 = local_54;
    func_00115C70(&local_5c,(float *)(param_1 + 4),&local_68);
    *(float *)(param_3 + 0x10) = local_5c;
    *(float *)(param_3 + 0x14) = local_58;
    *(float *)(param_3 + 0x18) = local_54;
    return 1;
  }
  if (fVar3 <= DAT_0042c6dc) {
LAB_0042c5c8:
    local_50 = *(float *)(param_1 + 0x10);
    local_4c = *(float *)(param_1 + 0x14);
    local_48 = *(undefined4 *)(param_1 + 0x18);
    func_00115C70(&local_44,(float *)(param_2 + 4),(float *)(param_2 + 0x10));
    func_00115C54(&local_50,&local_50,&local_44);
    func_00115C70(&local_5c,&local_50,(float *)(param_2 + 4));
    fVar2 = local_88 * local_5c + fVar5 * fVar5 + local_80 * local_54;
    fVar4 = fVar2;
    if (fVar5 <= fVar2) {
      fVar4 = fVar1;
    }
    local_84 = fVar5;
    local_58 = fVar5;
    if ((fVar5 <= fVar2 && fVar5 <= fVar1) && fVar4 != fVar5) {
      local_88 = local_88 / fVar1;
      local_80 = local_80 / fVar1;
      *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 0x58) - (fVar1 - *(float *)(param_2 + 100));
      *(float *)(param_3 + 4) = local_88;
      *(float *)(param_3 + 8) = fVar5;
      *(float *)(param_3 + 0xc) = local_80;
      func_00115D70(&local_38,&local_88,fVar1 - *(float *)(param_2 + 100));
      local_70 = local_38;
      local_6c = fStack_34;
      local_68 = fStack_30;
      func_00115C70(&local_38,(float *)(param_1 + 4),&local_70);
      *(float *)(param_3 + 0x10) = local_38;
      *(float *)(param_3 + 0x14) = fStack_34;
      *(float *)(param_3 + 0x18) = fStack_30;
    }
    else {
      func_00115DC8(&local_5c);
      func_00115D70(&local_38,&local_5c,*(float *)(param_2 + 100));
      local_78 = local_38;
      local_74 = fStack_34;
      local_70 = fStack_30;
      func_00115C54(&local_38,(float *)(param_2 + 4),&local_78);
      *(float *)(param_3 + 0x10) = local_38;
      *(float *)(param_3 + 0x14) = fStack_34;
      *(float *)(param_3 + 0x18) = fStack_30;
      func_00115C70(&local_6c,(float *)(param_3 + 0x10),(float *)(param_1 + 4));
      fVar4 = SQRT(local_6c * local_6c + local_68 * local_68 + local_64 * local_64);
      if (fVar4 <= fVar5) {
        func_00115DC8(&local_6c);
      }
      else {
        local_6c = local_6c / fVar4;
        local_68 = local_68 / fVar4;
        local_64 = local_64 / fVar4;
      }
      *(float *)(param_3 + 4) = local_6c;
      *(float *)(param_3 + 8) = local_68;
      *(float *)(param_3 + 0xc) = local_64;
      *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 0x58) + fVar4;
    }
  }
  else {
    *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 0x58) - fVar3;
    if (local_78 < fVar5) {
      if (*(float *)(param_1 + 0x14) <= *(float *)(param_1 + 8)) goto LAB_0042c5c8;
      *(float *)(param_3 + 4) = fVar5;
      *(undefined4 *)(param_3 + 8) = DAT_0042c6e4;
      *(float *)(param_3 + 0xc) = fVar5;
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0xc);
      fVar3 = *(float *)(param_3 + 0x14) + fVar3;
    }
    else {
      *(float *)(param_3 + 4) = fVar5;
      *(float *)(param_3 + 8) = fVar4;
      *(float *)(param_3 + 0xc) = fVar5;
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0xc);
      fVar3 = *(float *)(param_3 + 0x14) - fVar3;
    }
    *(float *)(param_3 + 0x14) = fVar3;
  }
  return 1;
}

