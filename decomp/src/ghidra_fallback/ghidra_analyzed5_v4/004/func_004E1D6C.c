#include "ghidra_types.h"

extern int func_004E2030(int param_1);
extern float DAT_004e1db0;

// USA 004E1D6C <- EU 004E1D44 (Ghidra, non-matching)
// GLOBAL DAT_004e1db0 float

undefined4 func_004E1D6C(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x420) == 1) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    *(undefined1 *)(param_1 + 0x4c1) = 0;
  }
  fVar1 = DAT_004e1db0;
  uVar2 = *(uint *)(param_1 + 0x514);
  uVar3 = *(uint *)(param_1 + 0x518);
  bVar4 = uVar2 < uVar3;
  if (bVar4) {
    uVar2 = uVar2 + 1;
  }
  if (bVar4) {
    *(uint *)(param_1 + 0x514) = uVar2;
  }
  fVar5 = (float)VectorSignedToFloat(uVar3 - uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(*(int *)(param_1 + 0x454) + 0x158) = fVar5 * fVar1;
  if (*(uint *)(param_1 + 0x518) <= *(uint *)(param_1 + 0x514)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return func_004E2030(param_1);
}

