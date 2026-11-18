#include "ghidra_types.h"

extern int func_004A0C0C(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_00330698;

// USA 003306A0 <- EU 0033067C (Ghidra, non-matching)
// GLOBAL DAT_00330698 undefined4

undefined4 * func_003306A0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = DAT_00330698;
  iVar1 = func_004A0C0C(param_1 + 4);
  puVar2 = func_004A1520((undefined4 *)(iVar1 + -0x10));
  return puVar2;
}

