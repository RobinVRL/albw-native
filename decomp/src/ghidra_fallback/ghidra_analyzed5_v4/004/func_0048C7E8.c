#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0048c7cc;

// USA 0048C7E8 <- EU 0048C7C0 (Ghidra, non-matching)
// GLOBAL DAT_0048c7cc undefined4

undefined4 * func_0048C7E8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048c7cc;
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

