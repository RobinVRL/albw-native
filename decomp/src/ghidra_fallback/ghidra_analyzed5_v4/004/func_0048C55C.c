#include "ghidra_types.h"

extern int func_0048AC50(undefined4 *param_1);
extern undefined4 DAT_0048c564;

// USA 0048C55C <- EU 0048C534 (Ghidra, non-matching)
// GLOBAL DAT_0048c564 undefined4

undefined4 * func_0048C55C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0048AC50(param_1);
  uVar1 = DAT_0048c564;
  puVar2[1] = 1;
  *puVar2 = uVar1;
  puVar2[3] = 0;
  puVar2[2] = 1;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  return puVar2;
}

