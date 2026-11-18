#include "ghidra_types.h"

extern int func_003DE034(int param_1,int param_2);
extern int DAT_003dcbd4;

// USA 003DCBEC <- EU 003DCBCC (Ghidra, non-matching)
// GLOBAL DAT_003dcbd4 int

undefined4 func_003DCBEC(undefined4 param_1,int param_2)

{
  return func_003DE034(DAT_003dcbd4,param_2);
}

