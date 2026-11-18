#include "ghidra_types.h"


// USA 0010639C <- EU 0010639C (Ghidra, non-matching)
// PARAM param_3 Stack[0x0]:4 undefined4

undefined4 func_0010639C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  software_interrupt(0x25);
  *param_1 = param_2;
  return param_3;
}

