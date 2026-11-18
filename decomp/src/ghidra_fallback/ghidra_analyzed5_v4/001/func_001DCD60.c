#include "ghidra_types.h"

extern int func_00552FDC(int param_1,float fparam_0);
extern int func_005531F8(int param_1,int *param_2);

// USA 001DCD60 <- EU 001DCD60 (Ghidra, non-matching)

undefined4 func_001DCD60(int param_1,int *param_2,float fparam_0)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_00552FDC(*(int *)(param_1 + 0x604),fparam_0);
  if ((iVar1 == 0) || (iVar1 = func_005531F8(*(int *)(param_1 + 0x604),param_2), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

