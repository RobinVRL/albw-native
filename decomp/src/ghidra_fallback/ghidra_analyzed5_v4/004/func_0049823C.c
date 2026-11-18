#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0048F99C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern undefined4 DAT_00498260;

// USA 0049823C <- EU 00498214 (Ghidra, non-matching)
// GLOBAL DAT_00498260 undefined4

void * func_0049823C(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0048F99C((undefined4 *)(param_1 + 0x10),0x1c,0xffffffff,0xffffffff,0xf);
  puVar2 = func_0010CE7C(puVar2 + -4);
  uVar1 = DAT_00498260;
  puVar2[0x50] = 0;
  *puVar2 = uVar1;
  *(undefined1 *)(puVar2 + 0x51) = 1;
  puVar2[0x52] = 0;
  puVar2[0x53] = 0;
  return puVar2;
}

