#include "ghidra_types.h"

extern int func_004F7A60(int param_1,int param_2);
extern int func_004F8998(int *param_1,int param_2,char *param_3);

// USA 001AE8FC <- EU 001AE8FC (Ghidra, non-matching)

undefined4 func_001AE8FC(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_004F7A60((int)param_1,param_2);
  if ((iVar1 == 0) || (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

