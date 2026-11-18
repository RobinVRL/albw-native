#include "ghidra_types.h"

extern int func_003DCB98(int param_1,float fparam_0);
extern int DAT_003ddb44;

// USA 003DDB5C <- EU 003DDB3C (Ghidra, non-matching)
// GLOBAL DAT_003ddb44 int

undefined4 func_003DDB5C(float fparam_0)

{
  return func_003DCB98(DAT_003ddb44,fparam_0);
}

