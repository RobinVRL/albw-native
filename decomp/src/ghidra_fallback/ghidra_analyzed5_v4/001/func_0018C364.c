#include "ghidra_types.h"


// USA 0018C364 <- EU 0018C364 (Ghidra, non-matching)

undefined4 func_0018C364(int param_1,int param_2)

{
  *(bool *)(param_1 + 0x4f3) = (*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x180;
  return 1;
}

