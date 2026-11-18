#include "ghidra_types.h"

extern int func_0010DBBC(int param_1,int *param_2,int param_3,float fparam_0);
extern float DAT_0010bec0;

// USA 0010BEB4 <- EU 0010BEB4 (Ghidra, non-matching)
// GLOBAL DAT_0010bec0 float

undefined4 func_0010BEB4(int param_1,int *param_2)

{
  return func_0010DBBC(param_1,param_2,1,DAT_0010bec0);
}

