#include "ghidra_types.h"

extern int func_00133870(int param_1,uint param_2,int param_3);

// USA 004FB370 <- EU 004FB348 (Ghidra, non-matching)

undefined4 func_004FB370(int param_1,uint param_2,int param_3)

{
  if (*(int *)(param_1 + 0x410) != 0) {
    return func_00133870(*(int *)(param_1 + 0x410),param_2,param_3);
  }
  return 0;
}

