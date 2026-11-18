#include "ghidra_types.h"

extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern undefined4 DAT_00399a1c;

// USA 00399A2C <- EU 00399A08 (Ghidra, non-matching)
// GLOBAL DAT_00399a1c undefined4

undefined4 * func_00399A2C(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = func_003ABA3C(param_1,param_2);
  *puVar1 = DAT_00399a1c;
  return puVar1;
}

