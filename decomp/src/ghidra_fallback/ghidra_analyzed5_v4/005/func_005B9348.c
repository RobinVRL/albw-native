#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005b9344;
extern undefined4 DAT_005b9348;
extern undefined4 DAT_005b934c;

// USA 005B9348 <- EU 005B9320 (Ghidra, non-matching)
// GLOBAL DAT_005b9344 undefined4 *
// GLOBAL DAT_005b9348 undefined4
// GLOBAL DAT_005b934c undefined4

undefined4 func_005B9348(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9344;
  *DAT_005b9344 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0xffffffff;
  return func_005902C0(puVar1);
}

