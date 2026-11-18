#include "ghidra_types.h"

extern int func_0036C408(undefined4 param_1,undefined4 param_2);
extern undefined4 *DAT_0026863c;
extern undefined4 *DAT_00268640;

// USA 002685C4 <- EU 002685EC (Ghidra, non-matching)
// GLOBAL DAT_0026863c undefined4 *
// GLOBAL DAT_00268640 undefined4 *

undefined4 func_002685C4(int param_1)

{
  if (*(char *)(param_1 + 0xbac) == '\0') {
    *(undefined1 *)(param_1 + 0xbac) = 1;
    *(undefined1 *)(param_1 + 0xaa0) = 0;
    func_0036C408(param_1 + 0x9ac,*DAT_0026863c);
    return func_0036C408(param_1 + 0x9ac,*DAT_00268640);
  }
  return 0;
}

