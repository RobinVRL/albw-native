#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0049f408;

// USA 0049F410 <- EU 0049F3E8 (Ghidra, non-matching)
// GLOBAL DAT_0049f408 undefined4

undefined4 func_0049F410(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0049f408;
  puVar1 = func_0049116C(param_1 + 6);
  return func_004A1520(puVar1 + -6);
}

