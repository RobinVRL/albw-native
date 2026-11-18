#include "ghidra_types.h"


// USA 00542AE4 <- EU 00542ABC (Ghidra, non-matching)

undefined4 func_00542AE4(int param_1,uint param_2)

{
  byte bVar1;
  
  if ((param_2 < 0x21) &&
     ((bVar1 = *(byte *)(param_1 + 4), bVar1 == 0 ||
      ((bVar1 < 0x15 && ((param_2 != 3 || (bVar1 < 4)))))))) {
    return 1;
  }
  return 0;
}

