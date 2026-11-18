#include "ghidra_types.h"


// USA 0054E64C <- EU 0054E624 (Ghidra, non-matching)

undefined4 func_0054E64C(undefined4 param_1,float fparam_0,float fparam_1,float fparam_2)

{
  undefined4 uVar1;
  
  if ((fparam_1 + fparam_2 < fparam_0) || (fparam_0 < fparam_1 - fparam_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

