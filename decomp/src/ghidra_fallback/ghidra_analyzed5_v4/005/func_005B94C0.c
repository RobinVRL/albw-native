#include "ghidra_types.h"

extern undefined4 *DAT_005b94bc;
extern undefined4 *DAT_005b94c0;

// USA 005B94C0 <- EU 005B9498 (Ghidra, non-matching)
// GLOBAL DAT_005b94bc undefined4 *
// GLOBAL DAT_005b94c0 undefined4 *

void func_005B94C0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b94bc;
  *DAT_005b94bc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b94c0;
  *DAT_005b94c0 = 0;
  puVar1[1] = 0;
  return;
}

