#include "ghidra_types.h"

extern int func_003D2E40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, ushort param_5,undefined2 *param_6);
extern int DAT_003d2a1c;
extern int DAT_003d2a20;

// USA 003D29F4 <- EU 003D29D0 (Ghidra, non-matching)
// GLOBAL DAT_003d2a1c int
// GLOBAL DAT_003d2a20 int

int func_003D29F4(undefined4 param_1,undefined4 param_2,ushort param_3,undefined2 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_003d2a1c;
  if (*(int **)(DAT_003d2a20 + 8) == (int *)0x0) {
    *param_4 = 0;
  }
  else {
    iVar1 = func_003D2E40(*(int **)(DAT_003d2a20 + 8),param_1,0,param_2,param_3,param_4);
  }
  return iVar1;
}

