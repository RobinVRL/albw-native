#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_002F5CD4(int param_1,int param_2);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_0035fa00;
extern float DAT_0035fa04;
extern float DAT_0035fa08;
extern float *DAT_0035fa0c;
extern float DAT_0035fa10;
extern float DAT_0035fa14;
extern int *DAT_0035fa18;
extern int DAT_0035fa1c;
extern float DAT_0035fa20;
extern float DAT_0035fa24;

// USA 0035F7B4 <- EU 0035F790 (Ghidra, non-matching)
// GLOBAL DAT_0035fa00 float
// GLOBAL DAT_0035fa04 float
// GLOBAL DAT_0035fa08 float
// GLOBAL DAT_0035fa0c float *
// GLOBAL DAT_0035fa10 float
// GLOBAL DAT_0035fa14 float
// GLOBAL DAT_0035fa18 int *
// GLOBAL DAT_0035fa1c int
// GLOBAL DAT_0035fa20 float
// GLOBAL DAT_0035fa24 float

void func_0035F7B4(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  fVar8 = DAT_0035fa04;
  fVar9 = DAT_0035fa00;
  uVar4 = *(uint *)(param_1 + 0x488);
  uVar11 = (ulonglong)(uint)ALBW_AS_U32(DAT_0035fa04);
  if (*(uint *)(param_1 + 0x484) < uVar4) {
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x4b4);
  if (uVar1 < *(uint *)(param_1 + 0x4b8)) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0x4b4) = uVar1;
  }
  if (uVar4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x484);
  }
  fVar6 = fVar9;
  if ((uVar4 != 0 && uVar1 != 0) && (fVar6 = fVar8, uVar1 < uVar4)) {
    fVar6 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 * *(float *)(param_1 + 0x48c);
  }
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3);
  local_48[0] = *DAT_0035fa0c;
  local_48[1] = DAT_0035fa0c[1];
  local_48[2] = DAT_0035fa0c[2];
  local_48[3] = DAT_0035fa0c[3];
  if (DAT_0035fa08 < fVar7) {
    fVar7 = DAT_0035fa08;
  }
  fVar8 = func_003E19E8(fVar8,DAT_0035fa10,local_48[(int)fVar7],fVar9,fVar6);
  func_00520FC0();
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),
                *(float *)(param_1 + 0x514) * fVar8);
  fVar6 = ALBW_AS_F32(uVar11);
  fVar8 = DAT_0035fa14;
  if (*(char *)(param_1 + 0x512) != '\0') {
    iVar2 = func_0052FBA0(*DAT_0035fa18 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    fVar6 = ALBW_AS_F32(uVar11);
    iVar3 = 0;
    if (iVar2 == 0) {
LAB_0035f8e0:
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x410) == '\x01')) {
        func_004D80A4(&local_34,*(uint *)(param_1 + 1000),fVar6);
        func_00115C70(local_48,(float *)(iVar3 + 0x3d0),(float *)(param_1 + 0x3d0));
        fVar7 = local_48[0] * local_34 + local_48[1] * local_30 + local_48[2] * local_2c;
        if ((fVar9 < fVar7) && ((int)ALBW_AS_U32(fVar7) < DAT_0035fa1c)) {
          func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),
                        (fVar8 * (fVar7 - fVar9)) / DAT_0035fa20 + fVar8);
        }
      }
    }
    else {
      iVar5 = 0;
      do {
        iVar3 = func_002F5CD4(iVar2,iVar5);
        fVar6 = ALBW_AS_F32(uVar11);
        if (iVar3 != 0 && iVar3 != param_1) goto LAB_0035f8e0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
  }
  fVar7 = *(float *)(param_1 + 0x4e4) - *(float *)(param_1 + 0x3d0);
  fVar10 = *(float *)(param_1 + 0x4ec) - *(float *)(param_1 + 0x3d8);
  fVar7 = SQRT(fVar7 * fVar7 + fVar10 * fVar10);
  if (fVar9 < fVar7) {
    fVar7 = fVar7 * DAT_0035fa24;
    if (fVar6 < fVar7) {
      fVar7 = fVar6;
    }
    fVar9 = func_003E19E8(fVar9,fVar8,fVar6,fVar9,fVar7);
    *(float *)(param_1 + 0x3d4) =
         *(float *)(param_1 + 0x520) +
         (*(float *)(param_1 + 0x51c) - *(float *)(param_1 + 0x520)) * fVar9;
  }
  return;
}

