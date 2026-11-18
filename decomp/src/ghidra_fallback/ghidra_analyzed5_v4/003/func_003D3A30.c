#include "ghidra_types.h"

extern int func_003D534C(float *param_1,float fparam_0);
extern float DAT_003d3bcc;
extern float DAT_003d3bd0;
extern float DAT_003d3bd4;

// USA 003D3A30 <- EU 003D3A0C (Ghidra, non-matching)
// GLOBAL DAT_003d3bcc float
// GLOBAL DAT_003d3bd0 float
// GLOBAL DAT_003d3bd4 float

undefined4 func_003D3A30(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar12 = DAT_003d3bd0;
  fVar1 = DAT_003d3bcc;
  fVar13 = *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x7e0);
  fVar8 = *(float *)(param_1 + 0x810);
  pfVar2 = (float *)(param_1 + 0x7f8);
  fVar14 = *(float *)(param_1 + 0x84c) * fVar13;
  fVar9 = *(float *)(param_1 + 0x814);
  fVar4 = *(float *)(param_1 + 0x800);
  fVar5 = *(float *)(param_1 + 0x804);
  fVar6 = *(float *)(param_1 + 0x808);
  fVar7 = *(float *)(param_1 + 0x80c);
  fVar10 = *pfVar2;
  fVar11 = *(float *)(param_1 + 0x7fc);
  fVar3 = *(float *)(param_1 + 0x818);
  fVar13 = *(float *)(param_1 + 0x850) * (DAT_003d3bd0 + fVar14 * fVar14 * DAT_003d3bcc) * fVar13;
  *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x804) + fVar13 * fVar8;
  *(float *)(param_1 + 0x808) = *(float *)(param_1 + 0x808) + fVar13 * fVar9;
  *(float *)(param_1 + 0x80c) = *(float *)(param_1 + 0x80c) + fVar13 * fVar3;
  *(float *)(param_1 + 0x810) = *(float *)(param_1 + 0x810) - fVar13 * fVar5;
  *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x814) - fVar13 * fVar6;
  *(float *)(param_1 + 0x818) = *(float *)(param_1 + 0x818) - fVar13 * fVar7;
  fVar13 = *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x7e4);
  fVar14 = *(float *)(param_1 + 0x84c) * fVar13;
  fVar13 = *(float *)(param_1 + 0x850) * (fVar12 + fVar14 * fVar14 * fVar1) * fVar13;
  *(float *)(param_1 + 0x810) = *(float *)(param_1 + 0x810) + fVar13 * fVar10;
  *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x814) + fVar13 * fVar11;
  *(float *)(param_1 + 0x818) = *(float *)(param_1 + 0x818) + fVar13 * fVar4;
  *pfVar2 = *pfVar2 - fVar13 * fVar8;
  *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7fc) - fVar13 * fVar9;
  *(float *)(param_1 + 0x800) = *(float *)(param_1 + 0x800) - fVar13 * fVar3;
  fVar3 = *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x7e8);
  fVar8 = *(float *)(param_1 + 0x84c) * fVar3;
  fVar12 = *(float *)(param_1 + 0x850) * (fVar12 + fVar8 * fVar8 * fVar1) * fVar3;
  *pfVar2 = *pfVar2 + fVar12 * fVar5;
  *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7fc) + fVar12 * fVar6;
  *(float *)(param_1 + 0x800) = *(float *)(param_1 + 0x800) + fVar12 * fVar7;
  *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x804) - fVar12 * fVar10;
  *(float *)(param_1 + 0x808) = *(float *)(param_1 + 0x808) - fVar12 * fVar11;
  fVar1 = DAT_003d3bd4;
  *(float *)(param_1 + 0x80c) = *(float *)(param_1 + 0x80c) - fVar12 * fVar4;
  return func_003D534C(pfVar2,fVar1);
}

