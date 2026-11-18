#include "ghidra_types.h"


// USA 0010A884 <- EU 0010A884 (Ghidra, non-matching)

undefined4 func_0010A884(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 != 1) {
    do {
      iVar2 = *param_1;
      if (iVar2 != 0) {
        ClearExclusiveLocal();
        goto LAB_0010a8bc;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -1;
LAB_0010a8bc:
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 1;
}

