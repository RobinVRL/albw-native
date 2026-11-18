#include "ghidra_types.h"

extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);

// USA 002ECA9C <- EU 002ECA78 (Ghidra, non-matching)

undefined4 func_002ECA9C(int param_1)

{
  char cVar1;
  float in_s0;
  
  cVar1 = *(char *)(param_1 + 0x8cc);
  if ((cVar1 != '\x0e' && cVar1 != '\x0f') && cVar1 != '\x10') {
    if ((cVar1 == '\x11' || cVar1 == '\x12') ||
       ((cVar1 == '!' &&
        (*(char *)(param_1 + 0x8cd) == '\x11' || *(char *)(param_1 + 0x8cd) == '\x12')))) {
      *(undefined1 *)(param_1 + 0xd3d) = 1;
    }
    return 0;
  }
  return func_006640EC((undefined4 *)(param_1 + 0x8c8),10,in_s0);
}

