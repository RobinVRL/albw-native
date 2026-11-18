#include "ghidra_types.h"

extern int func_0040E2D0(undefined1 *param_1,float fparam_0);
extern float *DAT_0040e564;

// USA 0040E568 <- EU 0040E548 (Ghidra, non-matching)
// GLOBAL DAT_0040e564 float *

undefined1 * func_0040E568(undefined1 *param_1)

{
  func_0040E2D0(param_1,*DAT_0040e564);
  return param_1;
}

