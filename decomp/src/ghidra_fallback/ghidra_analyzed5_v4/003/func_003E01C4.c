#include "ghidra_types.h"

extern int func_003E0500(int param_1);
extern int DAT_003e02a4;
extern float DAT_003e02a8;
extern float DAT_003e02ac;

// USA 003E01C4 <- EU 003E01A4 (Ghidra, non-matching)
// GLOBAL DAT_003e02a4 int
// GLOBAL DAT_003e02a8 float
// GLOBAL DAT_003e02ac float

void func_003E01C4(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  
  fVar2 = DAT_003e02ac;
  fVar7 = DAT_003e02a8;
  iVar4 = DAT_003e02a4;
  fVar5 = *(float *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 4);
  iVar9 = ALBW_AS_U32(VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3));
  iVar11 = iVar9;
  if (DAT_003e02a4 < iVar9) {
    iVar11 = iVar3;
  }
  *(int *)(param_1 + 0xf0) = iVar3;
  *(float *)(param_1 + 0xf4) = fVar5;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x30) * 4;
  iVar1 = *(int *)(param_1 + 0x34) * 4;
  fVar10 = fVar7;
  if (iVar4 < iVar9) {
    fVar10 = (float)VectorUnsignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar11 = VectorFloatToUnsigned(fVar10 * fVar2,3);
  iVar9 = ALBW_AS_U32(VectorUnsignedToFloat(ALBW_AS_U32(fVar5),(byte)(in_fpscr >> 0x15) & 3));
  if (iVar4 < iVar9) {
    fVar7 = fVar5;
  }
  uVar6 = *(int *)(param_1 + 0x28) + 0x1fU & 0xffffffe0;
  if (iVar4 < iVar9) {
    fVar7 = (float)VectorUnsignedToFloat(ALBW_AS_U32(fVar7),(byte)(in_fpscr >> 0x15) & 3);
  }
  *(uint *)(param_1 + 0x3c) = uVar6;
  iVar9 = uVar6 + iVar11 * 0x280;
  *(int *)(param_1 + 0x4c) = iVar9;
  iVar8 = VectorFloatToUnsigned(fVar7 * fVar2,3);
  iVar9 = iVar9 + iVar8 * 0x280;
  *(int *)(param_1 + 0x5c) = iVar9;
  iVar9 = iVar9 + iVar3;
  *(int *)(param_1 + 0x60) = iVar9;
  iVar9 = iVar9 + iVar1;
  *(int *)(param_1 + 0x7c) = iVar9;
  iVar9 = iVar9 + *(int *)(param_1 + 0x38) * 4;
  iVar4 = iVar11 * 0x280 + iVar9;
  *(int *)(param_1 + 0x40) = iVar9;
  *(int *)(param_1 + 0x50) = iVar4;
  iVar4 = iVar4 + iVar8 * 0x280;
  *(int *)(param_1 + 100) = iVar4;
  iVar4 = iVar4 + iVar3;
  *(int *)(param_1 + 0x68) = iVar4;
  *(int *)(param_1 + 0x80) = iVar4 + iVar1;
  func_003E0500(param_1);
  *(undefined1 *)(param_1 + 0x104) = 1;
  return;
}

