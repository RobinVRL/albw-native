#include "ghidra_types.h"

extern undefined4 *DAT_005ae87c;
extern undefined4 *DAT_005ae880;

// USA 005AE880 <- EU 005AE858 (Ghidra, non-matching)
// GLOBAL DAT_005ae87c undefined4 *
// GLOBAL DAT_005ae880 undefined4 *

void func_005AE880(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ae87c;
  *DAT_005ae87c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae880;
  *DAT_005ae880 = 0;
  puVar1[1] = 0;
  return;
}

