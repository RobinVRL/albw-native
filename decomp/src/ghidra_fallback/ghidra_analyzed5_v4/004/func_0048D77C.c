#include "ghidra_types.h"

extern int func_00489C30(int param_1,undefined4 param_2);
extern undefined4 DAT_0048d77c;

// USA 0048D77C <- EU 0048D754 (Ghidra, non-matching)
// GLOBAL DAT_0048d77c undefined4

void * func_0048D77C(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = func_00489C30(param_1,param_2);
  *puVar1 = DAT_0048d77c;
  *(undefined1 *)(puVar1 + 0x4d) = 2;
  puVar1[0x40] = 0xffffffff;
  puVar1[0x41] = 0xffffffff;
  return puVar1;
}

