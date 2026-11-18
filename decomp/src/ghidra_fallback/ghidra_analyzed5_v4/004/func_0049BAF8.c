#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0049bb04;

// USA 0049BAF8 <- EU 0049BAD0 (Ghidra, non-matching)
// GLOBAL DAT_0049bb04 undefined4

undefined4 * func_0049BAF8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0049bb04;
  if (param_1[4] != 0) {
    software_interrupt(0x23);
    param_1[4] = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

