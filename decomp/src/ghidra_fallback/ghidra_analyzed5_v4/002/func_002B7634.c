#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern float DAT_002b76c8;
extern float DAT_002b76cc;
extern float DAT_002b76d0;
extern float DAT_002b76d4;

// USA 002B7634 <- EU 002B7610 (Ghidra, non-matching)
// GLOBAL DAT_002b76c8 float
// GLOBAL DAT_002b76cc float
// GLOBAL DAT_002b76d0 float
// GLOBAL DAT_002b76d4 float

void func_002B7634(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x935) == '\x03') {
    fVar5 = DAT_002b76c8;
    puVar1 = (uint *)func_0058A7D4();
    fVar4 = DAT_002b76d4;
    uVar2 = func_00111A64(puVar1);
    fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar3 * fVar5 * fVar4 + fVar4;
  }
  else {
    fVar5 = DAT_002b76c8;
    puVar1 = (uint *)func_0058A7D4();
    fVar4 = DAT_002b76cc;
    uVar2 = func_00111A64(puVar1);
    fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar3 * fVar5 * fVar4 + DAT_002b76d0;
  }
  *(float *)(param_1 + 0xa14) = fVar4;
  *(undefined4 *)(param_1 + 0xa18) = 0x40000000;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  if ((uint)((ulonglong)uVar2 * 0x65 >> 0x20) < 0x33) {
    *(int *)(param_1 + 0xa18) = -*(int *)(param_1 + 0xa18);
  }
  return;
}

