#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005a8530;
extern undefined4 DAT_005a8534;
extern undefined4 DAT_005a8538;
extern undefined4 DAT_005a853c;

// USA 005A8534 <- EU 005A850C (Ghidra, non-matching)
// GLOBAL DAT_005a8530 undefined4 *
// GLOBAL DAT_005a8534 undefined4
// GLOBAL DAT_005a8538 undefined4
// GLOBAL DAT_005a853c undefined4

undefined4 func_005A8534(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a8530;
  *DAT_005a8530 = DAT_005a8534;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return func_005902C0(puVar1);
}

