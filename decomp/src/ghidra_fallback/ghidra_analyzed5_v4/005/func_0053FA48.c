#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053faa0;
extern undefined4 *DAT_0053faa4;
extern undefined4 DAT_0053faa8;

// USA 0053FA48 <- EU 0053FA20 (Ghidra, non-matching)
// GLOBAL DAT_0053faa0 uint *
// GLOBAL DAT_0053faa4 undefined4 *
// GLOBAL DAT_0053faa8 undefined4

int func_0053FA48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 0x48);
  if (((*DAT_0053faa0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053faa0), iVar1 != 0)) {
    *DAT_0053faa4 = DAT_0053faa8;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_0053faa4), iVar1 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(puVar2 + 0x4b);
  }
  return iVar1;
}

