#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_002df420;
extern undefined4 *DAT_002df424;

// USA 002DF418 <- EU 002DF3F4 (Ghidra, non-matching)
// GLOBAL DAT_002df420 undefined4
// GLOBAL DAT_002df424 undefined4 *

undefined4 * func_002DF418(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_002df424;
  *param_1 = DAT_002df420;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

