#include "ghidra_types.h"

extern int func_0030CE3C(undefined4 *param_1);
extern int DAT_003a55a8;

// USA 003A55A0 <- EU 003A557C (Ghidra, non-matching)
// GLOBAL DAT_003a55a8 int

undefined4 * func_003A55A0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = func_0030CE3C(param_1);
  iVar1 = DAT_003a55a8;
  *(undefined1 *)((int)piVar2 + 0x145) = 0xff;
  *piVar2 = iVar1;
  piVar2[3] = iVar1 + 0x58;
  *(undefined1 *)((int)piVar2 + 0x146) = 1;
  return piVar2;
}

