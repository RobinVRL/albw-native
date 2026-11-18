#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern undefined4 DAT_004fb318;

// USA 004FB30C <- EU 004FB2E4 (Ghidra, non-matching)
// GLOBAL DAT_004fb318 undefined4

void func_004FB30C(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xa8);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_0016A2FC(puVar1,param_2,DAT_004fb318,1);
  }
  *(undefined4 **)(param_1 + 0x418) = puVar2;
  return;
}

