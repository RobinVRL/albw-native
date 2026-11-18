#include "ghidra_types.h"

extern int func_0010C428(undefined4 *param_1);

// USA 00106FC4 <- EU 00106FC4 (Ghidra, non-matching)

undefined4 * func_00106FC4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010C428(param_1);
  puVar1[0x17] = puVar1 + 0x16;
  puVar1[0x18] = 0;
  puVar1[0x16] = puVar1 + 0x16;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0xffffffff;
  puVar1[0x1f] = 0xffffffff;
  puVar1[0x20] = 0xffffff;
  *(undefined1 *)(puVar1 + 0x21) = 1;
  *(undefined1 *)((int)puVar1 + 0x85) = 1;
  *(undefined1 *)((int)puVar1 + 0x86) = 1;
  puVar1[0x19] = 0;
  return puVar1;
}

