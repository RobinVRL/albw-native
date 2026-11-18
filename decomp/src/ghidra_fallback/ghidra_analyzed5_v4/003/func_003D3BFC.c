#include "ghidra_types.h"

extern float DAT_003d3d88;
extern float DAT_003d3d8c;
extern float DAT_003d3d90;

// USA 003D3BFC <- EU 003D3BD8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_003d3d88 float
// GLOBAL DAT_003d3d8c float
// GLOBAL DAT_003d3d90 float

void func_003D3BFC(int param_1,float *param_2,int *param_3,float *param_4,int param_5,int param_6,
                  float fparam_0)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  fVar12 = DAT_003d3d8c;
  fVar3 = DAT_003d3d88;
  *(int *)(param_6 + *(int *)(param_1 + 0x8ac) * 4) = param_5;
  *param_3 = 1;
  fVar10 = *(float *)(param_1 + 0x85c) / fparam_0;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar3 <= fVar10) << 0x1d;
  if (SUB41(uVar1 >> 0x1d,0)) {
    fVar10 = fVar10 + fVar12;
  }
  else {
    fVar10 = fVar10 - fVar12;
  }
  iVar11 = (int)fVar10;
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  iVar7 = param_5 - iVar11;
  iVar11 = param_5 + iVar11;
  fVar12 = (float)VectorSignedToFloat(param_5,(byte)(uVar1 >> 0x15) & 3);
  *param_2 = fVar12;
  iVar5 = *(int *)(param_1 + 0x8ac);
  iVar8 = *(int *)(param_1 + 0x860);
  uVar4 = iVar5 - 1U & 0xff;
  do {
    iVar6 = *(int *)(param_6 + uVar4 * 4);
    bVar9 = SBORROW4(iVar6,iVar7);
    iVar2 = iVar6 - iVar7;
    if (iVar7 <= iVar6) {
      bVar9 = SBORROW4(iVar11,iVar6);
      iVar2 = iVar11 - iVar6;
    }
    if (iVar2 < 0 != bVar9) break;
    param_5 = param_5 + iVar6;
    uVar4 = uVar4 - 1 & 0xff;
    *param_3 = *param_3 + 1;
  } while (uVar4 != (iVar5 - iVar8 & 0xffU));
  fVar12 = (float)VectorSignedToFloat(*param_3 + -1,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x860) + -1,(byte)(uVar1 >> 0x15) & 3);
  fVar12 = (fVar12 / fVar10) * (fVar12 / fVar10);
  fVar10 = (float)VectorSignedToFloat(param_5,(byte)(uVar1 >> 0x15) & 3);
  fVar13 = (float)VectorSignedToFloat(*param_3,(byte)(uVar1 >> 0x15) & 3);
  fVar12 = fVar12 * fVar12;
  fVar12 = fVar12 * fVar12;
  fVar12 = fVar12 * fVar12;
  fVar12 = fVar12 * fVar12;
  fVar10 = *param_2 + (fVar10 / fVar13 - *param_2) * fVar12;
  *param_2 = fVar10;
  if (*(char *)(param_1 + 0x855) != '\0') {
    *param_4 = *param_4 + (fVar10 - *param_4) * *(float *)(param_1 + 0x864) * fVar12;
  }
  fVar12 = (*param_2 - *param_4) * fparam_0;
  *param_2 = fVar12;
  if (*(char *)(param_1 + 0x854) != '\0') {
    fVar10 = *(float *)(param_1 + 0x858);
    if ((fVar12 < -fVar10) || (fVar10 < fVar12)) {
      *(float *)(param_1 + 0x870) = fVar3;
      return;
    }
    if (fVar12 < fVar3) {
      fVar12 = -fVar12;
    }
    fVar12 = DAT_003d3d90 - fVar12 / fVar10;
    if (*(float *)(param_1 + 0x870) < fVar12) {
      fVar12 = *(float *)(param_1 + 0x870);
    }
    *(float *)(param_1 + 0x870) = fVar12;
    *param_2 = fVar3;
  }
  return;
}

