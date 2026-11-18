#include "ghidra_types.h"

extern int func_001E6A6C(int param_1,int *param_2);
extern int func_001E6AB4(int param_1);
extern int *DAT_0038862c;

// USA 0038862C <- EU 00388608 (Ghidra, non-matching)
// GLOBAL DAT_0038862c int *

undefined4 func_0038862C(int param_1)

{
  if (*(char *)(param_1 + 0xa06) != '\0') {
    *(undefined1 *)(param_1 + 0xa06) = 0;
    return func_001E6A6C(param_1,DAT_0038862c);
  }
  return func_001E6AB4(param_1);
}

