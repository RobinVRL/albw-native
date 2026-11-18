#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);

// USA 004B95B8 <- EU 004B9590 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 undefined2

void func_004B95B8(int param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
                  undefined2 param_5)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)func_0010BAB4(0xe);
  if (puVar1 != (undefined1 *)0x0) {
    puVar1[1] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = param_4;
    *(undefined2 *)(puVar1 + 6) = param_5;
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 8) = param_4;
    *(undefined2 *)(puVar1 + 10) = param_5;
    *puVar1 = param_2;
    puVar1[2] = param_3;
  }
  *(undefined1 **)(param_1 + 0x6c) = puVar1;
  return;
}

