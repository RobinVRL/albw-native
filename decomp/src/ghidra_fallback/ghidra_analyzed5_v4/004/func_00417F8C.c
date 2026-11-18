#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_0041D524(int param_1);
extern int func_0041D840(int *param_1);

// USA 00417F8C <- EU 00417F6C (Ghidra, non-matching)

int func_00417F8C(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0041D840(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = func_0041D524(iVar1);
  }
  func_00112364(param_1 + 1,(int)(param_1 + 2),(int *)(iVar1 + 0x1a8));
  return iVar1;
}

