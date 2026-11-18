#include "ghidra_types.h"

extern int func_004E2030(int param_1);
extern int func_004E25B8(int param_1,uint param_2);
extern float DAT_004e1c00;

// USA 004E1B94 <- EU 004E1B6C (Ghidra, non-matching)
// GLOBAL DAT_004e1c00 float

undefined4 func_004E1B94(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  
  uVar1 = *(uint *)(param_1 + 0x514);
  uVar3 = *(uint *)(param_1 + 0x518);
  if (uVar3 <= uVar1) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  if ((*(int *)(param_1 + 0x420) == 1) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    *(undefined1 *)(param_1 + 0x4c1) = 0;
  }
  if (uVar1 < uVar3) {
    iVar2 = uVar1 + 1;
    *(int *)(param_1 + 0x514) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x514);
  }
  fVar4 = (float)VectorSignedToFloat(uVar3 - iVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(*(int *)(param_1 + 0x454) + 0x158) = fVar4 * DAT_004e1c00;
  if (*(uint *)(param_1 + 0x518) <= *(uint *)(param_1 + 0x514)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  func_004E25B8(param_1,*(uint *)(param_1 + 0x518));
  return func_004E2030(param_1);
}

