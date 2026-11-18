#include "ghidra_types.h"

extern int func_00361494(int param_1);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046c0d0;

// GLOBAL DAT_0046c0d0 int *
// USA 0046C0A0 <- EU 0046C0A0 (Ghidra, function missing from the decomp table)

void func_0046C0A0(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x98)) {
    func_00361494(*DAT_0046c0d0);
    func_0066DF38((undefined4 *)(param_1 + 0x98),1);
  }
  return;
}

