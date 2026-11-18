#include "ghidra_types.h"

extern int func_00453A7C(undefined4 *param_1);
extern int DAT_0047f020;

// USA 0047F02C <- EU 0047F004 (Ghidra, non-matching)
// GLOBAL DAT_0047f020 int

int * func_0047F02C(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_00453A7C(param_1);
  iVar2 = DAT_0047f020 + 0x5c;
  *piVar1 = DAT_0047f020;
  piVar1[0xe] = iVar2;
  return piVar1;
}

