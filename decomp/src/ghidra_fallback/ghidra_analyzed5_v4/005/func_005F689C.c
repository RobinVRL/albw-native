#include "ghidra_types.h"

extern undefined4 *DAT_005f688c;
extern undefined4 *DAT_005f6890;

// USA 005F689C <- EU 005F6874 (Ghidra, non-matching)
// GLOBAL DAT_005f688c undefined4 *
// GLOBAL DAT_005f6890 undefined4 *

void func_005F689C(void)

{
  *DAT_005f688c = 0;
  *DAT_005f6890 = 0;
  return;
}

