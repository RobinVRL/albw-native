#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C3980(undefined4 *param_1,uint param_2);

// USA 004F0810 <- EU 004F07E8 (Ghidra, non-matching)

void func_004F0810(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xa8);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_002C3980(puVar1,param_2 & 0xff);
  }
  *(undefined4 **)(param_1 + 0x38) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[0x25] = *param_3;
    puVar2[0x26] = param_3[1];
    puVar2[0x27] = param_3[2];
    *(undefined1 *)(puVar2 + 0x28) = 1;
  }
  return;
}

