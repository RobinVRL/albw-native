#include "ghidra_types.h"

extern float DAT_00678dfc;
extern undefined4 DAT_00678e00;
extern float DAT_00678e04;
extern float DAT_00678e08;
extern float DAT_00678e0c;
extern float DAT_00678e10;
extern float DAT_00678e14;

// USA 00678C5C <- EU 00678C34 (Ghidra, non-matching)
// GLOBAL DAT_00678dfc float
// GLOBAL DAT_00678e00 undefined4
// GLOBAL DAT_00678e04 float
// GLOBAL DAT_00678e08 float
// GLOBAL DAT_00678e0c float
// GLOBAL DAT_00678e10 float
// GLOBAL DAT_00678e14 float

undefined4
func_00678C5C(undefined4 *param_1,float *param_2,ushort *param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar9 = (float)VectorUnsignedToFloat((uint)*param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar18 = (float)VectorUnsignedToFloat((uint)param_3[-3],(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (*param_2 - fVar9 * DAT_00678dfc * param_2[6]) + fparam_0;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_1 == fVar10) << 0x1e |
          (uint)(fVar10 <= fparam_1) << 0x1d;
  bVar6 = (byte)(uVar1 >> 0x18);
  fVar9 = (*param_2 - fVar18 * DAT_00678dfc * param_2[6]) + fparam_0;
  bVar8 = false;
  if ((bool)(bVar6 >> 5 & 1)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 == fparam_1) << 0x1e |
            (uint)(fparam_1 <= fVar9) << 0x1d;
    bVar6 = (byte)(uVar1 >> 0x18);
    bVar8 = (bool)(bVar6 >> 5 & 1);
  }
  if (!bVar8 || (bool)(bVar6 >> 6)) {
    uVar7 = 0;
  }
  else {
    *param_1 = param_3 + -3;
    fVar19 = DAT_00678e14;
    fVar14 = DAT_00678e10;
    fVar12 = DAT_00678e0c;
    fVar18 = DAT_00678e08;
    uVar7 = DAT_00678e00;
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == '\0') {
      uVar3 = param_3[1];
      fVar12 = param_2[4];
      fVar18 = param_2[5];
      param_1[2] = ALBW_AS_U32(fVar10);
      param_1[5] = uVar7;
      param_1[6] = uVar7;
      param_1[7] = uVar7;
      fVar10 = (float)VectorUnsignedToFloat((uint)uVar3,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar9);
      param_1[4] = ALBW_AS_U32(fVar18 + fVar10 * fVar12);
    }
    else if (cVar2 == '\x01') {
      uVar3 = param_3[1];
      fVar12 = param_2[5];
      fVar14 = param_2[4];
      uVar4 = param_3[-2];
      param_1[2] = ALBW_AS_U32(fVar10);
      fVar18 = (float)VectorUnsignedToFloat((uint)uVar3,(byte)(uVar1 >> 0x15) & 3);
      fVar18 = fVar12 + fVar18 * fVar14;
      fVar19 = (float)VectorUnsignedToFloat((uint)uVar4,(byte)(uVar1 >> 0x15) & 3);
      param_1[5] = ALBW_AS_U32(((fVar12 + fVar19 * fVar14) - fVar18) / (fVar9 - fVar10));
      param_1[6] = uVar7;
      param_1[7] = uVar7;
      param_1[3] = ALBW_AS_U32(fVar9);
      param_1[4] = ALBW_AS_U32(fVar18);
    }
    else if (cVar2 == '\x02') {
      fVar11 = param_2[5];
      fVar13 = param_2[4];
      uVar3 = param_3[-2];
      fVar15 = (float)VectorUnsignedToFloat((uint)param_3[1],(byte)(uVar1 >> 0x15) & 3);
      fVar15 = fVar11 + fVar15 * fVar13;
      uVar4 = param_3[2];
      uVar5 = param_3[-1];
      param_1[2] = ALBW_AS_U32(fVar10);
      fVar16 = (float)VectorUnsignedToFloat((uint)uVar3,(byte)(uVar1 >> 0x15) & 3);
      fVar20 = (float)VectorSignedToFloat((int)(short)uVar5,(byte)(uVar1 >> 0x15) & 3);
      fVar20 = fVar20 * DAT_00678e04;
      fVar17 = (float)VectorSignedToFloat((int)(short)uVar4,(byte)(uVar1 >> 0x15) & 3);
      fVar11 = fVar15 - (fVar11 + fVar16 * fVar13);
      fVar17 = fVar17 * DAT_00678e04;
      fVar10 = fVar9 - fVar10;
      param_1[5] = ALBW_AS_U32(fVar17);
      param_1[3] = ALBW_AS_U32(fVar9);
      param_1[4] = ALBW_AS_U32(fVar15);
      fVar12 = fVar12 / fVar10;
      param_1[6] = ALBW_AS_U32(((fVar10 * fVar18 * fVar17 - fVar11 * fVar19) - fVar10 * fVar20) *
                   fVar12 * fVar12);
      param_1[7] = ALBW_AS_U32((fVar11 * fVar14 + fVar10 * fVar17 + fVar10 * fVar20) * fVar12 * fVar12 * fVar12);
    }
    uVar7 = 1;
  }
  return uVar7;
}

