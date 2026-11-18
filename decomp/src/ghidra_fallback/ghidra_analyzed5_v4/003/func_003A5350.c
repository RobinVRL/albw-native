#include "ghidra_types.h"

extern int func_0058D840(int param_1);
extern int func_0058DA24(int param_1);
extern int *DAT_003a5388;

// USA 003A5350 <- EU 003A532C (Ghidra, non-matching)
// GLOBAL DAT_003a5388 int *

undefined4 func_003A5350(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_003a5388;
  if (*DAT_003a5388 != 0) {
    iVar2 = func_0058D840(*DAT_003a5388);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*piVar1 != 0) && (iVar2 = func_0058DA24(*piVar1), iVar2 != 0)) {
      (**(code **)(*param_1 + 0x34))(param_1);
    }
  }
  return 0;
}

