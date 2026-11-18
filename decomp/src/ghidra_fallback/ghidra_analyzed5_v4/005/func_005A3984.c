#include "ghidra_types.h"

extern undefined4 *DAT_005a396c;
extern undefined4 DAT_005a3970;

// USA 005A3984 <- EU 005A395C (Ghidra, non-matching)
// GLOBAL DAT_005a396c undefined4 *
// GLOBAL DAT_005a3970 undefined4

void func_005A3984(void)

{
  *DAT_005a396c = DAT_005a3970;
  return;
}

