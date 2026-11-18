#include "ghidra_types.h"

extern int func_00280948(int param_1);
extern int func_002809C4(int param_1);
extern int func_006610B4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002806f4;
extern float DAT_002806f8;

// USA 00280640 <- EU 00280668 (Ghidra, non-matching)
// GLOBAL DAT_002806f4 float
// GLOBAL DAT_002806f8 float

undefined4 func_00280640(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat
                           ((*(uint *)(param_1 + 0x43c) & 2) >> 1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d0) = *(float *)(param_1 + 0x464) + fVar1 * DAT_002806f4;
  func_00280948(param_1);
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) + DAT_002806f8;
  if (*(uint *)(param_1 + 0x440) <= *(uint *)(param_1 + 0x43c)) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x464);
    func_006610B4((undefined4 *)(param_1 + 0x418),2);
    return func_002809C4(param_1);
  }
  *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) + 1;
  return 0;
}

