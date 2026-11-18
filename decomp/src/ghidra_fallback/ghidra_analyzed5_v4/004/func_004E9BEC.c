#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);

// USA 004E9BEC <- EU 004E9BC4 (Ghidra, non-matching)

undefined4 func_004E9BEC(int param_1,int *param_2,int param_3)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    return func_001507D8(*(int *)(param_1 + 0x58),param_2,param_3);
  }
  return 0;
}

