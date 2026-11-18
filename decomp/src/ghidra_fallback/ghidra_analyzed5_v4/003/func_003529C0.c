#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_00352a00;

// USA 003529C0 <- EU 0035299C (Ghidra, non-matching)
// GLOBAL DAT_00352a00 undefined4

undefined4 * func_003529C0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = puVar2;
  puVar2[7] = 0;
  uVar1 = DAT_00352a00;
  puVar2[8] = 0;
  *puVar2 = uVar1;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined2 *)(puVar2 + 0xd) = 0;
  *(undefined2 *)((int)puVar2 + 0x36) = 0;
  *(undefined2 *)(puVar2 + 0xe) = 0;
  *(undefined1 *)((int)puVar2 + 0x3a) = 1;
  *(undefined1 *)((int)puVar2 + 0x3b) = 1;
  *(undefined1 *)(puVar2 + 0xf) = 1;
  *(undefined1 *)((int)puVar2 + 0x3d) = 1;
  return puVar2;
}

