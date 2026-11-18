#include "ghidra_types.h"

extern int func_0010C908(undefined4 *param_1);
extern undefined4 DAT_0010b87c;

// USA 0010B85C <- EU 0010B85C (Ghidra, non-matching)
// GLOBAL DAT_0010b87c undefined4

undefined4 * func_0010B85C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0010C908(param_1);
  *puVar1 = DAT_0010b87c;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  return puVar1;
}

