#include "ghidra_types.h"

extern int func_003D2D7C(int *param_1,undefined2 param_2,undefined1 *param_3);
extern int DAT_003d2950;
extern int DAT_003d2954;

// USA 003D2948 <- EU 003D2924 (Ghidra, non-matching)
// GLOBAL DAT_003d2950 int
// GLOBAL DAT_003d2954 int

int func_003D2948(undefined2 param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (*(int **)(DAT_003d2954 + 8) != (int *)0x0) {
    iVar1 = func_003D2D7C(*(int **)(DAT_003d2954 + 8),param_1,param_2);
    return iVar1;
  }
  return DAT_003d2950;
}

