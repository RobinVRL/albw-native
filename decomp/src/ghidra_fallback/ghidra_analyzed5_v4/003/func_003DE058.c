#include "ghidra_types.h"

extern int func_003DF474(int param_1,undefined2 param_2);
extern int DAT_003de040;

// USA 003DE058 <- EU 003DE038 (Ghidra, non-matching)
// GLOBAL DAT_003de040 int

bool func_003DE058(undefined4 param_1,undefined2 param_2)

{
  bool bVar1;
  
  bVar1 = func_003DF474(DAT_003de040,param_2);
  return bVar1;
}

