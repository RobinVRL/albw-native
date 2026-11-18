#include "ghidra_types.h"

extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0045012c;

// USA 00450134 <- EU 0045010C (Ghidra, non-matching)
// GLOBAL DAT_0045012c int

undefined4 * func_00450134(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_004B9A10(param_1,0);
  iVar2 = DAT_0045012c + 0x54;
  *piVar1 = DAT_0045012c;
  piVar1[0xe] = iVar2;
  return piVar1;
}

