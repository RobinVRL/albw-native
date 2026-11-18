#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_003c7ec0;

// USA 003C7ED8 <- EU 003C7EB4 (Ghidra, non-matching)
// GLOBAL DAT_003c7ec0 undefined4

undefined4 func_003C7ED8(void)

{
  return func_0010AC24(DAT_003c7ec0,&DAT_003c7ec0);
}

