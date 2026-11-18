#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int DAT_00297958;

// USA 002978FC <- EU 00297924 (Ghidra, non-matching)
// GLOBAL DAT_00297958 int

void * func_002978FC(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_0010DA7C((undefined4 *)(param_1 + 4),0,3);
  iVar2 = DAT_00297958 + 0x30;
  piVar1[-1] = DAT_00297958;
  *piVar1 = iVar2;
  piVar1[4] = param_2;
  piVar1[5] = param_3;
  return piVar1 + -1;
}

