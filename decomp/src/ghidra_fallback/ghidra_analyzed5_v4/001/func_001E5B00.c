#include "ghidra_types.h"

extern int func_0058FA08();

// USA 001E5B00 <- EU 001E5B00 (Ghidra, non-matching)

undefined4 * func_001E5B00(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    func_0058FA08(param_1[1]);
    param_1[1] = 0;
    *param_1 = 0;
  }
  return param_1;
}

