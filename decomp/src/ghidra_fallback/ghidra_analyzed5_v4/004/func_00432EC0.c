#include "ghidra_types.h"


// USA 00432EC0 <- EU 00432EA0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 uint

uint * func_00432EC0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  if ((0 < (int)param_5) && (param_2 != 0)) {
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = param_5;
  }
  if ((0 < (int)param_5) && (param_3 != 0)) {
    param_1[5] = param_3;
    param_1[3] = 0;
    param_1[4] = param_5;
  }
  if ((0 < (int)param_5) && (param_4 != 0)) {
    param_1[8] = param_4;
    param_1[6] = 0;
    param_1[7] = param_5;
  }
  if (param_6 <= param_1[1]) {
    *param_1 = param_6;
  }
  if (param_6 <= param_1[4]) {
    param_1[3] = param_6;
  }
  if (param_6 <= param_1[7]) {
    param_1[6] = param_6;
  }
  return param_1;
}

