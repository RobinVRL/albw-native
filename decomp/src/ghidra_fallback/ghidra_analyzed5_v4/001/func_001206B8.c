#include "ghidra_types.h"

extern int func_00588BE4(int param_1);
extern int *DAT_0012072c;
extern int *DAT_00120730;
extern int *DAT_00120734;
extern int *DAT_00120738;
extern int *DAT_0012073c;

// GLOBAL DAT_0012072c int *
// GLOBAL DAT_00120730 int *
// GLOBAL DAT_00120734 int *
// GLOBAL DAT_00120738 int *
// GLOBAL DAT_0012073c int *
// USA 001206B8 <- EU 001206B8 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_001206B8(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = func_00588BE4(param_1);
  if ((((iVar1 == *DAT_0012072c) || (iVar1 == *DAT_00120730)) || (iVar1 == *DAT_00120734)) ||
     ((iVar1 == *DAT_00120738 || (iVar1 == *DAT_0012073c)))) {
    *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  }
  return;
}

