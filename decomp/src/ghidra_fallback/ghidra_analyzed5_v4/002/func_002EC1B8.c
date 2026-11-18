#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_002F5CD4(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_002ec598;
extern float DAT_002ec59c;
extern float DAT_002ec5a0;
extern float DAT_002ec5a4;
extern int *DAT_002ec5a8;
extern float DAT_002ec5ac;
extern int DAT_002ec5b0;
extern float DAT_002ec5b4;
extern float DAT_002ec5b8;
extern int DAT_002ec5bc;
extern float DAT_002ec5c0;
extern float DAT_002ec5c4;
extern int DAT_002ec5c8;
extern float DAT_002ec5cc;
extern float DAT_002ec5d0;
extern float DAT_002ec5d4;
extern float DAT_002ec5d8;
extern int DAT_002ec5dc;
extern float DAT_002ec5e0;
extern int DAT_002ec5e4;
extern float DAT_002ec5e8;
extern float DAT_002ec5ec;
extern float DAT_002ec5f0;
extern int DAT_002ec5f4;
extern int DAT_002ec5f8;
extern float DAT_002ec5fc;
extern float DAT_002ec600;
extern int DAT_002ec604;
extern float DAT_002ec608;
extern float DAT_002ec60c;
extern float DAT_002ec610;
extern float DAT_002ec614;
extern float DAT_002ec618;
extern float DAT_002ec61c;
extern int DAT_002ec6d0;
extern int DAT_002ec6d4;
extern float DAT_002ec6d8;

// USA 002EC1B8 <- EU 002EC194 (Ghidra, non-matching)
// GLOBAL DAT_002ec598 float
// GLOBAL DAT_002ec59c float
// GLOBAL DAT_002ec5a0 float
// GLOBAL DAT_002ec5a4 float
// GLOBAL DAT_002ec5a8 int *
// GLOBAL DAT_002ec5ac float
// GLOBAL DAT_002ec5b0 int
// GLOBAL DAT_002ec5b4 float
// GLOBAL DAT_002ec5b8 float
// GLOBAL DAT_002ec5bc int
// GLOBAL DAT_002ec5c0 float
// GLOBAL DAT_002ec5c4 float
// GLOBAL DAT_002ec5c8 int
// GLOBAL DAT_002ec5cc float
// GLOBAL DAT_002ec5d0 float
// GLOBAL DAT_002ec5d4 float
// GLOBAL DAT_002ec5d8 float
// GLOBAL DAT_002ec5dc int
// GLOBAL DAT_002ec5e0 float
// GLOBAL DAT_002ec5e4 int
// GLOBAL DAT_002ec5e8 float
// GLOBAL DAT_002ec5ec float
// GLOBAL DAT_002ec5f0 float
// GLOBAL DAT_002ec5f4 int
// GLOBAL DAT_002ec5f8 int
// GLOBAL DAT_002ec5fc float
// GLOBAL DAT_002ec600 float
// GLOBAL DAT_002ec604 int
// GLOBAL DAT_002ec608 float
// GLOBAL DAT_002ec60c float
// GLOBAL DAT_002ec610 float
// GLOBAL DAT_002ec614 float
// GLOBAL DAT_002ec618 float
// GLOBAL DAT_002ec61c float
// GLOBAL DAT_002ec6d0 int
// GLOBAL DAT_002ec6d4 int
// GLOBAL DAT_002ec6d8 float

