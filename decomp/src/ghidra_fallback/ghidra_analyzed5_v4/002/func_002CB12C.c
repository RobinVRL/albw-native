#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_002cb134;

// USA 002CB12C <- EU 002CB108 (Ghidra, non-matching)
// GLOBAL DAT_002cb134 undefined4

undefined4 * func_002CB12C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  uVar1 = DAT_002cb134;
  puVar2[4] = 0;
  *puVar2 = uVar1;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  return puVar2;
}

