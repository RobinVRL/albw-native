#include "ghidra_types.h"

extern float DAT_001a324c;
extern int DAT_001a3250;
extern float DAT_001a3254;
extern int DAT_001a3258;
extern float DAT_001a325c;

// USA 001A31A8 <- EU 001A31A8 (Ghidra, non-matching)
// GLOBAL DAT_001a324c float
// GLOBAL DAT_001a3250 int
// GLOBAL DAT_001a3254 float
// GLOBAL DAT_001a3258 int
// GLOBAL DAT_001a325c float

void func_001A31A8(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  fVar1 = DAT_001a324c;
  if (0 < *(int *)(param_1 + 0x9c4)) {
    iVar2 = *(int *)(param_1 + 0x9c4) + -1;
    *(int *)(param_1 + 0x9c4) = iVar2;
    fVar6 = fVar1;
    if ((iVar2 < 9) && (0 < iVar2)) {
      iVar5 = (int)((ulonglong)((longlong)DAT_001a3250 * (longlong)iVar2) >> 0x20);
      uVar3 = (iVar2 + (iVar5 - (iVar5 >> 0x1f)) * -3) * (DAT_001a3250 + -0xce);
      pfVar4 = (float *)(DAT_001a3258 + (uVar3 >> 0x18) * 0x10);
      fVar6 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar1 + (*pfVar4 + pfVar4[1] * fVar6 * DAT_001a3254) * DAT_001a325c;
    }
    *(float *)(param_1 + 0x4e4) = fVar6;
    *(float *)(param_1 + 0x4e8) = fVar1 / fVar6;
    *(float *)(param_1 + 0x4ec) = fVar6;
  }
  return;
}

