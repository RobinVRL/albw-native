#include "ghidra_types.h"

extern undefined4 *DAT_005c2878;
extern undefined4 DAT_005c287c;

// USA 005C2890 <- EU 005C2868 (Ghidra, non-matching)
// GLOBAL DAT_005c2878 undefined4 *
// GLOBAL DAT_005c287c undefined4

void func_005C2890(void)

{
  *DAT_005c2878 = DAT_005c287c;
  return;
}

