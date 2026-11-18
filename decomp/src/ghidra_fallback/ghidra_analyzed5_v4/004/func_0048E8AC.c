#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern undefined4 DAT_0048e89c;

// USA 0048E8AC <- EU 0048E884 (Ghidra, non-matching)
// GLOBAL DAT_0048e89c undefined4

undefined4 * func_0048E8AC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048e89c;
  puVar1 = func_0010B830(param_1 + 1);
  return puVar1 + -1;
}

