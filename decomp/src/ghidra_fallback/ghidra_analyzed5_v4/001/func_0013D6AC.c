#include "ghidra_types.h"

extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0013d790;
extern float DAT_0013d794;
extern float DAT_0013d798;
extern float DAT_0013d79c;

// USA 0013D6AC <- EU 0013D6AC (Ghidra, non-matching)
// GLOBAL DAT_0013d790 float
// GLOBAL DAT_0013d794 float
// GLOBAL DAT_0013d798 float
// GLOBAL DAT_0013d79c float

undefined4 func_0013D6AC(int param_1,float fparam_0)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_0013d790;
  uVar1 = *(uint *)(param_1 + 0x51c);
  uVar2 = *(uint *)(param_1 + 0x520);
  bVar3 = uVar1 < uVar2;
  if (bVar3) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0x51c) = uVar1;
  }
  fVar4 = DAT_0013d794;
  if ((uVar2 != 0 && uVar1 != 0) && (fVar4 = fVar6, uVar1 < uVar2)) {
    fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * *(float *)(param_1 + 0x524);
  }
  fVar5 = fVar4 * DAT_0013d798 - fVar6;
  fVar5 = (fVar6 - fVar5 * fVar5) * DAT_0013d79c;
  *(float *)(param_1 + 0x3d0) =
       *(float *)(param_1 + 0x584) +
       (*(float *)(param_1 + 0x554) - *(float *)(param_1 + 0x584)) * fVar4;
  fVar6 = *(float *)(param_1 + 0x588) +
          (*(float *)(param_1 + 0x558) - *(float *)(param_1 + 0x588)) * fVar4;
  *(float *)(param_1 + 0x3d4) = fVar6;
  *(float *)(param_1 + 0x3d8) =
       *(float *)(param_1 + 0x58c) +
       (*(float *)(param_1 + 0x55c) - *(float *)(param_1 + 0x58c)) * fVar4;
  *(float *)(param_1 + 0x3d4) = fVar6 + fVar5;
  if (!bVar3) {
    return func_0065743C((undefined4 *)(param_1 + 0x4f8),0);
  }
  return 0;
}

