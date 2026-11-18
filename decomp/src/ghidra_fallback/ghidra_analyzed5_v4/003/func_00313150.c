#include "ghidra_types.h"

extern undefined4 DAT_00313178;
extern int *DAT_0031317c;

// USA 00313150 <- EU 0031312C (Ghidra, non-matching)
// GLOBAL DAT_00313178 undefined4
// GLOBAL DAT_0031317c int *

void func_00313150(int *param_1)

{
  (**(code **)(*param_1 + 0xac))(param_1,10,0xffffffff);
  *(undefined4 *)(param_1[0x1e8] + 0x134) = DAT_00313178;
  param_1[0x28b] = *DAT_0031317c;
  *(undefined2 *)(param_1 + 0x28c) = 0x3c;
  *(undefined2 *)((int)param_1 + 0xa32) = 0x3c;
  return;
}

