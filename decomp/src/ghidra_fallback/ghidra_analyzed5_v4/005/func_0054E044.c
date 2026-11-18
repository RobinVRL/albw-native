#include "ghidra_types.h"

extern int func_0053F294(int param_1);
extern int *DAT_0054e040;

// USA 0054E044 <- EU 0054E01C (Ghidra, non-matching)
// GLOBAL DAT_0054e040 int *

bool func_0054E044(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2cc);
  iVar1 = func_0053F294(*DAT_0054e040);
  return iVar2 == iVar1;
}

