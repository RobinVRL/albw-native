#include "ghidra_types.h"

extern undefined4 DAT_004137c0;

// USA 004137D4 <- EU 004137B4 (Ghidra, non-matching)
// GLOBAL DAT_004137c0 undefined4

undefined4 * func_004137D4(undefined4 *param_1)

{
  *param_1 = DAT_004137c0;
  return param_1;
}

