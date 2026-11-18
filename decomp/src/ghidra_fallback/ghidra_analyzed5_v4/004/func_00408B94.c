#include "ghidra_types.h"

extern undefined4 DAT_00408ba4;

// USA 00408B94 <- EU 00408B74 (Ghidra, non-matching)
// GLOBAL DAT_00408ba4 undefined4

undefined4 * func_00408B94(undefined4 *param_1)

{
  *param_1 = DAT_00408ba4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0x2f;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return param_1;
}

