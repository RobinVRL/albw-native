#include "ghidra_types.h"

extern int func_003D2F54(int *param_1,undefined2 param_2,undefined2 *param_3);
extern int DAT_003d3000;
extern int DAT_003d3004;

// USA 003D2FF8 <- EU 003D2FD4 (Ghidra, non-matching)
// GLOBAL DAT_003d3000 int
// GLOBAL DAT_003d3004 int

int func_003D2FF8(undefined2 param_1,undefined2 *param_2)

{
  int iVar1;
  
  if (*(int **)(DAT_003d3004 + 8) != (int *)0x0) {
    iVar1 = func_003D2F54(*(int **)(DAT_003d3004 + 8),param_1,param_2);
    return iVar1;
  }
  return DAT_003d3000;
}

