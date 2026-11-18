#include "ghidra_types.h"

extern int func_004A1520();
extern int func_004EE540(undefined4 *param_1);
extern undefined4 DAT_00362808;

// USA 00362808 <- EU 003627E4 (Ghidra, non-matching)
// GLOBAL DAT_00362808 undefined4

undefined4 * func_00362808(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00362808;
  puVar1 = func_004EE540(param_1 + 0xb2);
  puVar1 = func_004EE540(puVar1 + -0x19);
  puVar1 = func_004A1520(puVar1 + -0x99);
  return puVar1;
}

