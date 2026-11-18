#include "ghidra_types.h"

extern int func_00230DD0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_003A55A0(undefined4 *param_1);
extern undefined4 DAT_002be9d4;

// USA 002BE9D4 <- EU 002BE9B0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_002be9d4 undefined4

int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = func_00230DD0(param_1,param_2,param_3,param_4,param_5);
  *puVar1 = DAT_002be9d4;
  puVar1 = func_003A55A0(puVar1 + 0x61);
  return (int)(puVar1 + -0x61);
}

