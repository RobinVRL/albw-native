#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_002F5CD4(int param_1,int param_2);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0035f5b0;
extern float DAT_0035f5b4;
extern float DAT_0035f5b8;
extern float DAT_0035f5bc;
extern int DAT_0035f5c0;
extern float DAT_0035f5c4;
extern float DAT_0035f5c8;
extern int DAT_0035f5cc;
extern float DAT_0035f5d0;
extern float DAT_0035f5d4;

// USA 0035F330 <- EU 0035F30C (Ghidra, non-matching)
// GLOBAL DAT_0035f5b0 int *
// GLOBAL DAT_0035f5b4 float
// GLOBAL DAT_0035f5b8 float
// GLOBAL DAT_0035f5bc float
// GLOBAL DAT_0035f5c0 int
// GLOBAL DAT_0035f5c4 float
// GLOBAL DAT_0035f5c8 float
// GLOBAL DAT_0035f5cc int
// GLOBAL DAT_0035f5d0 float
// GLOBAL DAT_0035f5d4 float

void func_0035F330(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  piVar1 = DAT_0035f5b0;
  func_0052FBA0(*DAT_0035f5b0 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  iVar6 = 0;
  func_00520FC0();
  fVar10 = DAT_0035f5b8;
  fVar9 = DAT_0035f5b4;
  uVar4 = *(uint *)(param_1 + 0x488);
  uVar11 = CONCAT44(DAT_0035f5b8,DAT_0035f5b4);
  if (*(uint *)(param_1 + 0x484) < uVar4) {
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x4b4);
  if (uVar2 < *(uint *)(param_1 + 0x4b8)) {
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0x4b4) = uVar2;
  }
  if (uVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x484);
  }
  fVar7 = fVar9;
  if ((uVar4 != 0 && uVar2 != 0) && (fVar7 = fVar10, uVar2 < uVar4)) {
    fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 * *(float *)(param_1 + 0x48c);
  }
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3);
  local_48[0] = *(float *)(DAT_0035f5c0 + 0xe4);
  local_48[1] = *(float *)(DAT_0035f5c0 + 0xe8);
  local_48[2] = *(float *)(DAT_0035f5c0 + 0xec);
  local_48[3] = ALBW_AS_F32(*(undefined4 *)(DAT_0035f5c0 + 0xf0));
  if (DAT_0035f5bc < fVar8) {
    fVar8 = DAT_0035f5bc;
  }
  fVar9 = func_003E19E8(fVar10,DAT_0035f5c4,local_48[(int)fVar8],fVar9,fVar7);
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),
                *(float *)(param_1 + 0x514) * fVar9);
  uVar12 = (ulonglong)(uint)ALBW_AS_U32(DAT_0035f5c8);
  fVar9 = DAT_0035f5c8;
  if (*(char *)(param_1 + 0x512) != '\0') {
    iVar3 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    fVar9 = ALBW_AS_F32(uVar12);
    if (iVar3 == 0) {
LAB_0035f478:
      if ((iVar6 != 0) && (*(char *)(iVar6 + 0x410) == '\x02')) {
        func_004D80A4(&local_34,*(uint *)(param_1 + 1000),ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)));
        func_00115C70(local_48,(float *)(iVar6 + 0x3d0),(float *)(param_1 + 0x3d0));
        fVar10 = local_48[0] * local_34 + local_48[1] * local_30 + local_48[2] * local_2c;
        if ((ALBW_AS_F32(uVar11) < fVar10) && ((int)ALBW_AS_U32(fVar10) < DAT_0035f5cc)) {
          func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),
                        (fVar9 * (fVar10 - ALBW_AS_F32(uVar11))) / DAT_0035f5d0 + fVar9);
        }
      }
    }
    else {
      iVar5 = 0;
      do {
        iVar6 = func_002F5CD4(iVar3,iVar5);
        fVar9 = ALBW_AS_F32(uVar12);
        if (iVar6 != 0 && iVar6 != param_1) goto LAB_0035f478;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
  }
  fVar7 = *(float *)(param_1 + 0x4e4) - *(float *)(param_1 + 0x3d0);
  fVar10 = *(float *)(param_1 + 0x4ec) - *(float *)(param_1 + 0x3d8);
  fVar10 = SQRT(fVar7 * fVar7 + fVar10 * fVar10);
  fVar7 = ALBW_AS_F32(uVar11);
  if (fVar7 < fVar10) {
    fVar8 = ALBW_AS_F32(((ulonglong)uVar11 >> 0x20));
    fVar10 = fVar10 * DAT_0035f5d4;
    if (fVar8 < fVar10) {
      fVar10 = fVar8;
    }
    fVar9 = func_003E19E8(fVar7,fVar9,fVar8,fVar7,fVar10);
    *(float *)(param_1 + 0x3d4) =
         *(float *)(param_1 + 0x520) +
         (*(float *)(param_1 + 0x518) - *(float *)(param_1 + 0x520)) * fVar9;
  }
  return;
}

