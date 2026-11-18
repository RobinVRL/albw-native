#include "ghidra_types.h"

extern int func_006632F0(undefined4 *param_1,undefined1 param_2);

// USA 002C76B8 <- EU 002C7694 (Ghidra, non-matching)

void func_002C76B8(int param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x46a) == '\0') {
    if (*(short *)(param_1 + 0x464) < 1) {
      if (*(char *)(param_1 + 0x468) == '\0') {
        *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + 0x4000000;
        *(float *)(param_1 + 0x3d0) =
             *(float *)(param_1 + 0x3d0) + *(float *)(param_1 + 0x434) * *(float *)(param_1 + 0x45c)
        ;
        fVar1 = *(float *)(param_1 + 0x3d8) +
                *(float *)(param_1 + 0x430) * *(float *)(param_1 + 0x45c);
      }
      else {
        *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + -0x4000000;
        *(float *)(param_1 + 0x3d0) =
             *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x434) * *(float *)(param_1 + 0x45c)
        ;
        fVar1 = *(float *)(param_1 + 0x3d8) -
                *(float *)(param_1 + 0x430) * *(float *)(param_1 + 0x45c);
      }
      *(float *)(param_1 + 0x3d8) = fVar1;
      return;
    }
    *(short *)(param_1 + 0x464) = *(short *)(param_1 + 0x464) + -1;
  }
  else {
    func_006632F0((undefined4 *)(param_1 + 0x40c),2);
  }
  return;
}

