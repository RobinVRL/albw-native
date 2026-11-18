#include "ghidra_types.h"

extern int func_0058FA08();
extern undefined4 DAT_0048fbb4;

// USA 0048FBB0 <- EU 0048FB88 (Ghidra, non-matching)
// GLOBAL DAT_0048fbb4 undefined4

undefined4 * func_0048FBB0(undefined4 *param_1)

{
  *param_1 = DAT_0048fbb4;
  if ((param_1[8] & 1) != 0) {
    func_0058FA08(param_1[5]);
  }
  return param_1;
}

