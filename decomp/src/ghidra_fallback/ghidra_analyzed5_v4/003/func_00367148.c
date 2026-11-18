#include "ghidra_types.h"

extern int func_002D5D3C(void *param_1);
extern int func_004EE540(undefined4 *param_1);
extern undefined4 DAT_0036715c;
extern undefined4 DAT_00367160;

// USA 00367148 <- EU 00367124 (Ghidra, non-matching)
// GLOBAL DAT_0036715c undefined4
// GLOBAL DAT_00367160 undefined4

undefined4 func_00367148(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_0036715c;
  *param_1 = DAT_00367160;
  *(undefined4 *)(param_1[0x13] + 0x100) = uVar1;
  *(undefined1 *)(param_1[0xb] + 199) = 1;
  puVar2 = func_004EE540(param_1 + 0x33);
  func_002D5D3C(puVar2 + -0x33);
  return (undefined4)param_1;
}

