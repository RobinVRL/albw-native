#include "ghidra_types.h"

extern undefined4 DAT_006806d4;

// USA 006806F0 <- EU 006806C8 (Ghidra, non-matching)
// GLOBAL DAT_006806d4 undefined4

undefined4 * func_006806F0(undefined4 *param_1)

{
  *param_1 = DAT_006806d4;
  return param_1;
}

