#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_002f3660;
extern float DAT_002f3664;
extern float DAT_002f3668;
extern float DAT_002f366c;
extern float DAT_002f3670;
extern float DAT_002f3674;
extern float DAT_002f3678;
extern float DAT_002f367c;
extern int *DAT_002f3680;
extern float DAT_002f3684;
extern float DAT_002f3688;
extern int *DAT_002f368c;

// USA 002F3468 <- EU 002F3444 (Ghidra, non-matching)
// GLOBAL DAT_002f3660 int *
// GLOBAL DAT_002f3664 float
// GLOBAL DAT_002f3668 float
// GLOBAL DAT_002f366c float
// GLOBAL DAT_002f3670 float
// GLOBAL DAT_002f3674 float
// GLOBAL DAT_002f3678 float
// GLOBAL DAT_002f367c float
// GLOBAL DAT_002f3680 int *
// GLOBAL DAT_002f3684 float
// GLOBAL DAT_002f3688 float
// GLOBAL DAT_002f368c int *

int func_002F3468(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint extraout_r1;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c ((float *)(albw_frame + 0x4))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 ((float *)(albw_frame + 0x10))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  if (*DAT_002f3660 == 0) {
    iVar2 = *(int *)(param_1 + 0xe24);
  }
  else {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(local_4c,pfVar3,(float *)(param_1 + 0xe30));
    fVar12 = SQRT(local_4c[0] * local_4c[0] + local_44 * local_44);
    func_00115C70(local_40,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
    func_0068C690(local_40);
    if (param_2 == 0) {
      uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 == DAT_002f366c) << 0x1e |
              (uint)(DAT_002f366c <= fVar12) << 0x1d;
      bVar1 = (byte)(uVar7 >> 0x18);
      fVar11 = DAT_002f3664;
      if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
         (uVar8 = in_fpscr & 0xfffffff | (uint)(fVar12 < DAT_002f3670) << 0x1f,
         uVar7 = uVar8 | (uint)(NAN(fVar12) || NAN(DAT_002f3670)) << 0x1c, fVar11 = DAT_002f3668,
         (byte)(uVar8 >> 0x1f) != ((byte)(uVar7 >> 0x1c) & 1))) {
        fVar11 = (DAT_002f3668 * (fVar12 - DAT_002f366c)) / DAT_002f3674 + DAT_002f3664;
      }
      fVar12 = DAT_002f3664;
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(afStack_38,pfVar3,(float *)(param_1 + 0xe30));
      iVar2 = func_0068C690(afStack_38);
      iVar2 = iVar2 - *(int *)(param_1 + 0xe24);
      iVar4 = *(int *)(param_1 + 0xe28) - *(int *)(param_1 + 0xe24);
      fVar9 = (float)VectorUnsignedToFloat(iVar2,(byte)(uVar7 >> 0x15) & 3);
      local_40[0] = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar7 >> 0x15) & 3);
      fVar9 = fVar9 * DAT_002f3678;
      if (iVar2 < 0) {
        fVar9 = fVar9 - DAT_002f367c;
      }
      if (iVar4 < 0) {
        local_40[0] = local_40[0] * DAT_002f3678 - DAT_002f367c;
      }
      else {
        local_40[0] = local_40[0] * DAT_002f3678;
      }
      uVar8 = uVar7 & 0xfffffff | (uint)(fVar12 <= fVar9 * local_40[0]) << 0x1d;
      if (!SUB41(uVar8 >> 0x1d,0)) {
        uVar8 = uVar7 & 0xfffffff | (uint)(fVar9 < fVar12) << 0x1f | (uint)(fVar9 == fVar12) << 0x1e
        ;
        bVar1 = (byte)(uVar8 >> 0x18);
        if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar9) || NAN(fVar12))) {
          fVar9 = fVar9 + DAT_002f367c;
        }
        else {
          fVar9 = fVar9 - DAT_002f367c;
        }
      }
      iVar2 = *DAT_002f3680;
      if (iVar2 < 0) {
        fVar10 = (float)VectorUnsignedToFloat(iVar2,(byte)(uVar8 >> 0x15) & 3);
        fVar10 = fVar10 * DAT_002f3678 - DAT_002f367c;
      }
      else {
        fVar10 = (float)VectorUnsignedToFloat(iVar2,(byte)(uVar8 >> 0x15) & 3);
        fVar10 = fVar10 * DAT_002f3678;
      }
      func_0068C794(local_40,fVar9,DAT_002f3684,fVar12,fVar10 * fVar11);
      uVar13 = func_00114608((uint)ALBW_AS_U32((local_40[0] * DAT_002f3688)),extraout_r1);
      iVar4 = (int)uVar13 + *(int *)(param_1 + 0xe24);
      *(int *)(param_1 + 0xe28) = iVar4;
    }
    else {
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(local_40,pfVar3,(float *)(param_1 + 0xe30));
      iVar4 = func_0068C690(local_40);
    }
    iVar4 = iVar4 + -0x80000000;
    iVar2 = *(int *)(param_1 + 0xe24);
    iVar6 = *DAT_002f368c;
    iVar5 = iVar2 - iVar4;
    if (iVar6 < iVar5) {
      iVar2 = iVar4 + iVar6;
    }
    else if (-iVar5 != iVar6 && iVar5 <= -iVar6) {
      iVar2 = iVar4 - iVar6;
    }
    *(int *)(param_1 + 0xe24) = iVar2;
  }
  return iVar2;
}

