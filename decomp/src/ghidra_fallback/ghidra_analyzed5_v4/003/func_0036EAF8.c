#include "ghidra_types.h"

extern float DAT_0036eaf8;
extern float DAT_0036eafc;
extern float DAT_0036eb00;

// USA 0036EAF8 <- EU 0036EAD4 (Ghidra, non-matching)
// GLOBAL DAT_0036eaf8 float
// GLOBAL DAT_0036eafc float
// GLOBAL DAT_0036eb00 float

float func_0036EAF8(undefined4 param_1,int param_2)

{
  return ((*(float *)(*(int *)(param_2 + 0xa88) + 0x74) - DAT_0036eaf8) / DAT_0036eafc) *
         DAT_0036eb00;
}

