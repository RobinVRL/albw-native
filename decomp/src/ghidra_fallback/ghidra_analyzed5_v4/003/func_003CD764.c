#include "ghidra_types.h"


// USA 003CD764 <- EU 003CD740 (Ghidra, non-matching)

undefined4 func_003CD764(int *param_1)

{
  bool bVar1;
  
  do {
    if (*param_1 < 1) {
      ClearExclusiveLocal();
      return 0;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -*param_1;
  return 1;
}

