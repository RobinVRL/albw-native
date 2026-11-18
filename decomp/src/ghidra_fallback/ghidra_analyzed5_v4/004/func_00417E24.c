#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00417e58;
extern undefined4 *DAT_00417e5c;

// USA 00417E24 <- EU 00417E04 (Ghidra, non-matching)
// GLOBAL DAT_00417e58 uint *
// GLOBAL DAT_00417e5c undefined4 *

undefined4 * func_00417E24(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((*DAT_00417e58 & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_00417e58), puVar1 = DAT_00417e5c, iVar2 != 0)) {
    puVar3 = DAT_00417e5c + 2;
    *DAT_00417e5c = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar3;
    puVar1[3] = puVar3;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
  }
  return DAT_00417e5c;
}

