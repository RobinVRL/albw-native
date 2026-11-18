#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00437874(float *param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern float DAT_002e77d4;
extern int *DAT_002e77d8;
extern float DAT_002e77dc;
extern float *DAT_002e77e0;
extern float DAT_002e77e4;
extern float DAT_002e77e8;
extern float DAT_002e77ec;
extern float DAT_002e77f0;
extern float DAT_002e77f4;

// USA 002E74DC <- EU 002E74B8 (Ghidra, non-matching)
// GLOBAL DAT_002e77d4 float
// GLOBAL DAT_002e77d8 int *
// GLOBAL DAT_002e77dc float
// GLOBAL DAT_002e77e0 float *
// GLOBAL DAT_002e77e4 float
// GLOBAL DAT_002e77e8 float
// GLOBAL DAT_002e77ec float
// GLOBAL DAT_002e77f0 float
// GLOBAL DAT_002e77f4 float

undefined4 func_002E74DC(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define fStack_70 (*(float *)(albw_frame + 0x30))
  #define fStack_6c (*(float *)(albw_frame + 0x34))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define fStack_50 (*(float *)(albw_frame + 0x50))
  #define fStack_4c (*(float *)(albw_frame + 0x54))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define fStack_34 (*(float *)(albw_frame + 0x6c))
  #define fStack_30 (*(float *)(albw_frame + 0x70))
  pfVar1 = (float *)func_00520FC0();
  local_44 = *pfVar1;
  fStack_40 = pfVar1[1];
  local_3c = pfVar1[2];
  if (*DAT_002e77d8 == 0) {
    local_98 = DAT_002e77d4;
    local_90 = DAT_002e77d4;
  }
  else {
    pfVar1 = *(float **)(*DAT_002e77d8 + 0x20);
    local_98 = *pfVar1;
    local_90 = pfVar1[2];
  }
  local_94 = DAT_002e77d4;
  fVar3 = DAT_002e77d4;
  func_00115DAC(&local_44,&local_98,&local_44,DAT_002e77dc);
  pfVar1 = DAT_002e77e0;
  local_80 = *(float *)(param_1 + 0xbcc);
  uStack_7c = *(undefined4 *)(param_1 + 0xbd0);
  local_78 = *(float *)(param_1 + 0xbd4);
  local_74 = *(float *)(param_1 + 0x3d0);
  fStack_70 = *(float *)(param_1 + 0x3d4);
  fStack_6c = *(float *)(param_1 + 0x3d8);
  local_54 = *DAT_002e77e0;
  fStack_50 = DAT_002e77e0[1];
  fStack_4c = DAT_002e77e0[2];
  fparam_0 = DAT_002e77e4;
  func_00115C70(&local_90,&local_44,&local_80);
  fVar4 = local_90 * local_90 + fVar3 * fVar3 + local_88 * local_88;
  local_8c = fVar3;
  fVar2 = func_00115DC8(&local_90);
  if (0x34000000 < (int)ALBW_AS_U32(fVar2)) {
    local_38 = local_90;
    fStack_34 = local_8c;
    fStack_30 = local_88;
    local_68 = *pfVar1;
    local_64 = pfVar1[1];
    local_60 = pfVar1[2];
    fVar2 = ((DAT_002e77e8 + fVar4) * DAT_002e77ec) / fVar2;
    fVar4 = DAT_002e77f0;
    func_0068A3EC(&local_38,fVar2);
    fVar4 = fVar4 - fVar2 * fVar2;
    if (fVar3 <= fVar4) {
      local_68 = local_88;
      local_64 = fVar3;
      local_60 = -local_90;
      func_00115D70(&local_68,&local_68,SQRT(fVar4));
    }
    local_74 = local_38;
    fStack_70 = fStack_34;
    fStack_6c = fStack_30;
    func_00115C54(&local_74,&local_74,&local_80);
    local_54 = local_68;
    fStack_50 = local_64;
    fStack_4c = local_60;
    local_98 = local_74;
    local_94 = fStack_70;
    local_90 = fStack_6c;
    local_8c = local_74;
    local_88 = fStack_70;
    local_84 = fStack_6c;
    func_00115C54(&local_98,&local_98,&local_54);
    func_00115C70(&local_8c,&local_8c,&local_54);
    func_00115C70(&local_64,&local_98,&local_44);
    local_60 = fVar3;
    if (SQRT(local_64 * local_64 + local_5c * local_5c) < fparam_0) {
      func_0068A3EC(&local_64,fparam_0);
      func_00115C54(&local_98,&local_64,&local_44);
    }
    fVar2 = DAT_002e77f4;
    func_00437874(&local_98,(float *)(param_1 + 0xe30),DAT_002e77f4);
    func_00115C70(&local_60,&local_8c,&local_44);
    local_5c = fVar3;
    if (SQRT(local_60 * local_60 + local_58 * local_58) < fparam_0) {
      func_0068A3EC(&local_60,fparam_0);
      func_00115C54(&local_8c,&local_60,&local_44);
    }
    func_00437874(&local_8c,(float *)(param_1 + 0xe30),fVar2);
    if ((local_98 - local_80) * (local_98 - local_80) +
        (local_90 - local_78) * (local_90 - local_78) <=
        (local_8c - local_80) * (local_8c - local_80) +
        (local_84 - local_78) * (local_84 - local_78)) {
      local_98 = local_8c;
      local_94 = local_88;
      local_90 = local_84;
    }
    *param_2 = local_98;
    param_2[1] = local_94;
    param_2[2] = local_90;
  }
  return 1;
}

