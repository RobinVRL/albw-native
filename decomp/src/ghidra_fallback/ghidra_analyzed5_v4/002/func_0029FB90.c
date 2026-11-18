#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0029fb98;
extern undefined4 *DAT_0029fb9c;

// USA 0029FB90 <- EU 0029FB6C (Ghidra, non-matching)
// GLOBAL DAT_0029fb98 undefined4
// GLOBAL DAT_0029fb9c undefined4 *

undefined4 * func_0029FB90(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0029fb9c;
  *param_1 = DAT_0029fb98;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

