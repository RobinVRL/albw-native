#include "ghidra_types.h"

extern int func_003DDE0C(char *param_1,float fparam_0);
extern char *DAT_003dcb54;

// USA 003DCB58 <- EU 003DCB38 (Ghidra, non-matching)
// GLOBAL DAT_003dcb54 char *

undefined4 func_003DCB58(char *param_1,float fparam_0)

{
  if (*param_1 != '\0') {
    *(float *)(param_1 + 4) = fparam_0;
    return func_003DDE0C(DAT_003dcb54,fparam_0);
  }
  return 0;
}

