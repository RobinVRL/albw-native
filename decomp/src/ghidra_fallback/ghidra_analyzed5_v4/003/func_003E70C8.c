#include "ghidra_types.h"

extern uint DAT_003e724c;
extern uint DAT_003e7250;
extern uint DAT_003e7254;
extern uint DAT_003e7258;
extern int *DAT_003e725c;
extern float DAT_003e7260;
extern float DAT_003e7264;
extern float DAT_003e7268;

// USA 003E70C8 <- EU 003E70A8 (Ghidra, non-matching)
// GLOBAL DAT_003e724c uint
// GLOBAL DAT_003e7250 uint
// GLOBAL DAT_003e7254 uint
// GLOBAL DAT_003e7258 uint
// GLOBAL DAT_003e725c int *
// GLOBAL DAT_003e7260 float
// GLOBAL DAT_003e7264 float
// GLOBAL DAT_003e7268 float

void func_003E70C8(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar13 = DAT_003e7258;
  uVar8 = DAT_003e7254;
  uVar12 = DAT_003e7250;
  uVar6 = DAT_003e724c;
  iVar5 = (**(code **)(*param_1 + 8))(param_1,0x1800,0x80);
  piVar1 = DAT_003e725c;
  *DAT_003e725c = iVar5;
  iVar5 = (**(code **)(*param_1 + 8))(param_1,0x1800,0x80);
  fVar4 = DAT_003e7268;
  fVar3 = DAT_003e7264;
  fVar2 = DAT_003e7260;
  iVar11 = 0;
  piVar1[1] = iVar5;
  do {
    uVar6 = uVar6 ^ uVar6 << 0xb;
    uVar12 = uVar12 ^ uVar12 << 0xb;
    uVar8 = uVar8 ^ uVar8 << 0xb;
    uVar7 = uVar6 ^ uVar6 >> 8 ^ uVar13 ^ uVar13 >> 0x13;
    uVar9 = uVar7 ^ uVar7 >> 0x13 ^ uVar12 ^ uVar12 >> 8;
    uVar13 = uVar13 ^ uVar13 << 0xb;
    uVar6 = uVar9 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar8 >> 8;
    uVar12 = uVar6 ^ uVar6 >> 0x13 ^ uVar13 ^ uVar13 >> 8;
    fVar14 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    uVar9 = uVar9 ^ uVar9 << 0xb;
    uVar8 = uVar12 ^ uVar12 >> 0x13 ^ uVar7 ^ uVar7 >> 8;
    uVar13 = uVar8 ^ uVar8 >> 0x13 ^ uVar9 ^ uVar9 >> 8;
    fVar18 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    pfVar10 = (float *)(*piVar1 + iVar11 * 0xc);
    fVar19 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar10 = fVar14 * fVar2 * fVar3 - fVar4;
    fVar17 = fVar17 * fVar2 * fVar3 - fVar4;
    pfVar10[1] = fVar15 * fVar2 * fVar3 - fVar4;
    pfVar10[2] = fVar16 * fVar2 * fVar3 - fVar4;
    pfVar10 = (float *)(piVar1[1] + iVar11 * 0xc);
    fVar15 = fVar18 * fVar2 * fVar3 - fVar4;
    fVar14 = fVar19 * fVar2 * fVar3 - fVar4;
    pfVar10[2] = fVar14;
    *pfVar10 = fVar15;
    pfVar10[1] = fVar17;
    fVar16 = fVar4 / SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar14 * fVar14);
    *pfVar10 = fVar15 * fVar16;
    pfVar10[1] = fVar17 * fVar16;
    iVar11 = iVar11 + 1;
    pfVar10[2] = fVar14 * fVar16;
  } while (iVar11 < 0x200);
  return;
}

