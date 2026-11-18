#include "ghidra_types.h"

extern undefined4 DAT_004fc160;

// USA 004FC174 <- EU 004FC14C (Ghidra, non-matching)
// GLOBAL DAT_004fc160 undefined4

void func_004FC174(int param_1)

{
  *(undefined4 *)(param_1 + 0x4cc) = DAT_004fc160;
  return;
}

