#include "ghidra_types.h"

extern int func_0010BF5C(undefined4 *param_1);
extern undefined4 *DAT_005ede38;
extern undefined4 *DAT_005ede3c;
extern undefined4 *DAT_005ede40;

// USA 005EDE38 <- EU 005EDE10 (Ghidra, non-matching)
// GLOBAL DAT_005ede38 undefined4 *
// GLOBAL DAT_005ede3c undefined4 *
// GLOBAL DAT_005ede40 undefined4 *

undefined4 func_005EDE38(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ede38;
  *DAT_005ede38 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ede3c;
  *DAT_005ede3c = 0;
  puVar1[1] = 0;
  return func_0010BF5C(DAT_005ede40);
}

