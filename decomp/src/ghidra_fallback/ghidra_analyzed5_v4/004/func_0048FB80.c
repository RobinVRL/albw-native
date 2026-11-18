#include "ghidra_types.h"

extern int func_0058FA08();
extern int func_0058FA5C();
extern undefined4 DAT_0048fb84;

// USA 0048FB80 <- EU 0048FB58 (Ghidra, non-matching)
// GLOBAL DAT_0048fb84 undefined4

undefined4 func_0048FB80(undefined4 *param_1)

{
  *param_1 = DAT_0048fb84;
  if ((param_1[8] & 1) != 0) {
    func_0058FA08(param_1[5]);
  }
  return func_0058FA5C((int)param_1);
}

