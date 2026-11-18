#include "ghidra_types.h"

extern int func_0048A134(undefined4 *param_1);
extern int func_0048C22C(undefined4 *param_1);
extern int func_0058FA5C();
extern undefined4 DAT_0048c64c;

// USA 0048C650 <- EU 0048C628 (Ghidra, non-matching)
// GLOBAL DAT_0048c64c undefined4

undefined4 func_0048C650(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048c64c;
  func_0048C22C(param_1 + 0x14);
  puVar1 = func_0048A134(param_1);
  return func_0058FA5C((int)puVar1);
}

