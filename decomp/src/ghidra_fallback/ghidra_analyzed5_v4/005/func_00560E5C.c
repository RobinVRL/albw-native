#include "ghidra_types.h"


// USA 00560E5C <- EU 00560E34 (Ghidra, non-matching)

int func_00560E5C(int *param_1,int param_2)

{
  return *(int *)(*param_1 + param_2 * 4 + 4) + *param_1;
}

