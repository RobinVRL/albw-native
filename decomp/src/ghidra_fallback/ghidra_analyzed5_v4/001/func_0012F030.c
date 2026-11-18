#include "ghidra_types.h"

extern int func_0042018C(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0012f07c;

// USA 0012F030 <- EU 0012F030 (Ghidra, non-matching)
// GLOBAL DAT_0012f07c undefined4

undefined4 * func_0012F030(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0012f07c;
  puVar1 = func_0042018C(param_1 + 0x1df);
  puVar1 = func_0042018C(puVar1 + -0x1d7);
  puVar1 = func_004A1520(puVar1 + -8);
  return puVar1;
}

