#include "ghidra_types.h"

extern undefined4 DAT_0010c904;

// USA 0010C8F8 <- EU 0010C8F8 (Ghidra, non-matching)
// GLOBAL DAT_0010c904 undefined4

undefined4 * func_0010C8F8(undefined4 *param_1)

{
  *param_1 = DAT_0010c904;
  return param_1;
}

