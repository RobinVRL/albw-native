#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003D306C(int param_1,int param_2);

// USA 00676758 <- EU 00676730 (Ghidra, non-matching)

undefined4 func_00676758(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = (int *)(iVar2 + 0x58);
  func_0010C0C0(piVar1);
  func_003D306C(iVar2,param_2);
  return func_0010C160(piVar1);
}

