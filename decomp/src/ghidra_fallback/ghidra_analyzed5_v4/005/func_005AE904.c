#include "ghidra_types.h"

extern undefined4 *DAT_005ae900;
extern undefined4 *DAT_005ae904;

// USA 005AE904 <- EU 005AE8DC (Ghidra, non-matching)
// GLOBAL DAT_005ae900 undefined4 *
// GLOBAL DAT_005ae904 undefined4 *

void func_005AE904(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ae900;
  *DAT_005ae900 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae904;
  *DAT_005ae904 = 0;
  puVar1[1] = 0;
  return;
}

