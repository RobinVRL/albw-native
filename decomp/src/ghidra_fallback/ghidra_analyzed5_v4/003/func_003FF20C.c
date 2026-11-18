#include "ghidra_types.h"

extern int func_003FDE18(int *param_1,char *param_2,int param_3,undefined1 param_4);
extern int func_003FDEA8(int param_1,int param_2);

// USA 003FF20C <- EU 003FF1EC (Ghidra, non-matching)

int func_003FF20C(int *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = func_003FDEA8((int)(param_1 + 9),(int)param_2);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2), iVar1 != 0)) {
    func_003FDE18(param_1 + 9,param_2,iVar1,1);
  }
  return iVar1;
}

