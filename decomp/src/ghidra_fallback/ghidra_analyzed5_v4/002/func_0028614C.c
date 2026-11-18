#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int DAT_00286290;
extern int DAT_00286294;
extern float DAT_00286298;
extern undefined4 DAT_0028629c;
extern float DAT_002862a0;
extern float DAT_002862a4;
extern float DAT_002862a8;

// USA 0028614C <- EU 00286174 (Ghidra, non-matching)
// GLOBAL DAT_00286290 int
// GLOBAL DAT_00286294 int
// GLOBAL DAT_00286298 float
// GLOBAL DAT_0028629c undefined4
// GLOBAL DAT_002862a0 float
// GLOBAL DAT_002862a4 float
// GLOBAL DAT_002862a8 float

void func_0028614C(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar2 = (float *)func_00520FC0();
  uVar1 = DAT_0028629c;
  fVar6 = DAT_00286298;
  fVar4 = *(float *)(param_1 + 0x3d0) - *pfVar2;
  fVar5 = *(float *)(param_1 + 0x3d8) - pfVar2[2];
  fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  if (DAT_00286290 < (int)ALBW_AS_U32(fVar4)) {
    uVar3 = *(uint *)(param_1 + 1000);
    pfVar2 = (float *)(DAT_00286294 + (uVar3 >> 0x18) * 0x10);
    fVar4 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = pfVar2[2];
    fVar8 = pfVar2[3];
    fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3dc) = (*pfVar2 + pfVar2[1] * fVar4 * DAT_00286298) * DAT_002862a4;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(float *)(param_1 + 0x3e4) = (fVar7 + fVar8 * fVar5 * fVar6) * DAT_002862a8;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1000);
    fVar4 = fVar4 * DAT_002862a0;
    pfVar2 = (float *)(DAT_00286294 + (uVar3 >> 0x18) * 0x10);
    fVar6 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = pfVar2[2];
    fVar8 = pfVar2[3];
    fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * DAT_00286298;
    *(float *)(param_1 + 0x3dc) = (*pfVar2 + pfVar2[1] * fVar6 * DAT_00286298) * fVar4;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(float *)(param_1 + 0x3e4) = (fVar7 + fVar8 * fVar5) * fVar4;
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  return;
}

