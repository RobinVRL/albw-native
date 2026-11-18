#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int *DAT_002f4f8c;
extern float DAT_002f4f90;
extern float DAT_002f4f94;
extern float DAT_002f4f98;
extern float DAT_002f4f9c;
extern undefined4 *DAT_002f4fa0;
extern float DAT_002f4fa4;
extern int *DAT_002f4fa8;

// USA 002F4E50 <- EU 002F4E2C (Ghidra, non-matching)
// GLOBAL DAT_002f4f8c int *
// GLOBAL DAT_002f4f90 float
// GLOBAL DAT_002f4f94 float
// GLOBAL DAT_002f4f98 float
// GLOBAL DAT_002f4f9c float
// GLOBAL DAT_002f4fa0 undefined4 *
// GLOBAL DAT_002f4fa4 float
// GLOBAL DAT_002f4fa8 int *

int func_002F4E50(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define afStack_2c ((float *)(albw_frame + 0x14))
  if (*DAT_002f4f8c == 0) {
    iVar3 = *(int *)(param_1 + 0xe24);
  }
  else {
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(local_38,pfVar4,(float *)(param_1 + 0xe30));
    fVar9 = SQRT(local_38[0] * local_38[0] + local_30 * local_30);
    if (param_2 == 0) {
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar9 == DAT_002f4f90) << 0x1e |
              (uint)(DAT_002f4f90 <= fVar9) << 0x1d;
      bVar2 = (byte)(uVar8 >> 0x18);
      fVar10 = DAT_002f4f94;
      if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
         (uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_002f4f98) << 0x1f,
         uVar8 = uVar1 | (uint)(NAN(fVar9) || NAN(DAT_002f4f98)) << 0x1c, fVar10 = DAT_002f4f90,
         (byte)(uVar1 >> 0x1f) != ((byte)(uVar8 >> 0x1c) & 1))) {
        fVar10 = (DAT_002f4f90 * (fVar9 - DAT_002f4f90)) / DAT_002f4f9c + DAT_002f4f94;
      }
      pfVar4 = (float *)func_00520FC0();
      func_00115C70(afStack_2c,pfVar4,(float *)(param_1 + 0xe30));
      iVar3 = func_0068C690(afStack_2c);
      fVar9 = (float)VectorSignedToFloat(*DAT_002f4fa0,(byte)(uVar8 >> 0x15) & 3);
      func_0051D2F4((int *)(param_1 + 0xe28),iVar3,0,(int)(fVar9 * fVar10),DAT_002f4fa4);
      iVar5 = *(int *)(param_1 + 0xe28);
    }
    else {
      pfVar4 = (float *)func_00520FC0();
      func_00115C70(afStack_2c,pfVar4,(float *)(param_1 + 0xe30));
      iVar5 = func_0068C690(afStack_2c);
    }
    iVar5 = iVar5 + -0x80000000;
    iVar3 = *(int *)(param_1 + 0xe24);
    iVar7 = *DAT_002f4fa8;
    iVar6 = iVar3 - iVar5;
    if (iVar7 < iVar6) {
      iVar3 = iVar5 + iVar7;
    }
    else if (-iVar6 != iVar7 && iVar6 <= -iVar7) {
      iVar3 = iVar5 - iVar7;
    }
    *(int *)(param_1 + 0xe24) = iVar3;
  }
  return iVar3;
}

