#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0048bff8;
extern undefined4 *DAT_0048bffc;

// USA 0048BFF4 <- EU 0048BFCC (Ghidra, non-matching)
// GLOBAL DAT_0048bff8 undefined4
// GLOBAL DAT_0048bffc undefined4 *

undefined4 * func_0048BFF4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0048bffc;
  *param_1 = DAT_0048bff8;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

