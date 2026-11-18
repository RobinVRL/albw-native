#include "ghidra_types.h"

extern int func_0066B580(undefined4 *param_1,undefined1 param_2);

// USA 0050AC38 <- EU 0050AC14 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_0050AC38(int param_1)

{
  if (*(char *)(param_1 + 0x466) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x460) < *(int *)(param_1 + 0x418)) {
    func_0066B580((undefined4 *)(param_1 + 0x418),1);
  }
  return;
}

