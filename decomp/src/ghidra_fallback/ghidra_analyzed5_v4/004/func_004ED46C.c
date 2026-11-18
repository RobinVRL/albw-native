#include "ghidra_types.h"

extern int func_00351BF0(int param_1,int param_2);

// USA 004ED46C <- EU 004ED444 (Ghidra, non-matching)

undefined4 func_004ED46C(int param_1,int param_2)

{
  return func_00351BF0(*(int *)(param_1 + 0x18),param_2);
}

