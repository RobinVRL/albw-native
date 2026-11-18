#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d0f28;
extern undefined4 DAT_005d0f2c;
extern undefined4 DAT_005d0f30;

// USA 005D0F34 <- EU 005D0F0C (Ghidra, non-matching)
// GLOBAL DAT_005d0f28 undefined4 *
// GLOBAL DAT_005d0f2c undefined4
// GLOBAL DAT_005d0f30 undefined4

undefined4 func_005D0F34(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0f28;
  *DAT_005d0f28 = 0;
  puVar1[1] = 0;
  return func_005902C0(puVar1);
}

