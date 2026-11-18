// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0050B78C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b2a0;

// USA 0060B2A0 <- EU 0060B278 (Ghidra, non-matching)
// GLOBAL DAT_0060b2a0 undefined4

undefined4 func_0060B2A0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0010BAB4(DAT_0060b2a0);
  if (iVar1 != 0) {
    return func_0050B78C(iVar1,param_1);
  }
  return 0;
}

