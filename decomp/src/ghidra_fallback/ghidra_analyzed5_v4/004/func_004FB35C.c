#include "ghidra_types.h"

extern int func_00133870(int param_1,uint param_2,int param_3);

// USA 004FB35C <- EU 004FB334 (Ghidra, non-matching)

undefined4 func_004FB35C(int param_1,uint param_2,int param_3)

{
  if (*(int *)(param_1 + 0x418) != 0) {
    return func_00133870(*(int *)(param_1 + 0x418),param_2,param_3);
  }
  return 0;
}

