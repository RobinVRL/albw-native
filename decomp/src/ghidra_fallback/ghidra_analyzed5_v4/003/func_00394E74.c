#include "ghidra_types.h"

extern float DAT_00394f68;
extern int *DAT_00394f6c;
extern int DAT_00394f70;
extern float DAT_00394f74;
extern float DAT_00394f78;

// USA 00394E74 <- EU 00394E50 (Ghidra, non-matching)
// GLOBAL DAT_00394f68 float
// GLOBAL DAT_00394f6c int *
// GLOBAL DAT_00394f70 int
// GLOBAL DAT_00394f74 float
// GLOBAL DAT_00394f78 float

undefined4 func_00394E74(ushort *param_1)

{
  float fVar1;
  ushort uVar2;
  float *pfVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_00394f68;
  if (param_1[8] == 0) {
    return 0;
  }
  uVar2 = param_1[9];
  if (uVar2 != 0) {
    param_1[9] = uVar2 - 1;
    if (uVar2 != 1) {
      *(float *)(param_1 + 10) = fVar1;
      return 1;
    }
  }
  uVar2 = param_1[8] - 1;
  param_1[8] = uVar2;
  uVar4 = (uint)*param_1;
  fVar6 = fVar1;
  if (uVar4 != 0) {
    fVar6 = (float)VectorUnsignedToFloat((uint)uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 / fVar5;
  }
  fVar5 = (float)VectorSignedToFloat((uVar4 - uVar2) * *DAT_00394f6c,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = (uint)(fVar5 * *(float *)(param_1 + 4));
  pfVar3 = (float *)(DAT_00394f70 + (uVar4 >> 0x18) * 0x10);
  fVar5 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    fVar6 = (*pfVar3 + pfVar3[1] * fVar5 * DAT_00394f74) * fVar6 * *(float *)(param_1 + 2);
    *(float *)(param_1 + 10) = fVar6;
  }
  else {
    fVar6 = ((pfVar3[2] + pfVar3[3] * fVar5 * DAT_00394f74) - DAT_00394f78) * fVar6 *
            *(float *)(param_1 + 2);
    *(float *)(param_1 + 10) = fVar6;
  }
  if (*(float *)(param_1 + 4) < fVar1) {
    *(float *)(param_1 + 10) = -fVar6;
  }
  return 1;
}

