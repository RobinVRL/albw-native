#include "ghidra_types.h"


// USA 003BD480 <- EU 003BD45C (Ghidra, non-matching)

undefined4 func_003BD480(int *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1[0x12] + 0x918) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  cVar1 = (char)param_1[0x1c];
  if ((cVar1 != '\x05' && cVar1 != '\x03') && cVar1 != '\x04') {
    (**(code **)(*param_1 + 0xf8))(param_1,0);
    return 1;
  }
  return 1;
}

