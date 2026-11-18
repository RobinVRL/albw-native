#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int *DAT_003ecc28;
extern float DAT_003ecc2c;
extern float DAT_003ecc30;
extern float DAT_003ecc34;
extern float DAT_003ecc38;
extern float DAT_003ecc3c;
extern int DAT_003ecc40;
extern float DAT_003ecc44;

// USA 003ECB98 <- EU 003ECB78 (Ghidra, non-matching)
// GLOBAL DAT_003ecc28 int *
// GLOBAL DAT_003ecc2c float
// GLOBAL DAT_003ecc30 float
// GLOBAL DAT_003ecc34 float
// GLOBAL DAT_003ecc38 float
// GLOBAL DAT_003ecc3c float
// GLOBAL DAT_003ecc40 int
// GLOBAL DAT_003ecc44 float

void func_003ECB98(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  pfVar2 = (float *)(**(code **)(*param_1 + 8))(param_1,0x200,0x80);
  fVar8 = DAT_003ecc44;
  iVar1 = DAT_003ecc40;
  fVar13 = DAT_003ecc3c;
  fVar12 = DAT_003ecc38;
  fVar11 = DAT_003ecc34;
  fVar10 = DAT_003ecc30;
  fVar9 = DAT_003ecc2c;
  piVar4 = DAT_003ecc28;
  iVar5 = 0;
  iVar6 = 0x80;
  *DAT_003ecc28 = (int)pfVar2;
  do {
    fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar14 = func_00114608((uint)ALBW_AS_U32((fVar7 * fVar9 * fVar11 * fVar12 * fVar13)),(uint)piVar4);
    piVar4 = (int *)((uint)uVar14 & 0xffffff);
    iVar6 = iVar6 + -1;
    iVar3 = iVar1 + ((uint)uVar14 >> 0x18) * 0x10;
    iVar5 = iVar5 + 1;
    fVar7 = (float)VectorUnsignedToFloat(piVar4,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar2 = fVar8 + (*(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) * fVar7 * fVar10) * fVar8;
    pfVar2 = pfVar2 + 1;
  } while (iVar6 != 0);
  return;
}

