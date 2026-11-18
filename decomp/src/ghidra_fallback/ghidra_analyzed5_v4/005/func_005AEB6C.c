#include "ghidra_types.h"

extern undefined4 *DAT_005aeb54;
extern undefined4 DAT_005aeb58;

// USA 005AEB6C <- EU 005AEB44 (Ghidra, non-matching)
// GLOBAL DAT_005aeb54 undefined4 *
// GLOBAL DAT_005aeb58 undefined4

void func_005AEB6C(void)

{
  *DAT_005aeb54 = DAT_005aeb58;
  return;
}

