#include "ghidra_types.h"

extern int func_0010DBBC(int param_1,int *param_2,int param_3,float fparam_0);
extern float DAT_00352180;

// USA 00352198 <- EU 00352174 (Ghidra, non-matching)
// GLOBAL DAT_00352180 float

undefined4 func_00352198(int param_1,int *param_2)

{
  return func_0010DBBC(param_1,param_2,2,DAT_00352180);
}

