#include "ghidra_types.h"


// USA 0054E224 <- EU 0054E1FC (Ghidra, non-matching)

undefined4 func_0054E650(float fparam_0,float fparam_1,float fparam_2)

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

