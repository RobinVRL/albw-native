#include "ghidra_types.h"


// USA 0040878C <- EU 0040876C (Ghidra, non-matching)

void func_0040878C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    *(float *)(param_1 + 0x78) = *param_2 - *(float *)(param_1 + 0x6c);
    *(float *)(param_1 + 0x7c) = param_2[1] - *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x80) = param_2[2] - *(float *)(param_1 + 0x74);
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  *(float *)(param_1 + 0x74) = param_2[2];
  *(float *)(param_1 + 0x6c) = fVar1;
  *(float *)(param_1 + 0x70) = fVar2;
  *(undefined1 *)(param_1 + 0x84) = 0;
  return;
}

