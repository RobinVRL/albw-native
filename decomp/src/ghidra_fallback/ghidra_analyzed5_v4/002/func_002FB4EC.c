#include "ghidra_types.h"

extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_00664374(undefined4 *param_1,undefined1 param_2);

// USA 002FB4EC <- EU 002FB4C8 (Ghidra, non-matching)

void func_002FB4EC(int param_1)

{
  if (5 < *(int *)(param_1 + 0x8bc)) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x34;
    func_004FD038(param_1 + 0x5a8,1);
  }
  if (600 < *(int *)(param_1 + 0x8bc)) {
    func_00664374((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

