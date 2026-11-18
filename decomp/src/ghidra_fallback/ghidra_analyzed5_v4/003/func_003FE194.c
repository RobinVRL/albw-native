#include "ghidra_types.h"

extern undefined4 DAT_003fe180;

// USA 003FE194 <- EU 003FE174 (Ghidra, non-matching)
// GLOBAL DAT_003fe180 undefined4

undefined4 * func_003FE194(undefined4 *param_1)

{
  *param_1 = DAT_003fe180;
  return param_1;
}

