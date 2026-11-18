#include "ghidra_types.h"


// USA 003DA36C <- EU 003DA34C (Ghidra, non-matching)

void * func_003DA36C(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_3;
  return (void *)param_1;
}

