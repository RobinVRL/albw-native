#include "ghidra_types.h"

extern undefined4 *DAT_005a3934;

// USA 005A394C <- EU 005A3924 (Ghidra, non-matching)
// GLOBAL DAT_005a3934 undefined4 *

void func_005A394C(void)

{
  *DAT_005a3934 = 0xffffffff;
  return;
}

