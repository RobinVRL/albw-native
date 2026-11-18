#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern float DAT_0044b3c8;
extern float DAT_0044b3cc;
extern float DAT_0044b3d0;
extern float DAT_0044b3d4;

// USA 0044B264 <- EU 0044B23C (Ghidra, non-matching)
// GLOBAL DAT_0044b3c8 float
// GLOBAL DAT_0044b3cc float
// GLOBAL DAT_0044b3d0 float
// GLOBAL DAT_0044b3d4 float

void func_0044B264(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  func_0012C85C(param_1,param_2);
  fVar3 = DAT_0044b3c8;
  fVar10 = ALBW_AS_F32(param_1[0x98]);
  in_fpscr = in_fpscr & 0xfffffff;
  uVar1 = in_fpscr | (uint)(fVar10 < DAT_0044b3c8) << 0x1f;
  if (fVar10 != DAT_0044b3c8 && SUB41(uVar1 >> 0x1f,0) == (NAN(fVar10) || NAN(DAT_0044b3c8))) {
    fVar8 = (DAT_0044b3cc - fVar10) / DAT_0044b3cc;
    fVar5 = fVar8 * fVar8 - fVar8;
    fVar12 = fVar5 * fVar8;
    fVar9 = fVar5 * fVar8;
    fVar11 = fVar8 * fVar8 - fVar12 * DAT_0044b3d0;
    fVar8 = fVar8 * fVar8 - fVar9 * DAT_0044b3d0;
    param_1[0x92] =
         (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0x96]) - fVar11 * ALBW_AS_F32(param_1[0x96])) +
               fVar11 * ALBW_AS_F32(param_1[0x94]) + (fVar12 - fVar5) * DAT_0044b3c8 +
              fVar12 * DAT_0044b3c8));
    fVar10 = fVar10 - DAT_0044b3d4;
    param_1[0x93] =
         (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0x97]) - fVar8 * ALBW_AS_F32(param_1[0x97])) + fVar8 * ALBW_AS_F32(param_1[0x95])
               + (fVar9 - fVar5) * fVar3 + fVar9 * fVar3));
    param_1[0x98] = (int)ALBW_AS_U32(fVar10);
  }
  fVar5 = ALBW_AS_F32(param_1[0x92]);
  iVar6 = (int)fVar5;
  fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = fVar8;
  if (fVar8 != fVar5) {
    fVar10 = fVar3;
  }
  fVar9 = ALBW_AS_F32(param_1[0x93]);
  if (fVar5 <= fVar10 && (fVar8 != fVar5 && fVar3 != fVar5)) {
    iVar6 = iVar6 + -1;
  }
  iVar7 = (int)fVar9;
  fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr | (uint)(fVar5 == fVar9) << 0x1e | (uint)(fVar9 <= fVar5) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar4 = (bool)(bVar2 >> 6);
  if (!bVar4) {
    uVar1 = in_fpscr | (uint)(fVar3 == fVar9) << 0x1e | (uint)(fVar9 <= fVar3) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar4 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar4) {
    iVar7 = iVar7 + -1;
  }
  iVar6 = param_1[0x87];
  fVar5 = (float)VectorSignedToFloat(iVar7,(byte)(uVar1 >> 0x15) & 3);
  if ((*(float *)(iVar6 + 0x1c) != fVar10) || (*(float *)(iVar6 + 0x20) != fVar5)) {
    *(float *)(iVar6 + 0x24) = fVar3;
    *(float *)(iVar6 + 0x1c) = fVar10;
    *(float *)(iVar6 + 0x20) = fVar5;
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xef | 0x10;
    iVar6 = param_1[0x88];
    *(float *)(iVar6 + 0x24) = fVar3;
    *(float *)(iVar6 + 0x1c) = fVar10;
    *(float *)(iVar6 + 0x20) = fVar5;
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xef | 0x10;
    *(byte *)(param_1[7] + 0x70) = *(byte *)(param_1[7] + 0x70) | 2;
    *(undefined1 *)((int)param_1 + 0x295) = 1;
  }
  return;
}

