#include "ghidra_types.h"

extern int func_00401D90(int param_1,uint *param_2);

// USA 004030E4 <- EU 004030C4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int

uint * func_004030E4(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (((0x17 < (uint)*(byte *)(param_1 + 0x30) + param_3) ||
      (0x20 < (uint)*(byte *)(param_1 + 0x31) + param_4)) ||
     (0x20 < (uint)*(byte *)(param_1 + 0x33) + param_5)) {
    if (*(byte *)(param_1 + 0x30) != 0) {
      param_2 = (uint *)func_00401D90(param_1,param_2);
    }
    if (param_6 != 0) {
      *(undefined1 *)(param_1 + 0x31) = 0;
      *(undefined1 *)(param_1 + 0x32) = 0;
    }
  }
  return param_2;
}

