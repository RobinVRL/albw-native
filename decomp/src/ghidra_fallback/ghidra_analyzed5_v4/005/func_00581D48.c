#include "ghidra_types.h"

extern int func_0053B588(int param_1,float *param_2);

// USA 00581D48 <- EU 00581D20 (Ghidra, non-matching)

int func_00581D48(int param_1,float *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = func_0053B588(*(int *)(param_1 + 0x38),param_2);
    return iVar1;
  }
  return 0xffffffff;
}

