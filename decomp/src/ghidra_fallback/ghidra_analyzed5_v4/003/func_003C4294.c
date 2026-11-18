#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern float DAT_003c42b4;
extern float DAT_003c42b8;
extern float DAT_003c42bc;

// USA 003C4294 <- EU 003C4270 (Ghidra, non-matching)
// GLOBAL DAT_003c42b4 float
// GLOBAL DAT_003c42b8 float
// GLOBAL DAT_003c42bc float

void func_003C4294(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  puVar1 = (uint *)func_0058A7D4();
  fVar4 = DAT_003c42b4;
  uVar2 = func_00111A64(puVar1);
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x50) = fVar3 * DAT_003c42b8 * fVar4 + DAT_003c42bc;
  return;
}

