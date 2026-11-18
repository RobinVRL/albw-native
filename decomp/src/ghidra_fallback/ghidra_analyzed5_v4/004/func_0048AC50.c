#include "ghidra_types.h"

extern undefined4 DAT_0048ac34;

// USA 0048AC50 <- EU 0048AC28 (Ghidra, non-matching)
// GLOBAL DAT_0048ac34 undefined4

undefined4 * func_0048AC50(undefined4 *param_1)

{
  *param_1 = DAT_0048ac34;
  return param_1;
}

