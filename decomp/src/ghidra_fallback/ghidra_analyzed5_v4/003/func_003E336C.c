#include "ghidra_types.h"

extern int func_003E3AB4(int *param_1);
extern int DAT_003e335c;

// USA 003E336C <- EU 003E334C (Ghidra, non-matching)
// GLOBAL DAT_003e335c int

undefined4 func_003E336C(undefined4 param_1)

{
  return func_003E3AB4(*(int **)(DAT_003e335c + 0x1c));
}

