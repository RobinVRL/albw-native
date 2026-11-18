#include "ghidra_types.h"

extern int func_003248F8(undefined4 *param_1,int param_2);

// USA 002A6B90 <- EU 002A6B6C (Ghidra, non-matching)

undefined4 func_002A6B90(int param_1,int param_2)

{
  return func_003248F8(*(undefined4 **)(param_1 + 0x9dc),param_2);
}

