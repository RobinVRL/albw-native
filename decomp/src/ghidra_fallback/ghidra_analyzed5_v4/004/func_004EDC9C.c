#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004edcd4;

// USA 004EDC9C <- EU 004EDC74 (Ghidra, non-matching)
// GLOBAL DAT_004edcd4 undefined4

undefined4 * func_004EDC9C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  uVar1 = DAT_004edcd4;
  puVar2[4] = 0;
  *puVar2 = uVar1;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 1;
  puVar2[8] = 0;
  *(undefined2 *)(puVar2 + 9) = 0;
  puVar2[10] = 0;
  *(undefined2 *)(puVar2 + 0xb) = 0xff;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = puVar2;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(undefined1 *)(puVar2 + 0x11) = 1;
  return puVar2;
}

