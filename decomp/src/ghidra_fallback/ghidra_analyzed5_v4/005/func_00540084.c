#include "ghidra_types.h"


// USA 00540084 <- EU 0054005C (Ghidra, non-matching)

undefined4 func_00540084(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 != 100) {
    if (sVar1 < 0x65) {
      if ((sVar1 != 0x59 && sVar1 != 0x5d) && sVar1 != 99) {
        return 1;
      }
    }
    else if ((sVar1 != 0x65 && sVar1 != 0x66) && sVar1 != 0x89) {
      return 1;
    }
  }
  return 0;
}

