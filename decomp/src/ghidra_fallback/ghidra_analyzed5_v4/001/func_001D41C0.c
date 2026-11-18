#include "ghidra_types.h"

extern int func_003248F8(undefined4 *param_1,int param_2);

// USA 001D41C0 <- EU 001D41C0 (Ghidra, non-matching)

undefined4 func_001D41C0(int param_1,int param_2)

{
  if (*(undefined4 **)(param_1 + 0x450) != (undefined4 *)0x0) {
    return func_003248F8(*(undefined4 **)(param_1 + 0x450),param_2);
  }
  return 0;
}

