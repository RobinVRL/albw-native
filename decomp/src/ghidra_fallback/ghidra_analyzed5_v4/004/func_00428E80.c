#include "ghidra_types.h"

extern float DAT_00428f28;
extern float DAT_00428f2c;
extern float DAT_00428f30;
extern float DAT_00428f34;
extern float DAT_00428f38;
extern float DAT_00428f3c;

// USA 00428E80 <- EU 00428E60 (Ghidra, non-matching)
// GLOBAL DAT_00428f28 float
// GLOBAL DAT_00428f2c float
// GLOBAL DAT_00428f30 float
// GLOBAL DAT_00428f34 float
// GLOBAL DAT_00428f38 float
// GLOBAL DAT_00428f3c float

undefined4 func_00428E80(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = param_1[0x12];
  if (param_1[0x1b] < 5) {
    *(float *)(iVar2 + 0x3e0) = *(float *)(iVar2 + 0x3e0) + DAT_00428f28;
  }
  else if (param_1[0x1b] < 0x3d) {
    *(float *)(iVar2 + 0x3e0) = *(float *)(iVar2 + 0x3e0) + DAT_00428f2c;
  }
  fVar1 = DAT_00428f34;
  iVar2 = param_1[0x12];
  if (*(char *)(iVar2 + 0xb34) == '\0') {
    if (ALBW_AS_F32(param_1[0x24]) < *(float *)(iVar2 + 0x3d4)) {
      fVar3 = (DAT_00428f3c * ((*(float *)(iVar2 + 0x3d4) - ALBW_AS_F32(param_1[0x24])) - DAT_00428f34)) /
              DAT_00428f38 + DAT_00428f30;
      *(float *)(iVar2 + 0x4e4) = fVar3;
      *(float *)(iVar2 + 0x4e8) = fVar3;
      *(float *)(iVar2 + 0x4ec) = fVar3;
      *(float *)(param_1[0x12] + 0x900) = fVar1;
      return 0;
    }
  }
  *(float *)(iVar2 + 0x900) = DAT_00428f30;
                    /* WARNING: Could not recover jumptable at 0x00428edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,0xb,1);
}

