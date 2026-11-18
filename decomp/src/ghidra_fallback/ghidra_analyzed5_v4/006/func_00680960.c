#include "ghidra_types.h"

extern undefined4 DAT_00680944;

// USA 00680960 <- EU 00680938 (Ghidra, non-matching)
// GLOBAL DAT_00680944 undefined4

undefined4 * func_00680960(undefined4 *param_1)

{
  *param_1 = DAT_00680944;
  return param_1;
}

