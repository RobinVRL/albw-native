#include "ghidra_types.h"


// USA 00396978 <- EU 00396954 (Ghidra, non-matching)

bool func_00396978(undefined4 param_1,int param_2)

{
  return (*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x60;
}

