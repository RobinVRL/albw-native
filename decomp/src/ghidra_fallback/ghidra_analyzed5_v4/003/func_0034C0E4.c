#include "ghidra_types.h"

extern int func_0034C57C(int param_1,int param_2);
extern int DAT_0034c1cc;
extern float DAT_0034c1d0;
extern int DAT_0034c1d4;
extern float DAT_0034c1d8;

// USA 0034C0E4 <- EU 0034C0C0 (Ghidra, non-matching)
// GLOBAL DAT_0034c1cc int
// GLOBAL DAT_0034c1d0 float
// GLOBAL DAT_0034c1d4 int
// GLOBAL DAT_0034c1d8 float

float func_0034C0E4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  *(int *)(param_1 + 0x44) = param_3;
  iVar11 = 0;
  uVar12 = ALBW_AS_U32(VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x48) = uVar12;
  if (param_2 == param_3) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = param_4;
  }
  func_0034C57C(param_1,param_2);
  iVar4 = DAT_0034c1cc;
  iVar8 = 0;
  iVar6 = *(int *)(param_1 + 0x34);
  iVar9 = *(int *)(param_1 + 0x38);
  iVar7 = param_2;
  if (iVar6 != 0) {
    do {
      iVar1 = iVar8 * 4;
      iVar10 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar7) >> 0x20);
      iVar8 = iVar8 + 1;
      iVar10 = (iVar10 >> 2) - (iVar10 >> 0x1f);
      uVar12 = ALBW_AS_U32(VectorSignedToFloat(iVar7 + iVar10 * -10,(byte)(in_fpscr >> 0x15) & 3));
      *(undefined4 *)(iVar9 + iVar1) = uVar12;
      iVar7 = iVar10;
    } while (iVar8 != iVar6);
  }
  fVar5 = DAT_0034c1d8;
  iVar4 = DAT_0034c1d4;
  iVar6 = *(int *)(param_1 + 0x3c);
  iVar7 = *(int *)(param_1 + 0x40);
  fVar13 = (float)VectorSignedToFloat(param_3 - param_2,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar13 < DAT_0034c1d0) << 0x1f |
          (uint)(fVar13 == DAT_0034c1d0) << 0x1e;
  bVar3 = (byte)(uVar2 >> 0x18);
  if ((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(fVar13) || NAN(DAT_0034c1d0))) {
    fVar13 = -fVar13;
  }
  fVar14 = (float)VectorUnsignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
  fVar13 = fVar13 / fVar14;
  if (iVar6 != 0) {
    do {
      if (iVar4 < (int)ALBW_AS_U32(fVar13)) {
        if ((int)ALBW_AS_U32(fVar13) < 0x3f000001) {
          *(undefined1 *)(iVar7 + iVar11) = 1;
        }
        else {
          *(undefined1 *)(iVar7 + iVar11) = 2;
        }
      }
      else {
        *(undefined1 *)(iVar7 + iVar11) = 0;
      }
      fVar13 = fVar13 * fVar5;
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar6);
  }
  return fVar13;
}

