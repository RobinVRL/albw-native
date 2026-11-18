#include "ghidra_types.h"

extern int func_004A1520();
extern int func_0058FA5C();
extern undefined4 DAT_004952cc;

// USA 004952D0 <- EU 004952A8 (Ghidra, non-matching)
// GLOBAL DAT_004952cc undefined4

undefined4 * func_004952D0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_004952cc;
  func_0058FA5C(param_1[8]);
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

