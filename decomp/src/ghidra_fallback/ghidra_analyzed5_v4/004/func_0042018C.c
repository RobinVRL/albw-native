#include "ghidra_types.h"

extern undefined4 DAT_00420194;

// USA 0042018C <- EU 0042016C (Ghidra, non-matching)
// GLOBAL DAT_00420194 undefined4

undefined4 * func_0042018C(undefined4 *param_1)

{
  *param_1 = DAT_00420194;
  if (*(char *)(param_1 + 0xb) != '\0') {
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return param_1;
}