void func_002EC1B8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define local_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_40 (*(float *)(albw_frame + 0x40))
  iVar1 = func_002F5CD4(param_1,0);
  fparam_0 = DAT_002ec5a4;
  fVar7 = DAT_002ec5a0;
  fVar8 = DAT_002ec59c;
  *(undefined1 *)(param_1 + 0xd43) = 1;
  func_0068C794((float *)(param_1 + 0xd50),fparam_0,fVar7,fVar8,DAT_002ec598);
  iVar4 = DAT_002ec5b0;
  fVar11 = DAT_002ec5ac;
  uVar2 = *DAT_002ec5a8 + *(int *)(param_1 + 0xc8c);
  *(uint *)(param_1 + 0xc8c) = uVar2;
  pfVar3 = (float *)(iVar4 + (uVar2 >> 0x18) * 0x10);
  fVar5 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xd4c) +
          (*pfVar3 + pfVar3[1] * fVar5 * fVar11) * DAT_002ec5b4;
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&local_54,pfVar3,(float *)(param_1 + 0x3d0));
  iVar4 = *(int *)(param_1 + 1000);
  fVar10 = SQRT(local_54 * local_54 + local_4c * local_4c);
  fVar11 = DAT_002ec5b8;
  local_50 = fVar8;
  if (fVar8 < fVar10) {
    iVar4 = func_0068C690(&local_54);
    if (DAT_002ec5bc < (int)ALBW_AS_U32(local_54)) {
      fVar6 = local_54 - DAT_002ec5c0;
    }
    else {
      fVar6 = fVar8;
      if ((uint)ALBW_AS_U32(DAT_002ec5c4) < (uint)ALBW_AS_U32(local_54)) {
        fVar6 = local_54 + DAT_002ec5c0;
      }
    }
    fVar9 = SQRT(fVar6 * fVar6 + local_4c * local_4c);
    fVar6 = fVar8;
    if ((DAT_002ec5c8 < (int)ALBW_AS_U32(fVar9)) && (fVar6 = DAT_002ec5cc, (int)ALBW_AS_U32(fVar9) < DAT_002ec5c8 + 0xa00000))
    {
      fVar6 = (fVar9 - DAT_002ec5d0) * DAT_002ec5d4 * DAT_002ec5cc;
    }
    func_0068C794((float *)(param_1 + 0xc08),fVar6,fVar7,fVar8,DAT_002ec5d8);
    local_6c = local_54;
    local_68 = local_50;
    local_64 = local_4c;
    func_00115DC8(&local_6c);
    fVar6 = DAT_002ec5e0;
    if (((int)ALBW_AS_U32(fVar10) < DAT_002ec5dc) ||
       (fVar6 = DAT_002ec5e8, fVar9 = fVar8, DAT_002ec5e4 < (int)ALBW_AS_U32(fVar10))) {
      fVar9 = fVar6 - fVar10;
    }
    fVar9 = fVar9 * fVar11;
    fVar10 = DAT_002ec5f0;
    if (((uint)ALBW_AS_U32(fVar9) <= (uint)ALBW_AS_U32(DAT_002ec5ec)) && (fVar10 = fVar9, DAT_002ec5f4 < (int)ALBW_AS_U32(fVar9))) {
      fVar10 = fVar7;
    }
    fVar10 = *(float *)(param_1 + 0xd50) * fVar10;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) - local_6c * fVar10;
    *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x3e4) - local_64 * fVar10;
    func_00115C70(&local_78,(float *)(param_1 + 0xe30),(float *)(param_1 + 0x3d0));
    fVar7 = local_78 * local_78 + local_70 * local_70;
    if (DAT_002ec5f8 < (int)ALBW_AS_U32(fVar7)) {
      fVar7 = SQRT(fVar7);
      func_00115D70(&local_78,&local_78,((fVar7 - DAT_002ec5fc) * DAT_002ec600) / fVar7);
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) + local_78;
      *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x3e4) + local_70;
    }
    if (param_2 != 0) {
      if (local_54 <= fVar8) {
        local_54 = -local_54;
      }
      if ((int)ALBW_AS_U32(local_54) < DAT_002ec604) {
        fVar7 = (DAT_002ec608 - local_54) * DAT_002ec60c * DAT_002ec610;
        if (fVar8 < local_6c) {
          fVar7 = *(float *)(param_1 + 0x3dc) - fVar7;
        }
        else {
          fVar7 = *(float *)(param_1 + 0x3dc) + fVar7;
        }
        *(float *)(param_1 + 0x3dc) = fVar7;
      }
    }
    fVar7 = DAT_002ec618;
    fVar10 = *(float *)(param_1 + 0x3e4) * DAT_002ec618;
    fVar5 = (*(float *)(param_1 + 0x3d4) - fVar5) * DAT_002ec614;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_002ec618;
    *(float *)(param_1 + 0x3e4) = fVar10;
    *(float *)(param_1 + 0x3e0) = (*(float *)(param_1 + 0x3e0) - fVar5) * fVar7;
  }
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x410) == '\x02')) {
    local_6c = *(float *)(iVar1 + 0x3dc);
    local_68 = *(float *)(iVar1 + 0x3e0);
    local_64 = *(float *)(iVar1 + 0x3e4);
    func_00115C70(&local_78,(float *)(iVar1 + 0x3d0),(float *)(param_1 + 0x3d0));
    func_004D80A4(&local_60,*(uint *)(param_1 + 1000),fparam_0);
    fVar5 = local_78 * local_60 + local_74 * fVar8 + local_70 * local_58;
    local_5c = fVar8;
    func_00115DC8(&local_6c);
    func_00115DAC(&local_78,&local_6c,&local_78,
                  -(local_78 * local_6c + local_74 * local_68) + -(local_70 * local_64));
    fVar7 = fVar8;
    if ((fVar8 < fVar5) && (fVar7 = fparam_0, fVar5 < DAT_002ec61c)) {
      fVar7 = (fparam_0 * (fVar5 - fVar8)) / DAT_002ec61c + fVar8;
    }
    local_74 = fVar8;
    if ((int)ALBW_AS_U32(SQRT(local_78 * local_78 + fVar8 * fVar8 + local_70 * local_70)) < DAT_002ec6d0) {
      local_48 = local_78;
      local_40 = local_70;
      local_44 = fVar8;
      func_00115D70(&local_48,&local_48,fVar7 * fVar11);
      func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_48);
    }
  }
  fVar8 = DAT_002ec6d8;
  func_0051D2F4((int *)(param_1 + 1000),iVar4,0,DAT_002ec6d4,DAT_002ec6d8);
  if (*(char *)(param_1 + 0xd3d) != '\0') {
    *(undefined1 *)(param_1 + 0xd3d) = 0;
    func_006640EC((undefined4 *)(param_1 + 0x8c8),10,fVar8);
  }
  return;
}

