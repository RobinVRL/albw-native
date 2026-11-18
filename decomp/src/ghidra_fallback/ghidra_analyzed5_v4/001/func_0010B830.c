#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010DEB0(undefined4 *param_1);
extern undefined4 DAT_0010b858;

// USA 0010B830 <- EU 0010B830 (Ghidra, non-matching)
// GLOBAL DAT_0010b858 undefined4

undefined4 * func_0010B830(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0010CE7C(param_1);
  *puVar1 = DAT_0010b858;
  puVar1[4] = 0;
  func_0010DEB0(puVar1 + 4);
  return puVar1;
}

