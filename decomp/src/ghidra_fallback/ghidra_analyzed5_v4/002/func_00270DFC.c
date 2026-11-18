#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);

// USA 00270DFC <- EU 00270E24 (Ghidra, non-matching)

undefined4 * func_00270DFC(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0010B3EC(param_1,0x10,(int)(param_1 + 3));
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 2;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  return param_1;
}

