#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0051B6D0(int param_1);
extern float DAT_00423abc;
extern int *DAT_00423ac0;

// USA 00423AA8 <- EU 00423A88 (Ghidra, non-matching)
// GLOBAL DAT_00423abc float
// GLOBAL DAT_00423ac0 int *

undefined4 func_00423AA8(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 5;
  fparam_0 = DAT_00423abc;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
  return func_0051B6D0(*DAT_00423ac0);
}

