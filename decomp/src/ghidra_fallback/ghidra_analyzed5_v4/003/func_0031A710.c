#include "ghidra_types.h"

extern int func_006652A4(undefined4 *param_1,undefined1 param_2);
extern float DAT_0031a784;
extern float DAT_0031a788;

// USA 0031A710 <- EU 0031A6EC (Ghidra, non-matching)
// GLOBAL DAT_0031a784 float
// GLOBAL DAT_0031a788 float

undefined4 func_0031A710(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_0031a784;
  *(float *)(param_1 + 0x3d0) =
       *(float *)(param_1 + 0x3d0) +
       (*(float *)(param_1 + 0x458) - *(float *)(param_1 + 0x3d0)) * DAT_0031a784;
  *(float *)(param_1 + 0x3d8) =
       *(float *)(param_1 + 0x3d8) +
       (*(float *)(param_1 + 0x460) - *(float *)(param_1 + 0x3d8)) * fVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x444) + 0x14);
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    return 0;
  }
  if (*(float *)(iVar2 + 0x10) < DAT_0031a788) {
    if (DAT_0031a788 < *(float *)(iVar2 + 8)) {
      return 0;
    }
  }
  else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
    return 0;
  }
  return func_006652A4((undefined4 *)(param_1 + 0x420),4);
}

