#include "ghidra_types.h"

extern int func_004FC78C(int param_1,undefined2 param_2);
extern void func_0065E398();
extern float DAT_0021fa38;

// USA 0021F9A8 <- EU 0021F9A8 (Ghidra, non-matching)
// GLOBAL DAT_0021fa38 float

void func_0021F9A8(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  
  if (*(uint *)(param_1 + 0xa68) < *(uint *)(param_1 + 0xa6c)) {
    *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
  }
  else {
    if (*(char *)(param_1 + 0xafe) != '\0') {
      func_004FC78C(param_1,0x20);
      *(undefined1 *)(param_1 + 0xafe) = 0;
    }
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0x11,in_s0);
  }
  iVar1 = *(int *)(param_1 + 0xa6c) - *(int *)(param_1 + 0xa68);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d4) =
       *(float *)(param_1 + 0x3d4) +
       (*(float *)(param_1 + 0xa58) - *(float *)(param_1 + 0x3d4)) * (DAT_0021fa38 / fVar2);
  return;
}

