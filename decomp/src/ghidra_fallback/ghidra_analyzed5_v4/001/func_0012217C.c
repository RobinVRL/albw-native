#include "ghidra_types.h"


// USA 0012217C <- EU 0012217C (Ghidra, non-matching)

void * func_0012217C(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 500) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 500) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 500) = 2;
  }
  return (void *)param_1;
}

