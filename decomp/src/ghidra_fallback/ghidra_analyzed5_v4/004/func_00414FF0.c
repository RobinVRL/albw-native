#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00415750(undefined4 *param_1);
extern uint *DAT_00415018;
extern undefined4 *DAT_0041501c;
extern undefined4 DAT_00415020;
extern undefined4 DAT_00415024;

// USA 00414FF0 <- EU 00414FD0 (Ghidra, non-matching)
// GLOBAL DAT_00415018 uint *
// GLOBAL DAT_0041501c undefined4 *
// GLOBAL DAT_00415020 undefined4
// GLOBAL DAT_00415024 undefined4

undefined4 * func_00414FF0(void)

{
  int iVar1;
  
  if (((*DAT_00415018 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00415018), iVar1 != 0)) {
    func_00415750(DAT_0041501c);
  }
  return DAT_0041501c;
}

