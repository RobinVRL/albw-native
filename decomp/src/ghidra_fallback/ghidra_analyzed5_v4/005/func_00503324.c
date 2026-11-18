#include "ghidra_types.h"

extern int func_00230DD0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_0030E0A0(undefined4 *param_1);
extern undefined4 DAT_00503334;
extern undefined4 DAT_00503338;

// USA 00503324 <- EU 005032FC (Ghidra, non-matching)
// GLOBAL DAT_00503334 undefined4
// GLOBAL DAT_00503338 undefined4

undefined4 * func_00503324(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_00230DD0(param_1,DAT_00503334,0,0xff,1);
  *puVar1 = DAT_00503338;
  puVar1 = func_0030E0A0(puVar1 + 0x61);
  puVar1[0x57] = 0;
  return puVar1 + -0x61;
}

