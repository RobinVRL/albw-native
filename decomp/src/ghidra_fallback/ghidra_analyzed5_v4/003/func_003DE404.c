#include "ghidra_types.h"

extern int func_003DC538(int param_1,int param_2,int param_3);
extern int DAT_003de410;
extern int DAT_003de414;

// USA 003DE404 <- EU 003DE3E4 (Ghidra, non-matching)
// GLOBAL DAT_003de410 int
// GLOBAL DAT_003de414 int

undefined4 func_003DE404(int param_1,int param_2)

{
  if (DAT_003de410 < param_2) {
    param_2 = DAT_003de410;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x20) = param_2;
  return func_003DC538(DAT_003de414,param_1,param_2);
}

