#include "ghidra_types.h"


// USA 00562A88 <- EU 00562A60 (Ghidra, non-matching)

uint * func_00562A88(byte *param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_2 = (uint)param_1[0xc] | (uint)param_1[0xb] << 10 | (uint)param_1[10] << 0x14;
  param_2[1] = (uint)bVar1 * 0x10 + 0x140 | 0x803f0000;
  param_2[2] = (uint)param_1[0xe] << 10 | (uint)param_1[0xd] << 0x14 | (uint)param_1[0xf];
  param_2[3] = (uint)param_1[5] << 10 | (uint)param_1[4] << 0x14 | (uint)param_1[6];
  param_2[4] = (uint)param_1[9] | (uint)param_1[8] << 10 | (uint)param_1[7] << 0x14;
  param_2[5] = 0;
  return param_2 + 6;
}

