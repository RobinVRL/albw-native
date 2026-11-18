#include "ghidra_types.h"

extern int func_003DCB58(char *param_1,float fparam_0);
extern char *DAT_003dd758;

// USA 003DD770 <- EU 003DD750 (Ghidra, non-matching)
// GLOBAL DAT_003dd758 char *

undefined4 func_003DD770(float fparam_0)

{
  return func_003DCB58(DAT_003dd758,fparam_0);
}

