#include "ghidra_types.h"

extern int func_00104914(undefined4 param_1);
extern int func_001049DC(int param_1);
extern int DAT_00100ec0;

// USA 00100EA4 <- EU 00100EA4 (Ghidra, non-matching)
// GLOBAL DAT_00100ec0 int

undefined4 func_00100EA4(void)

{
  if (*(int *)(DAT_00100ec0 + 8) != 0) {
    return func_001049DC(*(int *)(DAT_00100ec0 + 8));
  }
  return func_00104914(0);
}

