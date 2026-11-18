#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);

// USA 004EA104 <- EU 004EA0DC (Ghidra, non-matching)

undefined4 func_004EA104(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    uVar1 = func_00150A84(*(int **)(param_1 + 0x58),param_2,param_3);
    return uVar1;
  }
  return 0;
}

