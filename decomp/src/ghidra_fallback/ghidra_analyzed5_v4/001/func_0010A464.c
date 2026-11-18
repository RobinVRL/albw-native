#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_0010a4c8;

// USA 0010A464 <- EU 0010A464 (Ghidra, non-matching)
// GLOBAL DAT_0010a4c8 undefined4

undefined4 * func_0010A464(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_0010a4c8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0xffffffff;
  puVar1[0xe] = 0xffffffff;
  puVar1[0xf] = 0xffffffff;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0xffffffff;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)((int)puVar1 + 0x51) = 0xff;
  puVar1[0x16] = 0;
  return puVar1;
}

