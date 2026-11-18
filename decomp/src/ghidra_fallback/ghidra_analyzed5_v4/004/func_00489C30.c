#include "ghidra_types.h"

extern int func_0048F99C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern undefined4 DAT_00489c74;

// USA 00489C30 <- EU 00489C08 (Ghidra, non-matching)
// GLOBAL DAT_00489c74 undefined4

void * func_00489C30(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = func_0048F99C((undefined4 *)(param_1 + 4),0x1c,0x14,0x18,0xf);
  puVar1[-1] = DAT_00489c74;
  *(undefined1 *)(puVar1 + 0x4c) = 0;
  puVar1[0x4d] = param_2;
  puVar1[0x4f] = puVar1 + 0x4e;
  puVar1[0x50] = 0;
  puVar1[0x4e] = puVar1 + 0x4e;
  puVar1[0x53] = puVar1 + 0x52;
  puVar1[0x54] = 0;
  puVar1[0x52] = puVar1 + 0x52;
  puVar1[0x51] = 4;
  puVar1[0x55] = 0x148;
  return puVar1 + -1;
}

