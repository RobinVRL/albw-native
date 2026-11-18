#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_0059a408;
extern undefined4 DAT_0059a40c;
extern undefined4 DAT_0059a410;

// USA 0059A414 <- EU 0059A3EC (Ghidra, non-matching)
// GLOBAL DAT_0059a408 undefined4 *
// GLOBAL DAT_0059a40c undefined4
// GLOBAL DAT_0059a410 undefined4

undefined4 func_0059A414(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059a408;
  *DAT_0059a408 = 0;
  puVar1[1] = 0;
  return func_005902C0(puVar1);
}

