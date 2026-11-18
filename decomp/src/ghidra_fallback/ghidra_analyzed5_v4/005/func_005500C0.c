#include "ghidra_types.h"


// USA 005500C0 <- EU 00550098 (Ghidra, non-matching)

float func_005500C0(float *param_1,int param_2)

{
  return (param_1[3] - *param_1) * (*(float *)(param_2 + 0x14) - param_1[5]) -
         (param_1[5] - param_1[2]) * (*(float *)(param_2 + 0xc) - param_1[3]);
}

