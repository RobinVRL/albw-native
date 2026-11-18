#include "ghidra_types.h"

extern float func_0034C0E4(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_0034C57C(int param_1,int param_2);
extern int DAT_0034c1cc;
extern float DAT_0034c1d0;
extern int DAT_0034c1d4;
extern float DAT_0034c1d8;

// USA 0034C0AC <- EU 0034C088 (Ghidra, non-matching)
// GLOBAL DAT_0034c1cc int
// GLOBAL DAT_0034c1d0 float
// GLOBAL DAT_0034c1d4 int
// GLOBAL DAT_0034c1d8 float

void func_0034C0AC(int param_1)

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
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  
  func_0034C0E4(*(int *)(param_1 + 0x98),*(int *)(param_1 + 0xd4),0,0x78);
  iVar6 = *(int *)(param_1 + 0x9c);
  iVar8 = *(int *)(param_1 + 0xd0);
  iVar11 = *(int *)(param_1 + 0xd4) + iVar8;
  *(int *)(iVar6 + 0x44) = iVar11;
  iVar14 = 0;
  uVar15 = ALBW_AS_U32(VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(iVar6 + 0x48) = uVar15;
  if (iVar8 == iVar11) {
    *(undefined4 *)(iVar6 + 0x4c) = 0;
  }
  else {
    *(undefined4 *)(iVar6 + 0x4c) = 0x78;
  }
  func_0034C57C(iVar6,iVar8);
  iVar4 = DAT_0034c1cc;
  iVar9 = 0;
  iVar7 = *(int *)(iVar6 + 0x34);
  iVar12 = *(int *)(iVar6 + 0x38);
  iVar10 = iVar8;
  if (iVar7 != 0) {
    do {
      iVar1 = iVar9 * 4;
      iVar13 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar10) >> 0x20);
      iVar9 = iVar9 + 1;
      iVar13 = (iVar13 >> 2) - (iVar13 >> 0x1f);
      uVar15 = ALBW_AS_U32(VectorSignedToFloat(iVar10 + iVar13 * -10,(byte)(in_fpscr >> 0x15) & 3));
      *(undefined4 *)(iVar12 + iVar1) = uVar15;
      iVar10 = iVar13;
    } while (iVar9 != iVar7);
  }
  fVar5 = DAT_0034c1d8;
  iVar4 = DAT_0034c1d4;
  iVar10 = *(int *)(iVar6 + 0x3c);
  iVar6 = *(int *)(iVar6 + 0x40);
  fVar16 = (float)VectorSignedToFloat(iVar11 - iVar8,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar16 < DAT_0034c1d0) << 0x1f |
          (uint)(fVar16 == DAT_0034c1d0) << 0x1e;
  bVar3 = (byte)(uVar2 >> 0x18);
  if ((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(fVar16) || NAN(DAT_0034c1d0))) {
    fVar16 = -fVar16;
  }
  fVar17 = (float)VectorUnsignedToFloat(0x78,(byte)(uVar2 >> 0x15) & 3);
  fVar16 = fVar16 / fVar17;
  if (iVar10 != 0) {
    do {
      if (iVar4 < (int)ALBW_AS_U32(fVar16)) {
        if ((int)ALBW_AS_U32(fVar16) < 0x3f000001) {
          *(undefined1 *)(iVar6 + iVar14) = 1;
        }
        else {
          *(undefined1 *)(iVar6 + iVar14) = 2;
        }
      }
      else {
        *(undefined1 *)(iVar6 + iVar14) = 0;
      }
      fVar16 = fVar16 * fVar5;
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar10);
  }
  return;
}

