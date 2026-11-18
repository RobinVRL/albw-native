#include "ghidra_types.h"

extern int func_003DCBB0(char *param_1,int param_2,float fparam_0);
extern char *DAT_003de174;

// USA 003DE188 <- EU 003DE168 (Ghidra, non-matching)
// GLOBAL DAT_003de174 char *

undefined4 func_003DE188(int param_1,float fparam_0)

{
  return func_003DCBB0(DAT_003de174,param_1,fparam_0);
}

