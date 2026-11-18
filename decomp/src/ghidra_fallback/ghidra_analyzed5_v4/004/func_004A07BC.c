#include "ghidra_types.h"

extern int *DAT_004a07b4;

// GLOBAL DAT_004a07b4 int *
// USA 004A07BC <- EU 004A0794 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void * func_004A07BC(void *param_1)

{
  if (*DAT_004a07b4 == 0) {
    *DAT_004a07b4 = (int)param_1;
    *(undefined1 *)((int)param_1 + 0xbc) = 1;
  }
  return param_1;
}

