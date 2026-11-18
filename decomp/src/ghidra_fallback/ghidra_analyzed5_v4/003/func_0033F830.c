#include "ghidra_types.h"

extern float DAT_0033f89c;
extern float DAT_0033f8a0;
extern float DAT_0033f8a4;
extern float DAT_0033f8a8;
extern float DAT_0033f8ac;

// USA 0033F830 <- EU 0033F80C (Ghidra, non-matching)
// GLOBAL DAT_0033f89c float
// GLOBAL DAT_0033f8a0 float
// GLOBAL DAT_0033f8a4 float
// GLOBAL DAT_0033f8a8 float
// GLOBAL DAT_0033f8ac float

void func_0033F830(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x458);
  if (iVar2 == 0x2c) {
    (**(code **)(*(int *)(param_1 + 800) + 0x34))(param_1 + 800);
  }
  iVar1 = *(int *)(param_1 + 0x40c);
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * DAT_0033f89c;
  fVar4 = DAT_0033f8a4;
  if ((DAT_0033f8a0 < fVar3) && (fVar4 = DAT_0033f8a8, (int)ALBW_AS_U32(fVar3) < 0x3f800000)) {
    fVar4 = DAT_0033f8a4 + DAT_0033f8ac * fVar3;
  }
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x74) = fVar4;
  *(float *)(iVar1 + 0x78) = fVar4;
  *(float *)(iVar1 + 0x7c) = fVar4;
  if (0x3f7fffff < (int)ALBW_AS_U32(fVar3)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

