#include "ghidra_types.h"

extern int func_002BF358(int param_1);
extern int func_00448E30(int param_1);

// USA 0043D7EC <- EU 0043D7CC (Ghidra, non-matching)

undefined4 func_0043D7EC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x148) == iVar1)) {
    return func_00448E30(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x150);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x148) == iVar1)) {
    return func_002BF358(iVar1);
  }
  return 0;
}

