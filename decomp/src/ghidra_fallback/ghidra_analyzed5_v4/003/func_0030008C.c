#include "ghidra_types.h"


// USA 0030008C <- EU 00300068 (Ghidra, function missing from the decomp table)

uint func_0030008C(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}

