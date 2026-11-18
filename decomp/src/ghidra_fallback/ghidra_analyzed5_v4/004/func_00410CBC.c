#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 00410CBC <- EU 00410C9C (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_00410CBC(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  func_0010C0C0((int *)(param_2 + 0x184));
  *(undefined4 *)(param_2 + 0x180) = param_1;
  return func_0010C160((int *)(param_2 + 0x184));
}

