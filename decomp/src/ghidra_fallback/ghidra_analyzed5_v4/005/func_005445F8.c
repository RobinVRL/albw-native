#include "ghidra_types.h"

extern float *DAT_00544610;

// USA 005445F8 <- EU 005445D0 (Ghidra, non-matching)
// GLOBAL DAT_00544610 float *

float func_005445F8(int param_1)

{
  float fVar1;
  
  fVar1 = *DAT_00544610;
  if (*(char *)(param_1 + 0x47e) != '\0') {
    if (*(char *)(param_1 + 0x42c) == '\x01') {
      fVar1 = -(*(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x470));
    }
    else {
      fVar1 = *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x470);
    }
  }
  return fVar1;
}

