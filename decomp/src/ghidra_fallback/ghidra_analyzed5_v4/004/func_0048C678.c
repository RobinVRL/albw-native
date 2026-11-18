#include "ghidra_types.h"

extern int func_0048A134(undefined4 *param_1);
extern int func_0048C22C(undefined4 *param_1);
extern undefined4 DAT_0048c674;

// USA 0048C678 <- EU 0048C650 (Ghidra, non-matching)
// GLOBAL DAT_0048c674 undefined4

undefined4 * func_0048C678(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048c674;
  func_0048C22C(param_1 + 0x14);
  puVar1 = func_0048A134(param_1);
  return puVar1;
}

