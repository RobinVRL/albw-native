#include "ghidra_types.h"

extern int func_0040CE44(int param_1);
extern int DAT_0040cba8;
extern float DAT_0040cbac;
extern float DAT_0040cbb0;

// USA 0040CABC <- EU 0040CA9C (Ghidra, non-matching)
// GLOBAL DAT_0040cba8 int
// GLOBAL DAT_0040cbac float
// GLOBAL DAT_0040cbb0 float

void func_0040CABC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  
  fVar11 = *(float *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar13 = ALBW_AS_U32(VectorUnsignedToFloat(ALBW_AS_U32(fVar11),(byte)(in_fpscr >> 0x15) & 3));
  iVar6 = *(int *)(param_1 + 0x38);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x100) = iVar6;
  iVar2 = DAT_0040cba8;
  *(undefined4 *)(param_1 + 0xfc) = uVar10;
  *(int *)(param_1 + 0x108) = iVar1;
  *(int *)(param_1 + 0x104) = iVar3;
  *(float *)(param_1 + 0xf8) = fVar11;
  if (iVar2 < iVar13) {
    fVar11 = (float)VectorUnsignedToFloat(ALBW_AS_U32(fVar11),(byte)(in_fpscr >> 0x15) & 3);
  }
  if (iVar13 <= iVar2) {
    fVar11 = DAT_0040cbac;
  }
  uVar4 = *(int *)(param_1 + 0x30) + 0x1fU & 0xffffffe0;
  iVar13 = VectorFloatToUnsigned(fVar11 * DAT_0040cbb0,3);
  iVar12 = ALBW_AS_U32(VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3));
  fVar11 = DAT_0040cbac;
  if (iVar2 < iVar12) {
    fVar11 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar2 = 0;
  iVar12 = VectorFloatToUnsigned(fVar11 * DAT_0040cbb0,3);
  if (*(char *)(param_1 + 0x10d) != '\0') {
    do {
      iVar7 = param_1 + iVar2 * 4;
      iVar8 = uVar4 + iVar13 * 0x280;
      *(uint *)(iVar7 + 0x44) = uVar4;
      iVar9 = param_1 + iVar2 * 8;
      iVar5 = iVar8 + iVar12 * 0x280;
      *(int *)(iVar7 + 0x54) = iVar8;
      iVar8 = iVar5 + iVar6 * 4;
      *(int *)(iVar9 + 100) = iVar5;
      *(int *)(iVar9 + 0x68) = iVar8;
      iVar8 = iVar8 + iVar3 * 4;
      *(int *)(iVar7 + 0x84) = iVar8;
      iVar2 = iVar2 + 1;
      uVar4 = iVar8 + iVar1 * 4;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x10d));
  }
  func_0040CE44(param_1);
  *(undefined1 *)(param_1 + 0x10e) = 1;
  return;
}

