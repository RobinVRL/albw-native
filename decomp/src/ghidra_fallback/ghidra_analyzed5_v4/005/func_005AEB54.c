#include "ghidra_types.h"

extern undefined4 *DAT_005aeb3c;
extern undefined4 DAT_005aeb40;

// USA 005AEB54 <- EU 005AEB2C (Ghidra, non-matching)
// GLOBAL DAT_005aeb3c undefined4 *
// GLOBAL DAT_005aeb40 undefined4

void func_005AEB54(void)

{
  *DAT_005aeb3c = DAT_005aeb40;
  return;
}

