#include "ghidra_types.h"

extern float DAT_002d4050;
extern float DAT_002d4054;
extern float DAT_002d4058;

// USA 002D404C <- EU 002D4028 (Ghidra, non-matching)
// GLOBAL DAT_002d4050 float
// GLOBAL DAT_002d4054 float
// GLOBAL DAT_002d4058 float

void func_002D404C(int param_1)

{
  float fVar1;
  
  fVar1 = DAT_002d4050;
  if (*(char *)(*(int *)(param_1 + 0x5f8) + 0x38) == '\0') {
    fVar1 = DAT_002d4054;
  }
  *(float *)(*(int *)(param_1 + 0x5f8) + 0x10) = fVar1 * DAT_002d4058;
  return;
}

