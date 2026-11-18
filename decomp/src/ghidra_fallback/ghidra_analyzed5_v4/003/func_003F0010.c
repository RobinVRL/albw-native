#include "ghidra_types.h"


// USA 003F0010 <- EU 003EFFF0 (Ghidra, non-matching)

void func_003F0010(int param_1)

{
  int *unaff_r4;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x30c);
  fVar1 = ALBW_AS_F32(unaff_r4[9]) + *(float *)(param_1 + 0x308);
  unaff_r4[8] = (int)ALBW_AS_U32((ALBW_AS_F32(unaff_r4[8]) + *(float *)(param_1 + 0x304)));
  unaff_r4[9] = (int)ALBW_AS_U32(fVar1);
  unaff_r4[10] = (int)ALBW_AS_U32((ALBW_AS_F32(unaff_r4[10]) + fVar2));
  fVar2 = *(float *)(param_1 + 0x300);
  unaff_r4[8] = (int)ALBW_AS_U32((ALBW_AS_F32(unaff_r4[8]) * fVar2));
  unaff_r4[9] = (int)ALBW_AS_U32((fVar1 * fVar2));
  unaff_r4[10] = (int)ALBW_AS_U32((ALBW_AS_F32(unaff_r4[10]) * fVar2));
  *unaff_r4 = *unaff_r4 + 1;
  return;
}

