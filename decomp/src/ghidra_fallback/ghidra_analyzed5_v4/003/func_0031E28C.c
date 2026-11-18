#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0031e2a4;
extern int *DAT_0031e2a8;

// USA 0031E28C <- EU 0031E268 (Ghidra, non-matching)
// GLOBAL DAT_0031e2a4 undefined4
// GLOBAL DAT_0031e2a8 int *

undefined4 * func_0031E28C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0031e2a4;
  *(undefined1 *)(*DAT_0031e2a8 + 0x2c1c) = 0;
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

