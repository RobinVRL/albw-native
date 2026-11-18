#include "ghidra_types.h"

extern int func_00503970(int param_1,uint param_2);
extern undefined4 DAT_002dff40;
extern int *DAT_002dff44;

// USA 002DFF3C <- EU 002DFF18 (Ghidra, non-matching)
// GLOBAL DAT_002dff40 undefined4
// GLOBAL DAT_002dff44 int *

undefined4 * func_002DFF3C(undefined4 *param_1)

{
  *param_1 = DAT_002dff40;
  func_00503970(*DAT_002dff44,10);
  return param_1;
}

