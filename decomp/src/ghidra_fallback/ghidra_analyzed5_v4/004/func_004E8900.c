#include "ghidra_types.h"

extern int func_0066AB60(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e8990;
extern float DAT_004e8994;
extern int DAT_004e8998;
extern float DAT_004e899c;
extern float DAT_004e89a0;

// USA 004E8900 <- EU 004E88D8 (Ghidra, non-matching)
// GLOBAL DAT_004e8990 float
// GLOBAL DAT_004e8994 float
// GLOBAL DAT_004e8998 int
// GLOBAL DAT_004e899c float
// GLOBAL DAT_004e89a0 float

undefined4 func_004E8900(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  fVar1 = DAT_004e8994;
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_004e8990;
  iVar2 = DAT_004e8998;
  uVar4 = *(uint *)(param_1 + 0x50c);
  uVar6 = uVar4 + *(int *)(param_1 + 0x510);
  *(uint *)(param_1 + 0x50c) = uVar6;
  fVar3 = DAT_004e89a0;
  pfVar7 = (float *)(iVar2 + (uVar6 >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar5 = (float *)(iVar2 + (uVar4 >> 0x18) * 0x10);
  fVar9 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) =
       ((*pfVar7 + pfVar7[1] * fVar8 * fVar1) - (*pfVar5 + pfVar5[1] * fVar9 * fVar1)) *
       DAT_004e899c;
  if (*(char *)(param_1 + 0x424) != '\0') {
    *(float *)(param_1 + 0x3e0) = fVar3;
  }
  if (fVar3 < *(float *)(param_1 + 0x3e0)) {
    return 0;
  }
  return func_0066AB60((undefined4 *)(param_1 + 0x4dc),1);
}

