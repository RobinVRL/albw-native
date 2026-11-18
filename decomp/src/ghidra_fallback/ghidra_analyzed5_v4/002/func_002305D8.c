#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_0030D010(int *param_1);
extern int func_005027C4();
extern undefined4 DAT_00230608;
extern int DAT_0023060c;

// USA 002305D8 <- EU 002305D8 (Ghidra, non-matching)
// GLOBAL DAT_00230608 undefined4
// GLOBAL DAT_0023060c int

undefined4 * func_002305D8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = DAT_00230608;
  piVar1 = func_0030D010(param_1 + 0x42);
  piVar1[-0x42] = DAT_0023060c;
  func_002E1B70(piVar1 + -0x17);
  puVar2 = (undefined4 *)func_005027C4(piVar1 + -0x42);
  return puVar2;
}

