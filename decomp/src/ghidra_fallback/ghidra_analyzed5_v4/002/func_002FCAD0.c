#include "ghidra_types.h"

extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int *DAT_00165f84;

// USA 002FCAD0 <- EU 002FCAAC (Ghidra, non-matching)
// GLOBAL DAT_00165f84 int *

undefined4 func_00165F3C(int *param_1,int param_2)

{
  char cVar1;
  
  if ((*DAT_00165f84 != 0) && (cVar1 = func_004CDDEC(*DAT_00165f84,param_1,param_2), cVar1 != '\0'))
  {
    *(undefined1 *)((int)param_1 + 0xfb) = 0;
    return 1;
  }
  return 0;
}

