#include "ghidra_types.h"

extern int func_002BF358(int param_1);
extern int func_00445EDC(int param_1,undefined4 param_2,undefined4 param_3,int param_4);

// USA 0043C0F0 <- EU 0043C0D0 (Ghidra, non-matching)

undefined4 func_0043C0F0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x148) == iVar1)) {
    return func_00445EDC(iVar1,iVar1,*(int *)(param_1 + 0x148),param_4);
  }
  iVar1 = *(int *)(param_1 + 0x150);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x148) == iVar1)) {
    return func_002BF358(iVar1);
  }
  return 0;
}

