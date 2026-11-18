#include "ghidra_types.h"

extern undefined4 DAT_0048cf44;

// USA 0048CF5C <- EU 0048CF34 (Ghidra, non-matching)
// GLOBAL DAT_0048cf44 undefined4

undefined4 * func_0048CF5C(undefined4 *param_1)

{
  *param_1 = DAT_0048cf44;
  param_1[1] = 0;
  return param_1;
}

