#include "ghidra_types.h"

extern int func_002D5D3C(void *param_1);
extern undefined4 DAT_0034afa8;

// USA 0034AFB4 <- EU 0034AF90 (Ghidra, non-matching)
// GLOBAL DAT_0034afa8 undefined4

undefined4 * func_0034AFB4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0034afa8;
  *(undefined1 *)(param_1[0x14] + 0x52b) = 0;
  puVar1 = func_002D5D3C(param_1);
  return puVar1;
}

