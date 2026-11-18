#include "ghidra_types.h"

extern int func_0058FA5C();
extern undefined4 DAT_001b7d60;

// USA 001B7D38 <- EU 001B7D38 (Ghidra, non-matching)
// GLOBAL DAT_001b7d60 undefined4

undefined4 * func_001B7D38(undefined4 *param_1)

{
  *param_1 = DAT_001b7d60;
  func_0058FA5C(param_1[6]);
  func_0058FA5C(param_1[7]);
  return param_1;
}

