#include "ghidra_types.h"

extern int func_0058FA08();

// USA 0048C22C <- EU 0048C204 (Ghidra, non-matching)

void func_0048C22C(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    func_0058FA08(param_1[2]);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

