#include "ghidra_types.h"

extern int func_00294D18(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00294530;

// USA 002944C4 <- EU 002944EC (Ghidra, non-matching)
// GLOBAL DAT_00294530 int *

undefined4 func_002944C4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = func_00587FCC(*DAT_00294530,param_2);
  if (iVar2 != -1) {
    return func_00294D18(iVar1,iVar2);
  }
  *(uint *)(iVar1 + 0x128) = *(uint *)(iVar1 + 0x128) | 0x10;
  return 0;
}

