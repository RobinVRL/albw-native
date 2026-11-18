#include "ghidra_types.h"

extern undefined4 DAT_00341218;

// USA 00341220 <- EU 003411FC (Ghidra, non-matching)
// GLOBAL DAT_00341218 undefined4

void func_00341220(int param_1)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x604) + 0x530) = DAT_00341218;
  return;
}

