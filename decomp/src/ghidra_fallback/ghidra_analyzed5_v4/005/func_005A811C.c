#include "ghidra_types.h"

extern undefined4 *DAT_005a8118;
extern undefined4 *DAT_005a811c;

// USA 005A811C <- EU 005A80F4 (Ghidra, non-matching)
// GLOBAL DAT_005a8118 undefined4 *
// GLOBAL DAT_005a811c undefined4 *

void func_005A811C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a8118;
  *DAT_005a8118 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a811c;
  *DAT_005a811c = 0;
  puVar1[1] = 0;
  return;
}

