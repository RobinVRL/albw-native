#include "ghidra_types.h"

extern uint DAT_0017239c;

// USA 00172380 <- EU 00172380 (Ghidra, non-matching)
// GLOBAL DAT_0017239c uint

void * func_00172380(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + *(int *)(param_1 + 0x2cc);
  if (DAT_0017239c < uVar1) {
    uVar1 = DAT_0017239c;
  }
  *(uint *)(param_1 + 0x2cc) = uVar1;
  return (void *)param_1;
}

