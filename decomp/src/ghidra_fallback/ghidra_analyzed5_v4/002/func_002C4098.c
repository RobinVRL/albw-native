#include "ghidra_types.h"

extern int func_004D08D4(undefined4 *param_1);
extern undefined4 DAT_002c40ac;

// USA 002C4098 <- EU 002C4074 (Ghidra, non-matching)
// GLOBAL DAT_002c40ac undefined4

undefined4 * func_002C4098(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_004D08D4(param_1);
  *puVar1 = DAT_002c40ac;
  puVar1[0x5e] = 0;
  puVar1[0x5f] = 0;
  puVar1[0x60] = 0;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  puVar1[99] = 0;
  return puVar1;
}

