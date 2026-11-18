#include "ghidra_types.h"

extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_001ab874;
extern float DAT_001ab878;

// USA 001AB7E8 <- EU 001AB7E8 (Ghidra, non-matching)
// GLOBAL DAT_001ab874 undefined4
// GLOBAL DAT_001ab878 float

undefined4 func_001AB7E8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  
  uVar2 = *(uint *)(param_1 + 0x944);
  uVar4 = *(uint *)(param_1 + 0x948);
  if (uVar2 < uVar4) {
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0x944) = uVar2;
  }
  uVar1 = DAT_001ab874;
  iVar3 = *(int *)(param_1 + 0x40c);
  if (uVar2 < uVar4) {
    fVar5 = DAT_001ab878;
    if (uVar4 != 0 && uVar2 != 0) {
      fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar5 * *(float *)(param_1 + 0x94c);
    }
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x158) = fVar5;
    }
    *(float *)(param_1 + 0x9b8) = fVar5;
    return 0;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x158) = DAT_001ab874;
  }
  *(undefined4 *)(param_1 + 0x9b8) = uVar1;
  return func_0065AC0C((undefined4 *)(param_1 + 0x8bc),2);
}

