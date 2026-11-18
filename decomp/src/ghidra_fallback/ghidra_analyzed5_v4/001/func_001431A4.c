#include "ghidra_types.h"

extern int func_006576C4(undefined4 *param_1,undefined1 param_2);
extern float DAT_001432b0;
extern float DAT_001432b4;
extern float DAT_001432b8;
extern float DAT_001432bc;
extern int DAT_001432c0;
extern float DAT_001432c4;
extern int *DAT_001432c8;

// USA 001431A4 <- EU 001431A4 (Ghidra, non-matching)
// GLOBAL DAT_001432b0 float
// GLOBAL DAT_001432b4 float
// GLOBAL DAT_001432b8 float
// GLOBAL DAT_001432bc float
// GLOBAL DAT_001432c0 int
// GLOBAL DAT_001432c4 float
// GLOBAL DAT_001432c8 int *

void func_001431A4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0xe6 < *(uint *)(param_1 + 0x49c)) {
    uVar4 = *(uint *)(param_1 + 0x4ac);
    if (*(uint *)(param_1 + 0x4a8) < uVar4) {
      uVar3 = *(uint *)(param_1 + 0x4a8) + 1;
      *(uint *)(param_1 + 0x4a8) = uVar3;
      fVar6 = DAT_001432b0;
      if ((uVar4 != 0 && uVar3 != 0) && (fVar6 = DAT_001432b4, uVar3 < uVar4)) {
        fVar6 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = fVar6 * *(float *)(param_1 + 0x4b0);
      }
      *(float *)(*(int *)(param_1 + 0x46c) + 0x158) = fVar6;
    }
  }
  if (*(uint *)(param_1 + 0x49c) < *(uint *)(param_1 + 0x4a0)) {
    *(uint *)(param_1 + 0x49c) = *(uint *)(param_1 + 0x49c) + 1;
  }
  else {
    func_006576C4((undefined4 *)(param_1 + 0x424),2);
  }
  iVar1 = DAT_001432c0;
  fVar6 = DAT_001432bc;
  if (*(int *)(*(int *)(param_1 + 0x46c) + 0x158) == 0x3f800000) {
    fVar8 = *(float *)(param_1 + 0x41c) + DAT_001432b8;
    *(float *)(param_1 + 0x3d4) = fVar8;
    piVar2 = DAT_001432c8;
    uVar4 = *(uint *)(param_1 + 0x420);
    pfVar5 = (float *)(iVar1 + (uVar4 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3d4) = fVar8 + (*pfVar5 + pfVar5[1] * fVar7 * fVar6) * DAT_001432c4;
    *(uint *)(param_1 + 0x420) = uVar4 + *piVar2;
  }
  return;
}

