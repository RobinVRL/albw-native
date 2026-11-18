#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003183C0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607f04;

// USA 00607F04 <- EU 00607EDC (Ghidra, non-matching)
// GLOBAL DAT_00607f04 undefined4

undefined4 func_00607F04(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607f04);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003183C0(puVar1,param_1);
  }
  return 0;
}

