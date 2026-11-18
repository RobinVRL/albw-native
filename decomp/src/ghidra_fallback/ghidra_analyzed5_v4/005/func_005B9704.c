#include "ghidra_types.h"

extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern undefined4 *DAT_005b9704;
extern undefined4 *DAT_005b9708;
extern uint *DAT_005b970c;

// USA 005B9704 <- EU 005B96DC (Ghidra, non-matching)
// GLOBAL DAT_005b9704 undefined4 *
// GLOBAL DAT_005b9708 undefined4 *
// GLOBAL DAT_005b970c uint *

undefined4 func_005B9704(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9704;
  *DAT_005b9704 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9708;
  *DAT_005b9708 = 0;
  puVar1[1] = 0;
  return func_0010FD28(DAT_005b970c,0);
}

