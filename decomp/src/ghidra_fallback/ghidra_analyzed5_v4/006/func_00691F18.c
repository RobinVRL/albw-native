#include "ghidra_types.h"


// USA 00691F18 <- EU 00691EF0 (Ghidra, non-matching)

undefined4 func_00691F18(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = VectorFloatToUnsigned(ALBW_AS_F32(param_1),3);
  return uVar1;
}

