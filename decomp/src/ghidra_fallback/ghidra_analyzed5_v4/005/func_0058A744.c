#include "ghidra_types.h"


// USA 0058A744 <- EU 0058A71C (Ghidra, non-matching)

undefined4 func_0058A744(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x4dc);
  if (((cVar1 == '\0' || cVar1 == '\x02') || (cVar1 == '\x03' || cVar1 == '\x01')) &&
     (0 < *(short *)(param_1 + 0x50e))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

