#include "ghidra_types.h"


// USA 004356B4 <- EU 00435694 (Ghidra, non-matching)

void func_004356B4(int *param_1)

{
  if ((char)param_1[0xc] == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1[7] = param_1[1];
    param_1[8] = param_1[2];
    param_1[9] = param_1[3];
  }
  param_1[4] = param_1[7];
  param_1[5] = param_1[8];
  param_1[6] = param_1[9];
  (**(code **)(*param_1 + 0x10))(param_1);
  param_1[7] = param_1[1];
  param_1[8] = param_1[2];
  param_1[9] = param_1[3];
  return;
}

