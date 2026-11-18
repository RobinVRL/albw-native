#include "ghidra_types.h"

extern undefined4 DAT_0019b5f8;

// USA 0019B5EC <- EU 0019B5EC (Ghidra, non-matching)
// GLOBAL DAT_0019b5f8 undefined4

undefined4 * func_0019B5EC(undefined4 *param_1)

{
  *param_1 = DAT_0019b5f8;
  return param_1;
}

