#include "ghidra_types.h"

extern int func_0048D1B0();
extern undefined4 DAT_0048d484;
extern undefined4 *DAT_0048d488;

// USA 0048D484 <- EU 0048D45C (Ghidra, non-matching)
// GLOBAL DAT_0048d484 undefined4
// GLOBAL DAT_0048d488 undefined4 *

undefined4 func_0048D484(undefined4 *param_1)

{
  *param_1 = DAT_0048d484;
  if (*(char *)(param_1 + 0x2f) != '\0') {
    *DAT_0048d488 = 0;
  }
  return func_0048D1B0(param_1);
}

