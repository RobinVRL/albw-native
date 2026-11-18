#include "ghidra_types.h"

extern float DAT_0030e28c;
extern float DAT_0030e290;

// USA 0030E1D8 <- EU 0030E1B4 (Ghidra, non-matching)
// GLOBAL DAT_0030e28c float
// GLOBAL DAT_0030e290 float

undefined4 func_0030E1D8(int *param_1)

{
  uint in_fpscr;
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)(*(float *)(*(int *)(param_1[0x1ed] + 0x14) + 0x14) -
               *(float *)(*(int *)(param_1[0x1ed] + 0x14) + 8));
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = ALBW_AS_F32(param_1[0x26c]);
  fVar3 = fVar3 + (DAT_0030e28c - fVar3) * (DAT_0030e28c / fVar2);
  param_1[0x26c] = (int)ALBW_AS_U32(fVar3);
  *(float *)(param_1[0x1e8] + 0x158) = fVar3;
  iVar1 = *(int *)(param_1[0x1ed] + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0030e290) {
      if (*(float *)(iVar1 + 8) <= DAT_0030e290) goto LAB_0030e260;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_0030e260:
      *(undefined1 *)((int)param_1 + 0x855) = 1;
      (**(code **)(*param_1 + 0xac))(param_1,1,0xffffffff);
      return 1;
    }
  }
  return 0;
}

