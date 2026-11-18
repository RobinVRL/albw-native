#include "ghidra_types.h"

extern int func_00540488(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_0054045c;

// USA 00540448 <- EU 00540420 (Ghidra, non-matching)
// GLOBAL DAT_0054045c int *

undefined4 func_00540448(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = func_00587FCC(*DAT_0054045c,param_2);
  if (iVar2 != -1) {
    uVar3 = func_00540488(iVar1,iVar2);
    return uVar3;
  }
  return 0;
}

