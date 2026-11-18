#include "ghidra_types.h"

extern int func_00448ECC(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0046769C(int param_1);

// USA 0043D830 <- EU 0043D810 (Ghidra, non-matching)

undefined4 func_0043D830(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x148) == iVar1)) {
    return func_00448ECC(iVar1,iVar1,*(int *)(param_1 + 0x148),param_4);
  }
  iVar1 = *(int *)(param_1 + 0x150);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x148) == iVar1)) {
    return func_0046769C(iVar1);
  }
  return 0;
}

