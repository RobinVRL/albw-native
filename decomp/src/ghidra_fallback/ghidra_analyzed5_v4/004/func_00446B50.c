#include "ghidra_types.h"

extern int func_0051A988(int param_1,int param_2,float fparam_0,float fparam_1);
extern int *DAT_00446b34;

// USA 00446B50 <- EU 00446B28 (Ghidra, non-matching)
// GLOBAL DAT_00446b34 int *

undefined4 func_00446B50(undefined4 param_1,int param_2,float fparam_0,float fparam_1)

{
  return func_0051A988(*DAT_00446b34,param_2,fparam_0,fparam_1);
}

