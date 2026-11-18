#include "ghidra_types.h"


// USA 0052A05C <- EU 0052A034 (Ghidra, non-matching)

bool func_0052A05C(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x11c + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0;
}

