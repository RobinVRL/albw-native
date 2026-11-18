#include "ghidra_types.h"


// USA 0010818C <- EU 0010818C (Ghidra, non-matching)

undefined4 * func_0010818C(undefined4 *param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  return param_1;
}

