#include "ghidra_types.h"

extern undefined4 DAT_0048d89c;

// USA 0048D8B8 <- EU 0048D890 (Ghidra, non-matching)
// GLOBAL DAT_0048d89c undefined4

undefined4 * func_0048D8B8(undefined4 *param_1)

{
  *param_1 = DAT_0048d89c;
  return param_1;
}

