#include "ghidra_types.h"

extern int func_0049C008();
extern int DAT_0048a298;

// USA 0048A2A0 <- EU 0048A278 (Ghidra, non-matching)
// GLOBAL DAT_0048a298 int

int * func_0048A2A0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0048a298 + 0x4c;
  *param_1 = DAT_0048a298;
  param_1[0x1e] = 3;
  param_1[6] = iVar2;
  piVar1 = (int *)func_0049C008(param_1);
  return piVar1;
}

