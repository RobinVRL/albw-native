#include "ghidra_types.h"

extern int func_0010C3D8(undefined4 *param_1);
extern int func_0010C8F8(undefined4 *param_1);
extern undefined4 DAT_0010b950;

// USA 0010B930 <- EU 0010B930 (Ghidra, non-matching)
// GLOBAL DAT_0010b950 undefined4

void * func_0010B930(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0010C3D8((undefined4 *)(param_1 + 4));
  puVar2 = func_0010C8F8((undefined4 *)(iVar1 + -4));
  *puVar2 = DAT_0010b950;
  return puVar2;
}

